#include<iostream>
using namespace std;

// int getSum(int *arr,int n) {
//     int sum = 0;
//     for(int i = 0; i<n; i++) {
//         sum = sum + arr[i];
//     }
//     return sum;
// }

// int &func(int a) {
//     int num = a;
//     int &ans = num;
//     return ans;
// }

// void update(int n) {
//     n++;
// }

//int main() {
    // int i = 5;
    // int &j = i;

    // cout << i << endl;
    // i++;
    // cout << i << endl;
    // j++;
    // cout << i << endl;
    // cout << j << endl;

    // int n = 5;
    // cout << " before " << n << endl;
    // update(n);
    // cout << " after " << n << endl;

    // func(n); // here warning comes while printing
    // cout << endl;

    // char ch = 'q';
    // cout << sizeof(ch) << endl;

    // char *c = &ch;
    // cout << sizeof(c) << endl;


    // taking n as variable
    // int n;
    // cin >> n;

    // int *arr = new int[n];

    // for(int i =0; i<n; i++) {
    //     cin >> arr[i];
    // }
    // cout << getSum(arr,n) << endl;

//}

int main() {
    int row;
    cin >> row;

    int col;
    cin >> col;

    // creating a 2d array
    int **arr = new int*[row];
    for(int i = 0; i<row; i++) {
        arr[i] = new int[col];
    }

    // taking input
    for(int i = 0; i<row; i++) {
        for(int j = 0; j<col; j++) {
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i<row; i++) {
        for(int j = 0; j<col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    

    return 0;


}