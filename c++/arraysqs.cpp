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

