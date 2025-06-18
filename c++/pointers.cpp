#include<iostream>
using namespace std;

// 

//int main() {
    // int num = 5;
    // cout << &num << endl; // prints address
    // // size of pointer is 8 bytes

    // int *p = &num; // pointer p has created
    // cout << num << endl;
    // cout << p << endl; // prints address of num which is stored in p
    // cout << *p << endl; // prints value stored in that address i.e 5

    // double d = 4.3;
    // double *p2 = &d;

    // cout << p2 << endl;
    // cout << *p2 << endl;

    // int i = 5;
    // int *p = 0;
    // p = &i;

    // int num = 5; // copy created num and a are different
    // int a = num;
    // a++;

    // cout << num << endl; // num & a are 2 different  boxes - so whatever stored in num is not modified. it prints 5

//     int num = 5;
//     int *p = &num; // there is no copy created
//     cout << " before  " << num << endl;
//     (*p)++;
//     cout << " after  " << num << endl;

//     // copying a pointer
//     int *q = p;
//     cout << p << " - " << q << endl;
//     cout << *p << " - " << *q << endl;

//     // important 
//     int i = 3;
//     int *t = &i;
//     *t = *t + 1;
//     cout << " 1: " << *t << endl;
//     cout << " 2: " << (*t)++ << endl;
//     cout << " before " << t << endl; // address 1st memory location
//     t = t + 1; // valid for t = t- 1; also
//     cout << " after " << t << endl; // address of 2nd memory location - difference of 4 bytes


//}

//int main() {
    // int arr[10] = {23,122,41,67};
    // cout << " address of 1st block " << arr << endl;
    // cout << " address of 1st block " << &arr[0] << endl;
    // cout << arr[0] << endl;

    // cout << "4th" << *arr << endl;
    // cout << "5th" << *arr + 1 << endl;
    // cout << "6th" << *(arr+1) << endl;
    // cout << "7th" << *(arr) + 1 << endl;
    // cout << "8th" << arr[2] << endl;
    // cout << "9th" << *(arr+2) << endl;

    // int i = 3;
    // cout << i[arr] << endl;

    // int temp[10] = {1,2};
    // cout << sizeof(temp) << endl;
    // int *p = &temp[0];
    // cout << "1st" << sizeof(*temp) << endl; // 4
    // cout << "2nd" << sizeof(temp) << endl;
    // cout << sizeof(&temp) << endl; // 4

    // cout << sizeof(p) << endl;
    // cout << sizeof(*p) << endl;

    // int a[20] = {1,2,3,5};
    // cout << &a[0] << endl; // address of block at 0th index
    // cout << &a << endl; // 
    // cout << a << endl;

    /*
    int *p = &a[0];
    cout << p << endl;
    cout << *p << endl;
    cout << &p << endl;

    int arr[10] = {1,2};

    int *p = &arr[10];
    cout << p << endl;
    cout << *p << endl;
    p = p + 1;
    cout << p << endl;

   int arr[5] = {1,2,3,4,5};
   char ch[6] = "abcde";

   cout << arr << endl;
   cout << ch << endl;

   char *c = &ch[0];
   cout << c << endl;

   char temp = 'z';
   char *p = &temp;
   cout << p << endl;

}
*/

// void print(int *p) {

//     cout << p << endl;
//     cout << *p << endl;
// }

// void update(int *p) {

//     *p = *p + 1;
// }

// int getSum(int arr[],int n) { // int *arr[] - can also be used
//     int sum = 0;
//     for(int i = 0; i<n; i++) {
//         sum = sum + arr[i];
//     }
//     cout << sum << endl;
// }

// int main() {
//     int value = 5;
//     int *p = &value;

//     print(p);
//     cout << endl;

//     cout << " before " << *p << endl;
//     update(p);
//     cout << " after " << *p << endl;

//     int arr[6] = {1,2,3,4,5,8};
//     int n = 5;
//     getSum(arr+3,3);
//     cout << endl;
// }


// pointers - part 3: L - 28

// double pointers

/*

#include<iostream>
using namespace std;

int main() {
    int i = 5;
    int *p = &i;
    int **p1 = &p; // double pointer

    cout << " okay " << endl;

    cout << " printing p " << p << endl; // content
    cout << " address of p " << &p << endl;

    cout << *p1 << endl; // address which is present in p1, value stored in it
    cout << **p1 << endl;
    cout << *p << endl;

    cout << &i << endl;
    cout << p << endl;
    cout << *p1 << endl;
}

*/

//void update(int **p1) {

    //p = p + 1; // kuch change nahi hoga - update is only done in this function not in main function

    //*p = *p + 1; // *p - value present at address pointed at p

    //**p1 = **p1 + 1;
//}

//int main() {

    // int i = 5;
    // int *p = &i;
    // int **p1 = &p;

    // cout << " before " << i << endl;
    // cout << " before " << p << endl;
    // cout << " before " << p1 << endl;

    // update(p1);

    // cout << " after " << i << endl;
    // cout << " after " << p << endl;
    // cout << " after " << p1 << endl;

    // cout << endl;

    // examples

    // int first = 8;
    // int second = 18;
    // int *p = &second;
    // cout << *p << " " << second << endl; // 18 18
    // *p = 9;
    // cout << first << " " << second << endl; // 8 9

    // int first = 6;
    // int *p = &first;
    // int *q = p;
    // (*q)++;
    // cout << first << endl;

    // int first = 8;
    // int *p = &first;
    // cout << (*p)++ << endl; // post increment
    // cout << first << endl;


    //*p = first; this is wrong
    

    // int first = 8;
    // int second = 11;
    // int *third = &second;
    // first = *third;
    // *third = *third + 2;
    // cout << first << " " << second << endl;

    // float f = 12.5;
    //float p = 21.5;
    //float *ptr = &f;
    //(*ptr)++;
    //*ptr = p;
    //cout << *ptr << " " << f << " " << p << endl;

    // int arr[5];
    // int *ptr;
    // cout << sizeof(arr) << " " << sizeof(ptr) << endl;

    // int arr[] = {11,21,13,14};
    // cout << *(arr) << " " << *(arr+1) << endl;

    // int arr[6] = {11,12,31};
    // cout << arr << " " << &arr << endl; //=== &arr[0] - same
    // cout << (arr + 1) << endl;

    // int arr[6] = {11,21,31};
    // int *p = arr;
    // cout << p[2] << endl; //=== *(p+2)

    // int arr[] = {11,12,13,14};
    // cout << *(arr) << " " << *(arr+3);

    // int arr[] = {11,21,31,41};
    // int *ptr = (arr)++; // not possible
    // cout << *ptr << endl;

    // char ch = 'a';
    // char *ptr = &ch;
    // ch++;
    // cout << *ptr << endl;

    // char arr[] = "abcde";
    // char *p = &arr[0];
    // cout << p << endl;
    // p++;
    // cout << p << endl;

    // char str[] = "babbar";
    // char *p = str;
    // cout << str[0] << " " << p[0] << endl;

//}
// void update(int *p) {
//     *p = (*p) + 2;
// }

// int main() {
//     int i = 10;
//     update(&i);
//     cout << i << endl;
// }

//int main() {

    // int first = 110;
    // int *p = &first;
    // int **q = &p;
    // int second = (**q)++ + 9;
    // cout << first << " " << second << endl;

    // int first = 100;
    // int *p = &first;
    // int **q = &p;

    // int second = ++(**q);
    // int *r = *q; // this is also pointing to 100
    // ++(*r);
    // cout << first << " " << second << endl;

//}

void increment(int **p) {
    ++(**p);
}

int main() {
    int num = 110;
    int *ptr = &num;
    increment(&ptr);
    cout << num << endl;
}








