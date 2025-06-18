#include<iostream>
#include<stack>
using namespace std;

int main() {
    // creating a stack
    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(4);

    cout << s.top() << endl;

}