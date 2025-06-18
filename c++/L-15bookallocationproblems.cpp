// qs - 1: book allocation problem

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// bool isPossible(int arr[], int n, int m, int mid) {
//     int studentCount = 1;
//     int pagesum = 0;

//     for(int i = 0; i<n; i++) {
//         if(pagesum + arr[i] <= mid) {
//             pagesum = pagesum + arr[i];
//         }
//         else {
//             studentCount++;
//             if(studentCount > m || arr[i] > mid) {
//                 return false;
//             }
//             pagesum = arr[i];
//         }
//     }
//     return true;
// }

// int allocateBooks(int arr[], int n, int m) {
//     int s = 0;
//     int sum = 0;

//     for(int i = 0; i<n; i++) {
//         sum = sum + arr[i];
//     }
//     int e = sum;
//     int ans = -1;
//     int mid = s + (e-s)/2;

//     while(s<=e) {
//         if(isPossible(arr,n,m,mid)) {
//             ans = mid;
//             e = mid - 1;
//         }
//         else {
//             s = mid + 1;
//         }
//         mid = s + (e-s)/2;
//     }
//     cout << ans << endl;
// }

// int main() {

//     int arr[4] = {10,20,30,40};
//     int m = 2;
//     int n = 4;

//     cout << allocateBooks(arr,n,m) << endl;

// }

// painters partition problem --- HW















//  qs - 3 : aggressive cows:

bool isPossible(int stalls[],int k,int mid) {
    int cowcount = 1;
    int lastpos = stalls[0];

    for(int i = 0; i<5; i++) {

        if(stalls[i] - lastpos >= mid) {
            cowcount++;
            if(cowcount == k) {
                return true;
            }
            lastpos = stalls[i];
        }
    }
    return false;
}

int main() {
    int stalls[5] = {1,2,3,4,5};
    //sort(stalls.begin(),stalls.end());

    int s = 0;
    int maxi = -1;
    for(int i = 0; i<5; i++) {
        maxi = max(maxi,stalls[i]);
    }
    int e = maxi;
    int k = 2;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s<=e) {
        if(isPossible(stalls,k,mid)) {
            ans = mid;
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    cout << ans << endl;
}

//HW in description

