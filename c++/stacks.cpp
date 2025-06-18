// using STL

// #include<iostream>
// #include<stack>
// using namespace std;

// int main() {
//     // creating a stack
//     stack<int> s;
//     s.push(2);
//     s.push(3);
//     s.push(4);

//     cout << s.top() << endl;

//     s.pop();
//     cout << s.top() << endl;

//     s.pop();

//     if(s.empty()) {
//         cout << "empty " << endl;
//     }

//     else {
//         cout << "not empty" << endl;
//     }

//     cout << s.size() << endl;
//     return 0;

// }


// // using stack implementation constructing from scratch

// #include<iostream>
// #include<stack>
// using namespace std;

// class Stack {
//     // properties
//     public:
//         int *arr;
//         int size;
//         int top;
    
//     // behaviour
//     Stack(int size) {
//         this->size = size;
//         arr = new int{size};
//         top = -1;
//     }

//     void push(int element) {
//         if(size-top>1) {
//             top++;
//             arr[top] = element;
//         }

//         else {
//             cout << "stack overflow" << endl;
//         }
//     }

//     void pop() {
//         if(top!=-1) {
//             top--;
//         }
        
//         else {
//             cout << 'stack underflow' << endl;
//         }
//     }

//     int peak() {
//         if(top>0 && top<size) {
//             return arr[top];
//         }

//         else {
//             cout << "stack is empty" << endl;
//         }
//     }

//     bool isEmpty() {
//         if(top==-1) {
//             return true;
//         }

//         else {
//             return false;
//         }
//     }


// };

// int main() {
//     Stack s(5);

//     s.push(22);
//     s.push(34);
//     s.push(43);

//     cout << s.peak() << endl;
//     s.pop();

//     if(s.isEmpty()) {
//         cout << 'stack is empty' << endl;
//     }

//     else {
//         cout << " stack is not empty" << endl;
//     }


    

// }

// reverse an array:

#include<iostream>
#include<stack>
using namespace std;

int main() {
    string str = "vidya";

    stack<char>s;

    for(int i = 0; i<str.length(); i++) {
        char ch = str[i];
        s.push(ch);
    }

    string ans = "";
    while(!s.empty()) {
        char ch = s.top();
        ans.push_back(ch);
    }

    cout << ans << endl;
    return 0;
}