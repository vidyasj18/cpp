// qs - 1: swap alternatives

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void printArray(int arr[],int n) {
//     for(int i = 0; i<n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// void swapAlternate(int arr[],int size) {
//     for(int i = 0; i<size; i+= 2) {
//         if((i+1) < size) {
//             swap(arr[i],arr[i+1]);
//         }
//     }
// }

// int main() {
//     int even[8] = {5,2,9,4,7,6,1,0};
//     int odd[5] = {11,33,56,2,9};

//     swapAlternate(even,8);
//     swapAlternate(odd,5);
//     printArray(even,8);
//     printArray(odd,5);
//     cout << endl;

//     return 0;
// }

// qs - 2 : find unique element

// int findUnique(int arr[],int size) {
//     int ans = 0;
//     for(int i = 0; i<size; i++) {
//         ans = ans ^ arr[i];
//     }
//     return ans;
// }

// int main() {
//     int arr[5] = {1,1,2,2,3};
//     int size = 5;

//     findUnique(arr,size);
//     cout << findUnique(arr,size) << endl;
// }

// qs - 3 : find duplicates

// int main() {
//     int ans = 0;
//     // xor ing all elements
//     int arr[5] = {1,2,3,4,4};
//     for(int i = 0; i<5; i++) {
//         ans = ans ^ arr[i];
//     }
//     //xor ing 1 to n-1
//     for(int i = 0; i<5; i++) {
//         ans = ans ^ i;
//     }
//     cout << ans << endl;
// }

// qs - 4 : array intersection

// int main() {
    
//     int i = 0;
//     int j = 0;
//     vector<int> ans;
//     int n = 6;
//     int m = 4;

//     int arr1[6] = {1,2,2,2,3,4};
//     int arr2[4] = {2,2,3,3};

//     while(i<n && j<m) {

//         if(arr1[i] == arr2[j]) {
//             ans.push_back(arr1[i]);
//             i++;
//             j++;
//         }
//         else if(arr1[i] < arr2[j]) {
//             i++;
//         }
//         else {
//             j++;
//         }
//     }
//     cout << arr1[i] << " " << endl;
// }

// qs - 5: pair sum;

// int main() {
//     int size = 5;
//     //int ans = 0;
//     vector <vector<int> > ans;
//     int arr[5] = {1,2,3,4,5};
//     int s = 5;
//     for(int i = 0; i<5; i++) {
//         for(int j = i+1; j<5; j++) {
//             if(arr[i] + arr[j] == s) {
//                 vector<int> temp;
//                 temp.push_back(min(arr[i],arr[j]));
//                 temp.push_back(max(arr[i],arr[j]));
//                 ans.push_back(temp);
//             }
//         }
//     }
//     sort(ans.begin(),end());
//     cout << ans << endl;
// }

// qs -4 : triplet sum


// qs: 7 - sort 0 and 1

void printArray(int arr[],int n) {
    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortArray(int arr[],int n) {
    int left = 0;
    int right = n-1;

    while(left < right) {
            
        while(arr[left] == 0 && left < right) {
            left++;
        }
        while(arr[right] == 1 && left < right) {
            right--;
        }

        if(left< right) {
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
}

int main() {
    int n = 8;
    int arr[8] = {1,1,0,0,0,0,1,0};

    sortArray(arr,8);
    cout << " printing array " << endl;
    printArray(arr,8);
    //cout << endl;
    return 0;
}


