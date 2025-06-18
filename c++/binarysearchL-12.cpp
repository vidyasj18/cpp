// condition: element should be in monotonic function
// 1. find mid element
#include<iostream>
using namespace std;

// int binarySearch(int arr[], int size, int key) {
//     int start = 0;
//     int end = size - 1;

//     int mid = start + (end - start)/2;

//     while(start <= end) {
//         if(arr[mid] == key) {
//             return mid;
//         }

//         if(key > arr[mid]) {
//             start = mid + 1;
//         }

//         if(key < arr[mid]) {
//             end = mid - 1;
//         }

//         mid = start + (end - start)/2;
//     }
//     return -1;
// }

// int main() {
//     int even[6] = {2,4,6,8,12,18};
//     int odd[5] = {3,8,11,14,16};

//     int evenIndex = binarySearch(even,6,6);
//     int oddIndex = binarySearch(odd,5,11);

//     cout << " index of evenkey is " << evenIndex << endl;
//     cout << " index of odd key is " << oddIndex << endl;

//     return 0;
// }


//questions:.................................... L - 13

// qs - 1: first and last position of an element of sorted array
// left most occurance

// int firstOcc(int arr[],int n,int key) {
//     int s = 0;
//     int e = n-1;
//     int ans = -1;

//     int mid = s + (e-s)/2;
//     while(s<=e) {
//         if(arr[mid] == key) {
//             ans = mid;
//             e = mid - 1;
//         }
//         if(key > arr[mid]) {
//             s = mid + 1;
//         }
//         if(key < arr[mid]) {
//             e = mid - 1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return ans;
// }

// int lastOcc(int arr[],int n, int key) {
//     int s = 0;
//     int e = n-1;
//     int ans = -1;

//     int mid = s + (e-s)/2;
//     while(s<=e) {
//         if(arr[mid] == key) {
//             ans = mid;
//             s = mid + 1;
//         }
//         if(key > arr[mid]) {
//             s = mid + 1;
//         }
//         if(key < arr[mid]) {
//             e = mid -1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return ans;
// }

// int main() {
//     int n = 5;
//     int key = 3;
//     int arr[5] = {1,2,3,3,4};
//     //firstOcc(arr,5,3);
//     cout << firstOcc(arr,5,3) << endl;
//     cout << lastOcc(arr,5,3) << endl;

//     return 0;
// }

// qs - 2: total number of occurances::

// = (lastOcc index - firstOcc index) + 1

// int firstOcc(int arr[],int n,int key) {
//     int s = 0;
//     int e = n-1;
//     int mid = s + (e-s)/2;
//     int ans = -1;

//     while(s<=e) {
//         if(arr[mid] == key) {
//             ans = mid;
//             e = mid - 1;
//         }
//         if(arr[mid] > key) {
//             e = mid - 1;
//         }
//         if(arr[mid] < key) {
//             s = mid + 1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return ans;
// }

// int lastOcc(int arr[],int n, int key) {
//     int s = 0;
//     int e = n-1;
//     int mid = s + (e-s)/2;
//     int ans = -1;

//     while(s<=e) {
//         if(arr[mid] == key) {
//             ans = mid;
//             s = mid + 1;
//         }
//         if(arr[mid] > key) {
//             e = mid - 1;
//         }
//         if(arr[mid] < key) {
//             s = mid + 1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return ans;
// }

// int main() {
//     int arr[5] = {1,2,3,3,4};
//     int total = lastOcc(arr,5,3) - firstOcc(arr,5,3) + 1;

//     cout << total << endl;
// }


// qs - 3: peak index in  mountain array

// int main() {
//     int arr[4] = {3,4,5,1};
//     int n = 4;
//     int s = 0;
//     int e = n-1;

//     int mid = s + (e-s)/2;

//     while(s<e) {
//         if(arr[mid] < arr[mid+1]) {
//             s = mid + 1;
//         }
//         else {
//             e = mid;
//         }
//         mid = s + (e-s)/2;
//     }
//     cout << s << endl;
// }

//questions: more - L -14

// pivot in a array - qs - 1:

// int getPivot(int arr[], int n) {
//     int s = 0;
//     int e = n-1;
//     int mid = s + (e-s)/2;

//     while(s<e) {
//         if(arr[mid] >= arr[0]) {
//             s = mid + 1;
//         }
//         else {
//             e = mid;
//         }
//         mid = s + (e-s)/2;
//     }
//     return s;
// }

// int main() {
//     int n = 5;
//     int arr[5] = {3,8,10,17,1};
//     cout << " pivot is " << getPivot(arr,n) << endl;
// }

// qs - 2: search in a sorted and rotated array --- very immmmmmppppppppppppp

// int getPivot(int arr[],int n) {
//     int s = 0;
//     int e = n-1;
//     int mid = s + (e-s)/2;

//     while(s<e) {
//         if(arr[0] < arr[mid]) {
//             s = mid + 1;
//         }
//         else {
//             e = mid;
//         }
//         mid = s + (e-s)/2;
//     }
//     return s;
// }

// int binarySearch(int arr[],int s,int e,int key) {
//     int start = s;
//     int end = e;
//     int mid = start + (end-start)/2;


//     while(start<end) {
//         if(key == arr[mid]) {
//             return mid;
//         }
//         if(key > arr[mid]) {
//             start = mid + 1;
//         }
//         if(key < arr[mid]) {
//             end = mid - 1;
//         }
//         mid = start + (end-start)/2;
//     }
//     return -1;
// }

// int main() {
//     int arr[5] = {12,15,18,2,4};
//     int n = 5;
//     int key = 2;

//     int pivot = getPivot(arr,n);
//     if(key >= arr[pivot] && key <= arr[n-1]) { // apply binary search in 2nd line
//         cout << binarySearch(arr,pivot,n-1,key) << endl;
//     }
//     else { // apply binary search in 1st line
//         cout << binarySearch(arr,0,pivot-1,key) << endl;
//     }
// }

// qs - 3 : square root using binary search:

int binarySearch(int n) {
    //int n = 10000;
    int s = 0;
    int e = n;
    int mid = s + (e-s)/2;

    int ans = -1;
    while(s<=e) {
        int square = mid*mid;

        if(square == n) {
            return mid;
        }
        if(square < n) {
            ans = mid;
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main() {
    int n = 100;
    cout << binarySearch(n) << endl;
}

// qs - 4 : finding float part in square root:




































