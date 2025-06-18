#include<iostream>
#include<deque>
using namespace std;

int main() {
    deque<int>d;
    d.push_back(12);
    d.push_back(14);

    cout << d.front() << endl;
    d.pop_front();
    cout << d.front() << endl;
    d.pop_front();
    cout << d.front() << endl;

    if(d.empty()) {
        cout << " d is empty " << endl;
    }

    else {
        cout << " d is not empty " << endl;
    }
}
