// #include<iostream>
// #include<math.h>
// #include<limits.h>
// using namespace std;
//int main() {
//     cout << " hello world " << endl;
//     cout << " i gh " << endl;
    // int a = 4;
    // int b = 6;

    // cout << " a&b " << (a&b) << endl;
    // cout << " a|b " << (a|b) << endl;
    // cout << " ~a " << (~a) << endl;
    // cout << "a^b " << (a^b) << endl;

    // cout << (17>>1) << endl;
    // cout << (17>>2) << endl;
    // cout << (19<<1) << endl;
    // cout << (21<<2) << endl;

    // int i = 7;
    // cout << (++i) << endl;
    // // i = 8
    // cout << (i++) << endl;
    // // i = 8
    // cout << (i--) << endl;
    // // i = 9
    // cout << (--i) << endl;
    // // i = 7

    // int a = 1;
    // int b = 2;

    // if(a-->0 || ++b>2) {
    //     cout << " stage1 - inside if ";
    // }
    // else {
    //     cout << " stage2 - inside else ";
    // }
    // cout << a << " " << b << endl;

    // int number = 3;
    // cout << (25*(++number)) << endl;

//     int n = 10;

//     int a = 0;
//     int b = 1;
//     int sum = 0;

//     for(int i =  1; i<=n; i++) {
//         int nextnum = a+b;
//         a = b;
//         b = nextnum;
//         sum = sum + a;
//     }
//     cout << sum << endl;

    // int n = 14;
    // bool isPrime = 1;
    // for(int i = 2; i<n; i++) {
    //     if(n%i==0) {
    //         isPrime = 0;
    //         break;
    //     }
    // }
    // if(isPrime == 0) {
    //     cout << " not a prime number " << endl;
    // }
    // else {
    //     cout << " is a prime number " << endl;
    // }

    // for(int i = 0; i<5; i++ ) {
    //     for (int j=i; j<=5; j++) {
    //         cout << i << " " << j << endl;
    //     }
    //     cout << endl;
    // }

    // int i = 0;
    // for(int i = 0; i<5; i++) {
    //     cout << " hi " << endl;
    // }
// // }

//     int subtractproductandsum(int n) {
//         int n = 234;
//         int prod = 1;
//         int sum = 0;
//         while(n!=0) {
//             int digit = n%10;
//             prod = prod * digit;
//             sum = sum + digit;

//             n = n/10;
//         }

//         int ans = prod - sum;
//         cout << ans << endl;;
//     }

    // int n = 5;
    // int ans = 0;
    // int i = 0;
    // while(n!=0) {

    //     int bit = n&1;
    //     ans = (bit * pow(10,i)) + ans;

    //     n = n>>1;
    //     i++;
    // }
    // cout << " answer is " << ans << endl;

    // int n = 1010;
    // int ans = 0;
    // int i = 0;
    // while(n!=0) {
    //     int digit = n%10;
    //     ans = (digit * pow(2,i)) + ans;

    //     n = n/10;
    //     i++;
    // }
    // cout << " answer is " << ans << endl;

//     int n = 5;
//     int ans = 0;
//     int i = 0;

//     while(n!=0) {
//         int bit = n&1;
//         ans = (bit * (pow(10,i))) + ans;

//         n = n >> 1;
//         i++;
//     }
//     cout << " answer is " << ans << endl;

//     int n = 1010;
//     int ans = 0;
//     int i = 0;
//     while(n!=0) {
//         int digit = n%10;
//         ans = (digit * pow(2,i)) + ans;

//         n = n/10;
//         i++;
//     }
//     cout << " answer is " << ans << endl;

    // int num = 2;
    // char ch = '2';
    // switch(ch) {
    //     case 2: cout << " first " << endl;
    //     break;
    //     case '2': switch(num) {
    //         case 2: cout<< " value of num is " << endl;
    //     }
    //     break;
    //     default : cout << " def " << endl;
    // }
    // cout << endl;
    // return 0;

    // int a = 3;
    // int b = 4;

    // char op = '+';

    // switch(op) {
    //     case '+': cout << (a+b) << endl;
    //     break;
    //     case '-': cout << (a-b) << endl;
    //     break;
    //     case '*': cout << (a*b) << endl;
    //     break;
    //     case '/': cout << (a/b) << endl;
    //     break;
    //     default: cout << " enter valid " << endl;
    // }
    // cout << endl;

    // int a = 2;
    // int b = 3;

    // int ans = 1;

    // for(int i = 1; i<=b; i++) {
    //     ans = ans * a;
    // }
    // cout << " answer is " << ans << endl;

    // int power(int a,int b) {
    //     int ans = 1;
    //     for(int i = 1; i<=b; i++) {
    //         ans = ans * a;
    //     }
    //     return ans;
    // }

    // int main() {
    //     int a = 3;
    //     int b = 2;

    //     int ans = power(a,b);
    //     cout << " answer is " << ans << endl;

    //     return 0;
    // // }

    // bool isEven(int a) {
    //     if(a&1) {
    //         return 0;
    //     }

    //     return 1;
    // }

    // int main() {
    //     int a = 7;
    //     if(isEven(a)) {
    //         cout << " num is even " << endl;
    //     }
    //     else {
    //         cout << " num is odd " << endl;
    //     }
    // }

    // int factorial(int n) {
    //     int i = 1;
    //     int factorial = 1;
    //     for(int i = 1; i<=n; i++) {
    //             factorial = factorial * i;
    //     }
    //     return factorial;
    // }

    // int ncr(int n,int r) {
    //     int a = factorial(n);
    //     int b = factorial(r) * factorial(n-r);

    //     int ans = a/b;
    //     return ans;
    // }

    // int main() {
    //     int n = 8;
    //     int r = 2;

    //     cout << " answer is " << ncr(n,r) << endl;
    // }

    // void printcounting(int n) {
    //     for(int i = 1; i<=n; i++) {
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }

    // int main() {
    //     int n = 5;
    //     printcounting(n);

    //     return 0;
    // }

    // bool isPrime(int n) {
    //     for(int i = 2; i<=n; i++) {
    //         if(n%i==0) {
    //             return 0;
    //         }
    //     }
    //     return 1;
    // }

    // int main() {
    //     int n = 4;
    //     if(isPrime(n)) {
    //         cout << " prime number " << endl;
    //     }
    //     else {
    //         cout << " not a prime number " << endl;
    //     }
    // }

    // void update(int a) {
    //     a = a/2;
    // }

    // int main() {
    //     int a = 10;
    //     update(a);
    //     cout << a << endl;
    // }

    // int update(int a ) {
    //     a -= 5;
    //     return a;
    // }

    // int main() {
    //     int a = 15;
    //     update(a);
    //     cout << a << endl;
    // }

    // int update(int a) {
    //     int ans = a * a;
    //     return ans;
    // }

    // int main() {
    //     int a = 14;
    //     a = update(a);
    //     cout << a << endl;
    // }

    // int second[3] = {5,7,11};
    // cout << " value at 2nd index " << second[2] << endl;
    // for(int i = 0; i<=9; i++) {
    //     cout << second[i] << " ";
    // }
    // cout << endl;

    // void printArray(int arr[],int size) {
    //     cout << " printing the array " << endl;
    //     for(int i = 0; i<=9; i++) {
    //         cout << arr[i] << " ";
    //     }
    //     cout << endl;
    // }
    
    // int main() {
    //     int fourth[10] = {0};
    //     int n = 10;
    //     printArray(fourth,10);
    //     cout << " everything is fine " << endl;
    // }

    // int getMax(int num[],int n) {
    //     int max = INT_MIN;
    //     for(int i = 0; i<10; i++) {
    //         if(num[i] > max) {
    //             max = num[i];
    //         }
    //     }
    //     return max;
    // }

    // int main() {
    //     int size = 10;
    //     int n = 10;
    //     int num[10] = {2,5,8,9,10};

    //     cout << " maximum value is " << getMax(num,n) << endl;
    // }

    // void update(int arr[],int n) {
    //     arr[0] = 120;
    //     for(int i = 0; i<n; i++) {
    //         cout << arr[i] << " ";
    //     }
    // }

    // int main() {
    //     int n = 3;
    //     int arr[3] = {1,2,3};
    //     update(arr,3);
    //     for(int i = 0; i<3; i++) {
    //         cout << arr[i] << " ";
    //     }
    // }

    // bool search(int arr[],int size,int key) {
    //     for(int i = 0; i<size; i++) {
    //         if(key == arr[i]) {
    //             return 1;
    //         }
    //     }
    //     return 0;
    // }

    // int main() {
    //     int key = 2;
    //     int size = 10;
    //     int arr[10] = {1,3,5,0,-2,2,4,8,9,6};

    //     bool found = search(arr,size,key);
    //     if(found) {
    //         cout << " key is present " << endl;
    //     }
    //     else {
    //         cout << " key is absent " << endl;
    //     }

    // }

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     cin.ignore();
    
//     char sen[n+1];
//     cin.getline(sen,n);
//     cin.ignore();
//     int i=0;
//     int len=0,maxlen=0;
    
//     while(1){
//         if(sen[i]==' ' || sen[i]=='\0'){
//             maxlen=max(maxlen,len);
//             len=0;
//         }
//         else{
//             len++;
//         }
//         if(sen[i]=='\0'){
//             break;
//         }
//         i++;
//     }
//     cout<<maxlen << endl;
//     return 0;
// }

// #include<iostream>
// #include<limits.h>
// using namespace std;

// int getMax(int num[], int n) {
//     int maxi = INT_MIN;
//     for(int i = 0; i<n; i++) {
        
//         maxi = max(num[i],maxi);
        
//     }
//     return maxi;
// }

// int main() {
//     int num[10] = { 1,2,3,4,5,6,7,8,9,0};
//     int n = 10;
//     for(int i = 0; i<10; i++) {
//         cout << num[i] << endl;
//     }
//     cout << endl;

//     cout << " maximum value is " << getMax(num,n) << endl;

// }

//hw - 1 -- arrays

// print sum of all elements in an array

// #include<iostream>
// using namespace std;

// int sum(int arr[],int n) {
//     int sum = 0;
//     for(int i = 0; i<n; i++) {
//         sum = sum + arr[i];
//     }
//     return sum;
// }

// int main() {
//     int arr[4] = {1,2,3,4};
//     int n = 4;

//     cout << " sum is " << sum(arr,n) << endl;
// }

// #include<iostream>
// using namespace std;

// bool found(int arr[], int n, int key) {
//     for(int i = 0; i<n; i++) {
//         if(arr[i] == key) {
//             return 1;
//         }
//     }
//     return 0;
// }

// int main() {
//     int arr[5] = {1,2,3,4,5};
//     int n = 5;
//     int key = 2;

//     bool ans = found(arr,n,key);

//     if(ans) {
//         cout << " key present " << endl;
//     }
//     else {
//         cout << " key absent " << endl;
//     }

// }

// #include<iostream>
// using namespace std;

// void reverse(int arr[],int n) {
//     int s = 0;
//     int e = n-1;

//     while(s<=e) {
//         swap(arr[s],arr[e]);
//         s++;
//         e--;
//     }
// }

// void printArray(int arr[],int n) {
//     for(int i = 0; i<n; i++) {
//         cout << arr[i] << endl;
//     }
//     cout << endl;
// }

// int main() {
//     int arr[5] = {1,2,3,4,5};
//     int n = 5;

//     reverse(arr,n);
//     printArray(arr,n);

//     cout << endl;
// }

// #include<iostream>
// using namespace std;

// void printArray(int arr[],int n) {
//     for(int i = 0; i<n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// void swapAlternate(int arr[],int n) {
//     for(int i = 0; i<n; i+=2) {
//         if(i+1<n) {
//             swap(arr[i],arr[i+1]);
//         }
//     }
// }

// int main() {
//     int arr[4] = {1,2,5,8};
//     int n = 4;

//     swapAlternate(arr,n);
//     printArray(arr,n);

//     cout << endl;
// }

// #include<iostream>
// using namespace std;

// int binarySearch(int arr[],int n,int key) {
//     int s = 0;
//     int e = n-1;
//     int mid = s+ (e-s)/2;

//     while(s<=e) {
//         if(arr[mid] == key) {
//             return mid;
//         }
//         if(arr[mid] > key) {
//             e = mid - 1;
//         }
//         if(arr[mid] < key) {
//             s = mid + 1;
//         }

//         mid = s + (e-s)/2;
//     }
// }

// int main() {
//     int arr1[6] = {1,2,3,4,5,6};
//     int arr2[5] = {3,4,6,7,8};

//     int index1 = binarySearch(arr1,6,3);
//     int index2 = binarySearch(arr2,5,3);

//     cout << index1 << endl;
//     cout << index2 << endl;

// }

// #include<iostream>
// using namespace std;

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

// int lastOcc(int arr[],int n,int key) {
//     int s = 0;
//     int e = n-1;
//     int ans = -1;
//     int mid = s + (e-s)/2;
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
//     int even[5] = {1,2,3,3,4};
//     cout << firstOcc(even,5,3) << endl;
//     cout << lastOcc(even,5,3) << endl;
// }

// #include<iostream>
// using namespace std;

// int allocatedbooks(int arr[],int n, int m) {
//     int s = 0;
//     int sum = 0;
//     int ans = -1;
//     for(int i = 0; i<n; i++) {
//         sum = sum + arr[i];
//     }

//     int e = sum;
//     int mid = s + (e-s)/2;

//     while(s<e) {
//         if(isPossible(arr,m,n,mid)) {
//             ans = mid;
//             e = mid -1;
//         }
//         else {
//             s = mid + 1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return ans;
// }

// bool isPossible(int arr[],int n,int m,int mid) {
//     int pagesum = 0;
//     int studentCount = 1;
//     for(int i = 0; i<n; i++) {
//         if(pagesum + arr[i] <= mid) {
//             pagesum = pagesum + arr[i];
//         }
//         else {
//             studentcount++;
//             if(studentcount > m || arr[i] > mid) {
//                 return false;
//             }
//             pagesum = arr[i];
//         }
//     }
//     return true;
//}

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











// // #include<iostream>
// // using namespace std;

// // int merge(int arr1[],int m,int arr2[],int n,int arr3[]) {
// //     int k = 8;
// //     int i = 0;
// //     int j = 0;
// //     int k = 0;
// //    while(i<m && j<n) {
// //     if(arr1[i] < arr2[j]) {
// //         arr3[k] = arr1[i];
// //         k++;
// //         i++;
// //     }
// //     else {
// //         arr3[k] = arr2[j];
// //         k++;
// //         j++;
// //     }
// //    } 

// //    while(i<n) {
// //     arr3[k] = arr1[i];
// //     k++;
// //     i++;       
// //    }
// //    while(j<m) {
// //     arr3[k] = arr2[j];
// //     k++;
// //     j++;
// //    }
// // }

// #include<iostream>
// using namespace std;

// bool palindrome(char str[],int n) {
//     int s = 0;
//      int e = n-1;

//     while(s<e) {
//         if(str[s] != str[e]) {
//             return 0;
//         }
//         else {
//             s++;
//             e--;
//         }
//         return 1;
//     }
// }

// int main() {
//     char str[4] = {'n','o','o','n'};
//     int n = 4;

//     cout << palindrome(str,n) << endl; 
//     return 0;
// }


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

//     v.push_back(8);
//     v.push_back(5);
//     v.push_back(3);
//     v.push_back(2);
//     v.push_back(1);

//     //vector<int> ans;

//     vector<int> ans = reverse(v);
//     cout << " printing array " << endl;
//     print(ans);
//     cout << endl;
    
// }

// #include<iostream>
// using namespace std;

// void merge(int arr1[],int m, int arr2[],int n,int arr3[]) {
//     int i = 0;
//     int j = 0;
//     int k = 0;

//     while(i<m && j<n) {
//         if(arr1[i] < arr2[j]) {
//             arr3[k] = arr1[i];
//             k++;
//             i++;
//         }

//         else {
//             arr3[k] = arr2[j];
//             k++;
//             j++;
//         }
//     }

//     while(i<m) {
//             arr3[k] = arr1[i];
//             k++;
//             i++;
//     }

//     while(j<n) {
//             arr3[k] = arr2[j];
//             k++;
//             j++;
//     }
    
// }

// void print(int arr3[],int p) {
//     for(int i = 0; i<p; i++) {
//         cout << arr3[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int arr1[5] = {1,3,4,5,7};
//     int arr2[3] = {2,6,8};
//     int arr3[8] = {0};
//     int p = 8;
//     int m = 5;
//     int n = 3;

//     merge(arr1,m,arr2,n,arr3) ;

//     print(arr3,p);
//     cout << endl;
// }

// #include<iostream>
// #include<vector>
// using namespace std;

// void movezero(int arr[],int m) {
//     int i = 0;
//     arr[i] != 0;

//     for(int j = 0; j<5; j++) {
//         if(arr[j] != 0) {
//             swap(arr[i],arr[j]);
//             i++;
//         }
//     }
// }

// void print(int arr[]) {
//     for(int i = 0; i<5; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int arr[5] = {0,0,2,0,3};
//     int m = 5;

//     movezero(arr,5);
//     print(arr);
//     cout << endl;
// }
/*
#include<iostream>
using namespace std;

int main() {
    // int num = 5;
    // int *p = &num;
    // cout << num << endl;
    // cout << p << endl;
    // cout << *p << endl;

    // double d = 4.2;
    // double *p1 = &d;

    // cout << " address is : " << p1 << endl;
    // cout << *p1 << endl;

    int num = 5;
    int *p = &num;
    cout << p << endl;
    cout << *p << endl;

    int *q = p;
    cout << p << " - " << q << endl;
    cout << *p << " - " << *q << endl;

    int i = 4;
    int *p1 = &i;
    *p1 = *p1 + 1;

    cout << *p1 << endl;
    cout << " before " << p1 << endl;
    p1 = p1 + 1;
    cout << " after " << p1 << endl;


}

#include<iostream>
using namespace std;

void sort(int arr[],int n) {
    for(int i = 0; i<n; i++) {
        int minIndex = i;
        for(int j = i+1; j<n; j++) {
            if(arr[minIndex] > arr[j]) {
                minIndex = j;
            }
            swap(arr[minIndex],arr[i]);
        }
        //cout << arr[i] << endl;
    }
    //cout << endl;
}

void print(int arr[],int n) {
    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[5] = {3,7,2,4,8};
    int n = 5;

    sort(arr,n);
    print(arr,n);
    cout << endl;
}
*/

/*
#include<iostream>
using namespace std;

void sort(int arr[],int n) {
    // for round 1 to n-1
    bool swapped = false;
    for(int i = 1; i<n; i++) {
        for(int j = 0; j<n-i; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false) {
            //already sorted
            break;
        }
    }

}

void print(int arr[],int n) {
    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[5] = {2,5,7,1,3};
    int n = 5;

    sort(arr,n);
    print(arr,n);
    cout << endl;
   
}

#include<iostream>
using namespace std;

void sort(int arr[],int n) {
    for(int i = 0; i<n; i++) {
        int j = i-1;
        int temp = arr[i];
        for( ; j>=0; j--) {
            if(temp < arr[j]) {
                arr[j+1] = arr[j];
            }
            else {
                break;
            }
        }
        arr[j+1] = temp;
    }
}

void print(int arr[],int n) {
    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[5] = {2,5,7,1,3};
    int n = 5;

    sort(arr,n);
    print(arr,n);
    cout << endl;
    
}
*/

// #include<iostream>
// using namespace std;

// int main() {
    // int arr[4] = {2,5,8,3};
    // cout << arr << endl;
    // cout << &arr[0] << endl;

    // cout << *arr << endl;
    // cout << *arr + 1 << endl;
    // cout << *(arr + 1) << endl;
    // cout << 0[arr] << endl;

    // int temp[10] = {0};
    // cout << "1st" << sizeof(temp) << endl; // 40
    // cout << "2nd" << sizeof(*temp) << endl; // 4 - size of an element
    // cout << "3rd" << sizeof(&temp) << endl; // 8

    // int *p = &temp[0];
    // cout << "4th" << sizeof(p) << endl; // 8
    // cout << "5th" << sizeof(*p) << endl;  // 4 - size of an element
    // cout << "6th" << sizeof(&p) << endl; // 8

    // int arr[10] = {0};
    // int *p = &arr[0];
    // cout << " before " << p << endl;
    // p = p + 1;
    // cout << " after " << p << endl;

// }

// #include<iostream>
// using namespace std;

// void update(int *a,int n) {

//     int *p = &a[0];
//     p = p + 1;

//     *p = *p + 1;
// }

// int getSum(int a[],int n) {
//     int sum = 0; 
//     for(int i = 0; i<n; i++) {
//         sum = sum + a[i];
//     }
//     return sum;
// }

// int main() {
//     int a[4] = {1,2,3,4};
//     int n = 4;

//     int *p = &a[0];

//     cout << " before " << p << endl;
//     cout << " before " << *p << endl;
//     update(a,4);

//     cout << " after " << p << endl;
//     cout << " after " << *p << endl;

//     cout << " sum is " << getSum(a,4) << endl;

// }

/*
#include<iostream>
using namespace std;

void swapped(int arr[],int n) {
    for(int i = 0; i<n; i= i+2) {
        if((i+1) < n) {
            swap(arr[i],arr[i+1]);
        }
    }
 
}

void print(int arr[],int n) {
    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int even[6] = {1,2,3,4,5,6};
    int odd[5] = {1,2,3,4,5};

    int n1 = 6;
    int n2 = 5;

    swapped(even,n1);
    print(even,n1);
    cout << endl;
    swapped(odd,n2);
    print(odd,n2);
    cout << endl;
}

#include<iostream>
using namespace std;

int main() {
    int i = 5;
    int &j = i;

    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << i << endl;
    cout << j << endl;
}

#include<iostream>
using namespace std;

void sort(int arr[],int n) {
    int l = 0;
    int r = n-1;

    while(l<r) {
        if(arr[l] == 0 && l<r) {
            l++;
        }
        if(arr[r] == 1 && l<r) {
            r--;
        }
        if(arr[l] == 1 && arr[r] == 0) {
            swap(arr[l],arr[r]);
        }
    }

}

void print(int arr[],int n) {
    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[8] = {1,1,0,0,0,0,1,0};
    int n = 8;
    sort(arr,n);
    print(arr,n);
    cout << endl;
}

#include<iostream>
using namespace std;

void merge(int arr1[],int m,int arr2[],int n,int arr3[]) {
    int i = 0;
    int j = 0;
    int k = 0;

    while(i<m && j<n) {
        if(arr1[i] < arr2[j]) {
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        else {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    while(i<m) {
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    while(j<n) {
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}

void print(int arr3[],int s) {
    for(int k = 0; k<s; k++) {
        cout << arr3[k] << " ";
    }
    cout << endl;
}

int main() {
   int arr1[5] = {2,5,6,7,9};
   int m = 5;
   int arr2[4] = {1,3,4,8};
   int n = 4;
   int arr3[9] = {0};
   int s = 9;

   merge(arr1,m,arr2,n,arr3);
   print(arr3,s);


}

#include<iostream>
using namespace std;

void merge(int arr1[],int m,int arr2[],int n) {
    int i = 0;
    int j = 0;
    while(i<m && j<n) {
        if(arr1[i]<arr2[j]) {
            i++;
        }
        else {
            arr1[i] = arr2[j];
            //arr1[i+1] = arr1[i];
            i++;
            j++;
        }
    }

    while(j<n) {
        arr1[i] = arr2[j];
        i++;
        j++;
    }
}

void print(int arr1[],int s) {
    for(int i = 0; i<s; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[5] = {2,5,6,7,9};
    int m = 5;
    int arr2[4] = {1,3,4,8};
    int n = 4; 
    int s = 9;

    merge(arr1,m,arr2,n);
    print(arr1,s);
}

#include<iostream>
using namespace std;

int power(int n) {
    if(n==0) 
        return 1;
    
    return (2 * power(n-1));
    //cout << endl;

}

int main() {
    int n = 5;
    //int a = 2;
    int ans = power(n);
    cout << ans << endl;
}

#include<iostream>
using namespace std;

int fact(int n) {
    if(n==0) 
        return 1;
    
    if(n==1)
        return 1;
    
    return n*fact(n-1);

}

int main() {

    int n = 4;
    int ans = fact(n);
    cout << ans << endl;
}

#include<iostream>
using namespace std;

void print(int n) {
    if(n==0) {
        return;
    }

    // if(n==1) 
    //     return 1;

    print(n-1);
    cout << n << endl;
}

int main() {
    int n = 5;
    cout << endl;
    print(n);
    cout << endl;
}

#include<iostream>
using namespace std;

void print(int src,int dest) {
    if(src==dest) 
        return;

    cout << src << endl;
    src++;
    print(src,dest);
}

int main() {
    int src = 1;
    int dest = 10;

    print(src,dest);
    cout << endl;
}

#include<iostream>
using namespace std;

int fib(int n) {
    if(n==0)
        return 0;
    
    if(n==1)
        return 1;

    int ans = (fib(n-1) + fib(n-2));
    return ans;
}

int main() {
    int n = 3;
    cout << fib(n) << endl;
}

#include<iostream>
using namespace std;

int countStairs(int n) {
    if(n<0) 
        return 0;
    
    if(n==0) 
        return 1;

    int ans = countStairs(n-1) + countStairs(n-2);

    return ans;
}

int main() {
    int n = 3;
    int a = countStairs(n);
    cout << a << endl;
}

#include<iostream>
using namespace std;

void sayDigit(string arr[],int n) {
    if(n==0)
        return;

    int digit = n%10;
    n=n/10;
    
    sayDigit(arr,n);
    cout << arr[digit] << " ";
    cout << endl;
}

int main() {

    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n = 421;
    sayDigit(arr,n);
    cout << endl;
}

#include<iostream>
using namespace std;

bool sorted(int arr[],int n) {
    if(n==0 || n==1) {
        return true;
    }

    if(arr[1]<arr[0]) {
        return false;
    }

    else {
        bool remainingPart = sorted(arr+1,n-1);
        return remainingPart;
    }


}

int main() {
    int arr[5] = {3,6,1,4,8};
    int n = 5;
    int ans = sorted(arr,n);
    cout << ans << endl;
}

#include<iostream>
using namespace std;

int sum(int arr[],int n) {
    if(n==0)
        return 0;
    
    if(n==1)
        return arr[0];

    int a = arr[0] + sum(arr+1,n-1);
    return a;
}

int main() {
    int arr[5] = {1,2,3,4,5};
    int n = 5;
    int ans = sum(arr,n);
    cout << ans << endl;
}

#include<iostream>
using namespace std;

bool search(int arr[],int n,int key) {
    if(n==0)
        return true;
    
    if(arr[0]==key)
        return true;

    else {
        bool remainingPart = search(arr+1,n-1,key);
        return remainingPart;
    }
    

}

int main() {
    int arr[5] = {1,2,3,4,5};
    int n = 5;
    int key = 3;

    bool ans = search(arr,n,key);
    if(ans==true) {
        cout << " found" << endl;
    }

    else {
        cout << " not found " << endl;
    }
}

#include<iostream>
using namespace std;

bool binarySearch(int arr[],int n,int key,int s,int e) {
    //int s = 0;
    //int e = n-1;

    int mid = s + (e-s)/2;

    // if(n==0)
    //     return false;

    if(s>e) 
        return false;
    
    if(arr[mid]==key) 
        return true;
    

    //int mid = s + (e-s)/2;
    
    
    if(arr[mid]==key) {
        return true;
    }

    if(arr[mid]>key) {
        return binarySearch(arr,n,key,s,mid);
    }

    if(arr[mid]<key) {
        return binarySearch(arr,n,key,mid+1,e);
    }
    
}

int main() {
    int arr[5] = {2,4,6,8,10};
    int n = 5;
    int key = 8;

    int s = 0;
    int e = n-1;

    int ans = binarySearch(arr,n,key,s,e);
    //print(arr,n);
    cout << ans << endl;
}

#include<iostream>
using namespace std;

bool isSorted(int *arr[],int n) {
    if(n==0 || n==1) {
        return true;
    }
    
    if(arr[0]>arr[1]) 
        return false;

    else {
        bool a = isSorted(arr+1,n-1);
        return a;
    }
}

int main() {
    int arr[5] = {1,2,3,4,5};
    int n = 5;

    isSorted(arr,n);

    cout << endl;
}

#include<iostream>
using namespace std;

int getSum(int arr[],int n) {
    if(n==0) {
        return 0;
    }
    if(n==1) {
        return arr[0];
    }

    int remainingPart = getSum(arr+1,n-1);
    int sum = arr[0] + remainingPart;
    return sum;
    

}

int main() {
    int arr[5] = {2,4,9,9,9};
    int n = 5;

    int sum = getSum(arr,n);
    cout << sum << endl;
}

#include<iostream>
using namespace std;

bool binarySearch(int arr[],int n,int key) {
    if(n==0)
        return false;
    
    if(arr[0]==key) {
        return true;
    }
    else {
        bool remainingPart = binarySearch(arr+1,n-1,key);
        return remainingPart;
    }
}

int main() {
    int arr[5] = {1,2,3,4,5};
    int n = 5;
    int key = 2;

    int ans = binarySearch(arr,n,key);
    cout << ans << endl;
}

#include<iostream>
using namespace std;

bool binarySearch(int arr[],int key,int s,int e) {
    int mid = s + (e-s)/2;

    if(s>e) {
        return false;
    }

    if(arr[mid]==key)
        return true;
    
    if(arr[mid]<key) {
        return binarySearch(arr,key,mid+1,e);
    }

    if(arr[mid]>key) {
        return binarySearch(arr,key,s,mid);
    }
}

int main() {
    int arr[5] = {1,2,3,4,5};
    int n = 5;
    int s = 0;
    int e = n-1;
    int key = 2;

    int ans = binarySearch(arr,key,s,e);
    cout << ans << endl;
}

#include<iostream>
using namespace std;

void reverse(string &str,int i,int (n-i-1),int n) {
    //int n = 5;
    if(i>(n-i-1)) 
        return;
    
    swap(str[i],str[n-i-1]);
    i++;
    

    return reverse(str,i,n-i-1); 

}

int main() {
    string str = "abcde";
    int i = 0;
    int n = 5;
    //int j = 4;

    reverse(str,0,4,5);
    cout << str << endl;
}


#include<iostream>
using namespace std;

bool palindrome(string &str,int i,int j) {
    if(i>j)
        return true;
    
    if(str[i]!=str[j])
        return false;
    
    else {
        return palindrome(str,i+1,j-1);
    }
}

int main() {
    string str = "abaa";
    //int n = 4;
    int i = 0;
    int j = 3;

    bool ans = palindrome(str,i,j);
    cout << ans << endl;

}

#include<iostream>
#include<math.h>
using namespace std;

int power(int a,int b) {
    if(b==0)
        return 1;
    
    if(b==1) 
        return a;
    
    int ans = power(a,b/2);
    if(b%2==0) {
        return ans*ans;
    }
    else {
        return a*ans*ans;
    }
}

int main() {
    int a = 2;
    int b = 4;

    int ans = power(a,b);
    cout << ans << endl;
}

#include<iostream>
using namespace std;

void merge(int arr[],int s,int e) {
    // merge 2 sorted arrays
    int mid = (s+e)/2;
    int len1 = mid-s+1;
    int len2 = e - mid;


    // copying both the arrays
    int *first = new int[len1];
    int *second = new int[len2];
    
    int mainIndex = s;
    for(int i = 0; i<len1; i++) {
        first[i] = arr[mainIndex++];
    }

    mainIndex = mid+1;
    for(int i = 0; i<len2; i++) {
        second[i] = arr[mainIndex++];
    }

    int index1 = 0;
    int index2 = 0;

    // merging 2 sorted arrays
    mainIndex = s;
    while(index1 <len1 && index2<len2) {
        if(first[index1]<second[index2]) {
            arr[mainIndex++] = first[index1++];
        }

        else {
            arr[mainIndex++] = second[index2++];
        }
    }

    while(index1<len1) {
        arr[mainIndex++] = first[index1++];
    }

    while(index2<len2) {
        arr[mainIndex++] = second[index2++];
    }
    delete []first;
    delete []second;

}

void mergeSort(int arr[],int s,int e) {
    
    if(s>=e) {
        return;
    }
    int mid = (s+e)/2;

    // sort left part of array
    mergeSort(arr,s,mid);

    // sort right part of array
    mergeSort(arr,mid+1,e);

    merge(arr,s,e);
}

int main() {
    int arr[5] = {2,4,1,6,3};
    int n = 5;
    int s = 0;
    int e = n-1;

    mergeSort(arr,n,0,n-1);
    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

#include<iostream>
using namespace std;

int partition(int arr[],int s,int e,int n) {
    int pivot = arr[s];
    int count = 0;
    for(int i = 0; i<n; i++) {
        if(arr[s]>=arr[i]) {
            count++;
        }
    }
    
    int pivotIndex = s+count;
    swap(arr[s],arr[pivotIndex]);

    int i = s;
    int j = e;

    while(i<pivotIndex && j>pivotIndex) {
        while(arr[i] < pivot) {
            i++;
        }
        while(arr[j] > pivot) {
            j--;
        }

        if(i<pivotIndex && j>pivotIndex) {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }

    }
    return pivotIndex;
}

void quickSort(int arr[],int s,int e,int n) {
    if(s>=e) 
        return;
    
    int p = partition(arr,s,e,n);
    quickSort(arr,s,p-1,n);
    quickSort(arr,p+1,e,n);

}

int main() {
    int arr[5] = {2,5,1,3,4};
    int n = 5;
    int s = 0;
    int e = n-1;

    quickSort(arr,s,e,n);
    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

#include<iostream>
#include<math.h>
#include<limits.h>
using namespace std;

void printSum(int arr[][3],int i,int j) {
    //int sum = 0;
    for(int i = 0; i<3; i++) {
        int sum = 0;
        for(int j = 0; j<3; j++) {
            sum = sum + arr[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
}

void printColsum(int arr[][3],int i,int j) {
    for(int j = 0; j<3; j++) {
        int sum = 0;
        for(int i = 0; i<3; i++) {
            sum = sum + arr[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
}

bool isSpresent(int arr[][3],int target,int i,int j) {
    for(int i = 0; i<3; i++) {
        for(int j = 0; j<3; j++) {
            if(arr[i][j]==target) {
                return 1;
            }
        }
    }
    return 0;
}

int largestSum(int arr[][3],int i,int j) {
    int maxi = INT_MIN;
    int rowIndex = -1;

    for(int i = 0; i<3; i++) {
        int sum = 0;
        for(int j = 0; j<3; j++) {
            sum = sum + arr[i][j];
        }
        if(sum>maxi) {
            maxi = sum;
            rowIndex = i;
        }
    }
    return rowIndex;
}

int main() {
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    for(int i = 0; i<3; i++) {
        for(int j = 0; j<3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int target = 5;
    int i = 3;
    int j = 3;

    isSpresent(arr,target,i,j);

    if(isSpresent) {
        cout << "element found" << endl;
    }
    else {
        cout << " not found " << endl;
    }

    printSum(arr,i,j);
    cout << endl;

    printColsum(arr,i,j);
    cout << endl;

    int ansIndex = largestSum(arr,i,j);
    cout << ansIndex << endl;
}
*/






















