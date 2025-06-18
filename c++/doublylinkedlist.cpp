#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *prev;
    Node *next;

    // constructor
    Node (int d) {
        this-> data = d;
        this-> prev = NULL;
        this-> next = NULL;
    }

    // destructor
    ~Node() {
        int val = this -> data;
        if(next != NULL) {
            delete next;
            next = NULL;
        }
        cout << " memory freed for " << val << endl;
    }
};

void insertAtHead(Node *&head, int d) {
    Node *temp = new Node(d);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
}

void insertAtTail(Node *&tail,int d) {
    Node *temp = new Node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;

}

void insertAtPosition(Node *head,Node *tail,int position,int d) {
    if(position==1) {
        insertAtHead(head,d);
        return;
    }

    Node *temp = head;
    int cnt = 1;

    while(cnt<position-1) {
        temp = temp -> next;
        cnt++;
    }

    // insertion at last position
    if(temp -> next = NULL) {
        insertAtTail(tail,d);
        return;
    }

    // creating a node for d
    Node *nodetoInsert = new Node(d);
    nodetoInsert -> next = temp -> next;
    temp -> next = nodetoInsert;
    temp -> next -> prev = nodetoInsert;
    nodetoInsert -> prev = temp;

}

// deletion of node
void deleteNode(int position,Node *&head) {

    // deleting first or starting node
    if(position == 1) {
        Node *temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }

    // deleting any position/ tail 
    else {
        Node *curr = head;
        Node *prev = NULL;
        
        int count = 1;
        while(count<position) {
            prev = curr;
            curr = curr -> next;
            count++;
        }

        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;

        delete curr;
    }
}

// prints Node

void print(Node *head) {
    Node *temp = head;

    while(temp!=NULL) {
        cout << temp -> data;
        temp = temp -> next;
    }
    cout << endl;
}

// gives length of linked list
int getLength(Node *head) {
    int len = 0;
    Node *temp = head;

    while(temp!=NULL) {
        len++;
        temp = temp->next;
    }
    return len;

}

int main() {
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    print(head);

    cout << getLength(head) << endl;

    insertAtHead(head,12);
    print(head);

    insertAtHead(head,15);
    print(head);

    insertAtPosition(head,tail,3,33);
    print(head);

    insertAtTail(tail,20);
    print(head);

    // insertAtPosition(head,tail,3,33);
    // print(head);

    deleteNode(2,head);
    print(head);
}