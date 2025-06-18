#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*
int factorial(int n) {
    if(n==0) {
        return 1;
    }

    return n * factorial(n-1);
    
}

int power(int n) {
    if(n==0) 
        return 1;
    
    return 2 * power(n-1);
    
}

int main() {
    int n = 4;

    int ans = factorial(n);

    cout << ans << endl;

    int p = power(n);

    cout << p << endl;

}

int print(int n) {
    if(n==0) {
        return 0;
    }
    print(n-1);
    cout << n << endl;
    //return n;
}

int main() {
    int n = 5;
    cout << endl;
    print(n);
    //cout << endl;
    
}

void reachHome(int src,int dest) {
    cout << "source" << src << endl;

    // base condition
    if(src==dest) {
        cout << "reached" << endl;
        return;
    }
    src++;
    reachHome(src,dest);
}

int main() {

    int dest = 10;
    int src = 1;

    cout << endl;

    reachHome(src,dest);
}

// fibonacci series
int fib(int n) {

    if(n==0)
        return 0;
    
    if(n==1)
        return 1;

    int ans = fib(n-1) + fib(n-2);
    return ans;
}

int main() {

    int n = 5;
    //fib(n);
    cout << fib(n) << endl;
}

void sayDigit(int n,string arr[]) {
    if(n==0)
        return;

    int digit = n%10;
    n = n/10;

    sayDigit(n,arr);
    cout << arr[digit] << " ";
}

int main() {
    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n = 421;
    sayDigit(n,arr);
    cout << endl;

}

void sayDigit(int n,string arr[]) {

    if(n==0)
        return;

    int digit = n%10;
    n = n/10;

    sayDigit(n,arr);
    cout << arr[digit] << " ";

}

int main() {
    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n = 534;
    sayDigit(n,arr);
    cout << endl;
}

// checking if function is sorted or not

bool isSorted(int arr[],int size) {
    if(size==0 || size==1)
        return true;
    
    if(arr[0] > arr[1]) 
        return false;
    
    else {
        int remainingPart = isSorted(arr+1,size-1);
        return remainingPart;
    }
}

int main() {
    int arr[5] = {1,2,3,4,5};
    int size = 5;

    int ans = isSorted(arr,size);
    cout << ans << endl;
}

// sum of array - HW

int getSum(int arr[],int n) {
    if(n==0)
        return 0;
    if(n==1) 
        return arr[0];

    int remainingPart = getSum(arr+1,n-1);
    
    int sum = arr[0] + remainingPart;

    return sum;
}

int main() {
    int arr[4] = {1,2,3,4};
    int n = 4;
    int sum = getSum(arr,n);
    cout << sum << endl;
}

*/

// linear search

// void print(int arr[],int n) {
//     for(int i = 0; i<n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// linear search
/*
bool linearSearch(int arr[],int n, int key) {
    if(n==0)
        return false;
    
    if(arr[0] == key)
        return true;
    
    else {
        bool remainingPart = linearSearch(arr+1,n-1,key);
        return remainingPart;
    }
}
int main() {
    int arr[5] = {2,4,6,7,1};
    int n = 5;
    int key = 6;

    int ans = linearSearch(arr,n,key);
    //print(arr,n);
    cout << ans << endl;
    //print(arr,n);
    //cout << endl;
}

// binary search


bool binarySearch(int arr[],int s,int e,int key) {

    //int s = 0;
    //int e = n-1;

    if(s>e)
        return false;
    
    int mid = s + (e-s)/2;

    if(arr[mid] == key) {
        return true;
    }

    if(arr[mid]<key) {
        return binarySearch(arr,mid+1,e,key);
    }

    if(arr[mid]>key) {
        return binarySearch(arr,s,mid-1,key);
    }

}

int main() {
    int arr[5] = {2,4,5,8,9};
    int n = 5;
    int key = 18;
    int s = 0;
    int e = n-1;

    cout << binarySearch(arr,0,n-1,key) << endl;
    //cout << endl;
}



// recursion using strings


// reverse a string

void reverse(string &s,int i,int j) {
    // int i = 0;
    // int j = s.length()-1;

    if(i>j) 
        return;

    swap(s[i],s[j]);
    i++;
    j--;
    reverse(s,i,j);
    //cout << endl;
}

int main() {
    string s = "vidya";
    int i = 0;
    int j = s.length()-1;
    reverse(s,i,j);
    cout << endl;
    cout << s << endl;
}

// palindrome

bool checkPalindrome(string &s,int i,int j) {
    if(i>j)
        return true;
    
    if(s[i] != s[j]) {
        return false;
    }
    else {
        return checkPalindrome(s,i+1,j-1);
    }
}

int main() {
    string s = "noan";
    int i = 0;
    int j = s.length()-1;

    bool isPalindrome = checkPalindrome(s,i,j); 

    if(isPalindrome) {
        cout << " its a palindrome " << endl;
    }

    else {
        cout << " not a palindrome " << endl;
    }
}

// power of numbers

int power(int a,int b) {
    //base case
    if(b==0) {
        return 1;
    }
    if(b==1) {
        return a;
    }
    int ans = power(a,b/2);

    // b - even
    if(b%2==0) {
        return ans * ans;
    }

    // b - odd
    else {
        return a * ans * ans;
    }
}

int main() {
    int a = 2;
    int b = 3;

    cout << power(a,b) << endl;
}


// bubble sort
#include<iostream>
using namespace std;

void sortArray(int arr[],int n) {
    if(n==0 || n==1) 
        return;

    for(int i = 0; i<n-1; i++) {
        if(arr[i]>arr[i+1]) {
            swap(arr[i],arr[i+1]);
        }
    }

    sortArray(arr,n-1);
    
    
}

int main() {
    int arr[5] = {1,8,3,6,5};
    int n = 5;

    sortArray(arr,5);
    for(int i = 0; i<5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// L-35  - merge sort

void merge(int *arr,int s,int e) {
    int mid = s+(e-s/2);

    int len1 = mid-s+1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy values
    int mainArrayIndex = s;
    for(int i = 0; i<len1; i++) {
        first[i] = arr[mainArrayIndex];
        mainArrayIndex++;
    }

    mainArrayIndex = mid+1;
    for(int i = 0; i<len2; i++) {
        second[i] = arr[mainArrayIndex];
        mainArrayIndex++;
    }

    // merge 2 sorted arrays

    int index1 = 0;
    int index2 = 0;

    while(index1<len1 && index2<len2) {
        if(first[index1] < second[index2]) {
            arr[mainArrayIndex] = first[index1];
            mainArrayIndex++;
            index1++;
        }
        else {
            arr[mainArrayIndex] = second[index2];
            mainArrayIndex++;
            index2++;
        }

    }

    while(index1 < len1) {
        arr[mainArrayIndex] = first[index1];
        mainArrayIndex++;
        index1++;
    }

    while(index2 < len2) {
        arr[mainArrayIndex] = second[index2];
        mainArrayIndex++;
        index2++;
    }
}

void mergeSort(int *arr,int s,int e) {
    if(s>=e) {
        return;
    }

    int mid = s + (e-s)/2;

    // left part sort karna hai
    mergeSort(arr,s,mid);

    // right part sort karna hai
    mergeSort(arr,mid+1,e);

    // merge
    merge(arr,s,e);
}

int main() {
    int arr[15] = {3,7,0,1,5,8,3,2,34,66,87,23,12,12,12};
    int n = 15;

    mergeSort(arr,0,n-1);
    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// day - 6 ---- Quick sort::

int partition(int arr[],int s,int e) {
    int count = 0;
    int pivot = arr[s];
    for(int i = s+1; i<e+1; i++) {
        if(pivot>arr[i]) {
            count++;
        }
    }

    int pivotIndex = s+count;
    swap(arr[pivotIndex],arr[s]);

    int i = s;
    int j = e;

    while(i<pivotIndex && j>pivotIndex) {
        while(arr[i]<arr[pivotIndex]) {
            i++;
        }
        while(arr[j]>arr[pivotIndex]) {
            j--;
        }

        if(i<pivotIndex && j>pivotIndex) {
            swap(arr[i++],arr[j--]);
        }
    }

    return pivotIndex;
    
}

void quickSort(int arr[],int s,int e) {
    // base case
    
    if(s>=e) {
        return;
    }

    int p = partition(arr,s,e);

    // recursive call
    quickSort(arr,s,p);
    quickSort(arr,p+1,e);
}

int main() {
    int arr[5] = {1,5,3,9,4};
    //int n = 5;
    int s = 0;
    int e = 4;

    quickSort(arr,s,e);
    for(int i = 0; i<e+1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// qs - 1: subset

void solve(vector<int> nums,vector<int> output, int index, vector<vector<int> > & ans) {
    // base case
    if(index>=nums.size()) {
        ans.push_back(output);
        return;
    }

    // exclude
    solve(nums,output,index+1,ans);

    // include
    int element = nums[index];
    output.push_back(element);
    solve(nums,output,index+1,ans);

}

int main() {
    vector< vector<int> >&nums;
    nums = {1,2,3};
    vector < vector<int> >ans;
    vector<int>output;
    int index = 0;
    solve(nums,output,index,ans);
    cout << ans << endl;

    for(int i = 0; i<nums.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

}

*/







































