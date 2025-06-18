// reverse an array: qs1

// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> reverse(vector<int> v) {
//     int s = 0;
//     int e = v.size() - 1;
//     while(s<=e) {
//         swap(v[s],v[e]);
//         s++;
//         e--;
//     }
//     return v;
// }

// void print(vector<int> v) {
//     for(int i = 0; i<v.size(); i++) {
//         cout << v[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     vector<int> v;
//     v.push_back(10);
//     v.push_back(2);
//     v.push_back(4);
//     v.push_back(7);
//     v.push_back(9);

//     vector<int> ans = reverse(v);
//     print(ans);

//     cout << endl;
// }

// merge 2 sorted arrays - qs 3:

// #include<iostream>
// using namespace std;

// int merge(int arr1[],int m,int arr2[],int n,int arr3[]) {
//     int k = 8;
//     int i = 0;
//     int j = 0;
//     int k = 0;
//    while(i<m && j<n) {
//     if(arr1[i] < arr2[j]) {
//         arr3[k] = arr1[i];
//         k++;
//         i++;
//     }
//     else {
//         arr3[k] = arr2[j];
//         k++;
//         j++;
//     }
//    } 

//    while(i<n) {
//     arr3[k] = arr1[i];
//     k++;
//     i++;       
//    }
//    while(j<m) {
//     arr3[k] = arr2[j];
//     k++;
//     j++;
//    }
// }
// void print(int ans[]) {
//     for(int i = 0; i<8; i++) {
//         cout << ans[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int m = 5;
//     int n = 3;
//     int k = 8;
//     int arr1[5] = {1,3,5,7,9};
//     int arr2[3] = {2,4,6};

//     int ans[8] = merge(arr1,5,arr2,3,arr3[]);
//     print(arr3);
//     cout << endl;

//     return 0;
// }

// move zeroes - qs 3:

// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int i = 0;
//         for(int j = 0; j<nums.size(); j++) {
//             if(nums[j] != 0) {
//                 swap(nums[i],nums[j]);
//                 i++;
//             }
//         }
//     }
// };

// l21 - qs solving

// qs - 1: rotate arrays:
































