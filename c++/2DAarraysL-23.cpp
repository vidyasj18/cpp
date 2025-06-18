#include<iostream>
#include<limits.h>
using namespace std;

// check if target is present or not

// bool isPresent(int arr[][3],int target,int i,int j) {
//     for(int i = 0; i<3; i++) {
//         for(int j = 0; j<3; j++) {
//             if(arr[i][j] == target) {
//                 return 1;
//             }
//         }
//     }
//     return 0;
// }

// int main() {
//     int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//     for(int i = 0; i<3; i++) {
//         for(int j = 0; j<3; j++) {
//             cout << arr[i][j] << " ";
//         }
//     }
//     cout << endl;

//     int target = 10;
//     int i = 3;
//     int j = 3;

//     cout << isPresent(arr,target,i,j) << endl;
// }

// print rowwise sum

// void rowsum(int arr[][3],int i,int j) {


//     for(int i = 0; i<3; i++) {
//         int sum = 0;
//         for(int j = 0; j<3; j++) {
//             sum = sum + arr[i][j];
//         }
//         cout << sum << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int arr[3][3] = {1,2,3,4,5,6,7,8,9};

//     int i = 3;
//     int j = 3;

//     rowsum(arr,i,j);
//     cout << endl;
// }

// column wise sum

// void colsum(int arr[][3],int i,int j) {


//     for(int j = 0; j<3; j++) {
//         int sum = 0;
//         for(int i = 0; i<3; i++) {
//             sum = sum + arr[i][j];
//         }
//         cout << sum << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int arr[3][3] = {1,2,3,4,5,6,7,8,9};

//     int i = 3;
//     int j = 3;

//     colsum(arr,i,j);
//     cout << endl;
// }

// largest rowsum

// void largestRowsum(int arr[][3],int i,int j) {
//     int maxi = INT_MIN;
//     int rowIndex = -1;

//     for(int i = 0; i<3; i++) {
//         int sum = 0;
//         for(int j = 0; j<3; j++) {
//             sum = sum + arr[i][j];
//     }

//     if(sum > maxi) {
//     maxi = sum;
//     rowIndex = i;
//     }
//     }
//     cout << " lagest sum is " << maxi << endl;
//     return rowIndex;
// }

// int main() {
//     int arr[3][3] = {1,2,3,4,5,6,7,8,9};

//     int i = 3;
//     int j = 3;

//    int ansIndex = largestRowsum(arr,3,3);
//    cout << " max row is at index " << ansIndex << endl;

//    return 0;
// }

// wave print problem






// spiral print





// HW - rotate matrix by 90degree



// seaarch a 2d matrix





