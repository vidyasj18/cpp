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


