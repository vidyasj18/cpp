#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// qs - 1 : set matrix zeroes - LEETCODE

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> ans;
        for(int i = 0; i<m; i++) {
            for(int j = 0; j<n; j++) {
                if(matrix[i][j] == 0) {
                    ans.push_back({i,j});
                }
            }
        }

        for(auto front : ans) {
            int it = front[0];
            int jt = front[1];
            for(int i = 0; i<m; i++) {
                for(int j = 0; j<n; j++) {
                    matrix[i][jt] = 0;
                    matrix[it][j] = 0;
                }
            }
            
        }
    }
};


// qs - 2 : sort 0s, 1s, 2s - leetcode

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = 0;
        int one = 0;
        int two = 0;

        for(int i = 0; i<nums.size(); i++) {
            if(nums[i]==0) {
                zero++;
            }

            else if(nums[i]==1) {
                one++;
            }

            else if(nums[i]==2) {
                two++;
            }
        }

        for(int i = 0; i<nums.size(); i++) {
            if(zero!=0) {
                nums[i] = 0;
                zero--;
            }

            else if(one!=0) {
                nums[i] = 1;
                one--;
            }

            else if(two!=0) {
                nums[i] = 2;
                two--;
            }
        }
    }
};


// qs - 3 : buy and sell stock - leetcode

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        // brute force approach

        long long ans = 0;

        for(long long i = 0; i<prices.size(); i++) {
            for(long long j = i+1; j<prices.size(); j++) {
                if(prices[j]-prices[i] > ans) {
                    ans = prices[j] - prices[i];
                }
            }
        }

        return ans;
    }
};


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // optimised approach - using kadane's algo.

        int buy = prices[0];
        int profit = 0;

        // iterate from after the buy function. buy = 0 so start from 1.
        for(int i = 1; i<prices.size(); i++) {
            if(prices[i]<buy) {
                buy = prices[i];
            }

            else if(profit < prices[i] - buy) {
                profit = prices[i] - buy;
            }
        }

        return profit;
    }
};

// qs - 4 : Rotate matrix - leetcode

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        // vertical reversal 
        for(int j = 0; j<n; j++) {
            int s = 0;
            int e = n-1;

            while(s<e) {
                swap(matrix[s][j],matrix[e][j]);
                s++;
                e--;
            }

        }

        // Transpose
        for(int i = 0; i<n; i++) {
            for(int j = i+1; j<n; j++) {
                if(i!=j) {
                    swap(matrix[i][j],matrix[j][i]);
                }
            }
        }
    }
};


// qs - 5 : merge 2 sorted array into 1 array

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int a = m-1;
        int b = n-1;
        int r = m + n-1;

        while(b>=0) {
            if(a>=0 && nums1[a] > nums2[b]) {
                nums1[r] = nums1[a];
                a--;
                r--;
            }

            else {
                nums1[r] = nums2[b];
                b--;
                r--;
            }

        }
    }
};



// qs - 6 : Find the duplicate number - Leetcode
// [1,n] - 1 element is repeating

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // Brute force approach

        // int n = nums.size();
        // int ans = -1;
        // for(int i = 0; i<n; i++) {
        //     for(int j = i+1; j<n; j++) {
        //         if(i<n-1 && nums[i]==nums[j]) {
        //             ans = nums[i];
        //         }
        //     }
        // }

        // return ans;

        // optimised approach - linkedlist cycle method

        // mark slow and fast pointer at the same element initially
        int fast = nums[0];
        int slow = nums[0];

        // while the case slow == fast 
        // move slow pointer 1 step
        // move fast pointer 2 steps
        do {
            slow = nums[slow]; // +1 step forward
            fast = nums[nums[fast]]; // +2 step forward
        } while(slow!=fast);

        // assign slow to the initially assigned element
        slow = nums[0];

        // move slow and fast pointer 1 step each time
        // when the slow and fast pointer meets that is where the cycle
        // exists and that is the duplicate number
        while(slow!=fast) {
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;

    }
};


// qs - 7 : find missing and repeated values in a grid - Leetcode
// You are given a 0-indexed 2D integer matrix grid of size n * n with values in the range [1, n2]. 
// Each integer appears exactly once except a which appears twice and b which is missing. 
// The task is to find the repeating and missing numbers a and b.
// Return a 0-indexed integer array ans of size 2 where ans[0] equals to a and ans[1] equals to b.

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        // using hashing
        int n = grid.size();
        int rpt = 0;
        int mis = 0;

        // make a vector of n*n size and mark as 0
        vector<int> ans(n*n + 1 ,0);

        // go through all the grid memebers and increase their 
        // counting in the vector ans

        for(int i = 0; i<n; i++) {
            for(int j = 0; j<n; j++) {
                ans[grid[i][j]]++;

                // if the counting increases to 2 
                // that is repeating value
                if(ans[grid[i][j]]==2) {
                    rpt = grid[i][j];
                }
            }
        }

        // check if anything is zero in given ans vector
        // if it is zero, missing number is that vector index
        for(int i = 1; i<n*n + 1; i++) {
            if(ans[i]==0) {
                mis = i;
            }
        }

        // ans1 vector and push rpt and mis
        vector<int> ans1;
        ans1.push_back(rpt);
        ans1.push_back(mis);

        return ans1;
    }
};


// qs - 8 : Search a 2d matrix - Leetcode
// given target is an element, we have to check if it exists or not.

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int start = 0;
        int end = row*col - 1;
        int mid = start + (end-start)/2;

        while(start<=end) {

            int element = matrix[mid/col][mid%col];
            if(element == target) {
                return 1;
            }
            if(element < target) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
            mid = start + (end-start)/2;
        }
        return 0;
    }
    
};


// qs - 10 : search majority element in an array - Leetcode
// majority element is the element which appears more than n/2 times

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        // sort the array
        sort(nums.begin(),nums.end());

        // return array at index n/2 - anyways this should return the correct ans
        return nums[n/2];

        
    }
};


// qs - 11 : 2 sum problem - Leetcode
// when 2 elements are added and their summation equals target
// return ins=dexes of those 2 elements

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i = 0; i<nums.size(); i++) {
            for(int j = i+1; j<nums.size(); j++) {
                if(nums[i]+nums[j]==target) {
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        } 

        return ans;
    }
};


// qs - 12 : calculate maximum subarray - leecode
// T.C : O(n)     S.C : O(1)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        // optimised approach using kadanes algo
        int currsum = 0;
        int maxsum = INT_MIN;

        for(int i = 0; i<nums.size(); i++) {
            // add elements to currsum
            currsum = currsum + nums[i];

            // maxsum becomes equal to max value of currsum after addition or maxsum before addition
            maxsum = max(currsum,maxsum);

            // if currsum becomes negative then set that to 0
            // then curr sum is calculated from next element of nums[i]
            // or current i
            if(currsum < 0) {
                currsum = 0;
            }
        }

        return maxsum;
    }
};

