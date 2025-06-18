#include<iostream>
#include<queue>
#include<deque>
using namespace std;

int main() {
    // // creating a queue
    // queue<int> q;
    // q.push(11);
    // q.push(34);
    // q.push(87);

    // cout << "queue size" << q.size() << endl;

    // q.pop();
    // cout << "queue size" << q.size() << endl;

    // if(q.empty()) {
    //     cout << "queue is empty" << endl;
    // }

    // else {
    //     cout << "queue is not empty" << endl;
    // }

    deque<int> d;
    d.push_front(1);
    d.push_front(12);
    d.push_front(54);

    cout << d.front() << endl;
    cout << d.back() << endl;

    d.pop_front();
    cout << d.front() << endl;

    if(d.empty()) {
        cout << "deque is empty" << endl;
    }

    else {
        cout << "deque is not empty" << endl;
    }
}