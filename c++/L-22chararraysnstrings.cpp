// char arrays
#include<iostream>
using namespace std;

// finding length of string

// int getLength(char str[]) {
//     int count = 0;
//     for(int i = 0; str[i] != '\0'; i++) {
//         count++;
//     }
//     return count;
// }

// int main() {
//    char str[6] = {'v','i','d','y','a','\0'};
//    cout << str << endl;

//    int length = getLength(str);
//    cout << length << endl;

// }

// reverse a string

// void reverse(char str[],int n) {
//     //int n = 5;
//     int s = 0;
//     int e = n-1;
//     while(s<e) {
//         swap(str[s++],str[e--]);
//     }
// }

// int main() {
//     char str[5] = {'v','i','d','y','a'};
//     int n = 5;

//     cout << str << endl;

//     reverse(str,n);
//     cout << str << endl;
//}

// check if a given string is palindrome or not:

// bool palindrome(char str[],int n) {
//     int s = 0;
//     int e = n-1;

//     while(s<e) {
//         if(str[s] != str[e]) {
//             return 0;
//         }
//         else {
//             s++;
//             e--;
//         }
//     }
//     return 1;
// }

// int main() {
//     char str[4] = {'n','o','o','n'};
//     int n = 4;
//     cout << str << endl;

//     cout << palindrome(str,n) << endl;
    
// }

//  reverse words - qs - 5: HW









// qs - 6: return maximum occuring character

// char getMaxocccharacter(string s) {
//     int arr[26] = {0};
//     for(int i = 0; i<4; i++) {
//         char ch = s[i];
//         int number = 0;
//         number = ch - 'a';
//         arr[number]++;
//     } 

//     int maxi = -1;
//     int ans = -1;
//     for(int i = 0; i<26; i++) {
//         if(arr[i] > maxi) {
//             ans = i;
//             maxi = arr[i];

//         }
//     } 
//     return 'a'+ ans;  
// }

// int main() {
//     int arr[26] = {0};
//     string s = {'n','o','o','m'};


//     cout << getMaxocccharacter(s) << endl;
// }

// cin.getline() - HW




// inbuilt functions
// length - int len = strlen(name)
// compare - strcmp(s1,s2)
// copy - strcpy(dest-n string, source- string)


// replace spaces - qs -7::

string replace(string s) {
    string temp = "";

    for(int i = 0; i<s.length(); i++) {
        if(s[i] == ' ') {
            temp.push_back('0');
        }
        else {
            temp.push_back(s[i]);
        }
    }
    return temp;
}

int main() {
    string s = "i am vidya s";

    cout << replace(s) << endl;
}

// remove all occurances of substring - qs -8:::







//permutations in string






