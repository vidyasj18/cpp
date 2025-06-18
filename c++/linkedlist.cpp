#include<iostream>
#include<map>
using namespace std;

class Node {
    public:
    int data;
    Node *next;

    // constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL; // address of next pointer/data
    }

    // deconstructor
    ~Node() {
        int value = this -> data;
        // memory free
        if(this->next!=NULL) {
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }

};

void insertHead(Node *&head,int d) {
    // create new node
    Node *temp = new Node(d);
    temp -> next = head;
    head = temp;

}

void insertTail(Node *&tail,int d) {
    Node *temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void insertPosition(Node *&head,Node *&tail,int position,int d) {
    if(position==1) {
        insertHead(head,22);
        return;
    }
    Node *temp = head;
    int cnt = 0;

    while(cnt<position-1) {
        temp = temp -> next;
        cnt++;
    }

    if(temp -> next = NULL) {
        insertTail(tail,34);
        return;
    }

    Node *nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;

}

void deleteNode(int position,Node *&head) {
    // delete first or starting node
    if(position==1) {
        Node *temp = head;
        head = head -> next;
        // memory free of start node
        temp -> next = NULL;
        delete temp;
    }

    else {
        // deleting any middle or last node
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while(cnt<position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;

    }
}

bool detectLoop(Node *head) {
    if(head==NULL) {
        return false;
    }
    
    map<Node*, bool> visited;
    Node *temp = head;
    while(temp!=NULL) {
        if(visited[temp]==true) {
            cout << " cycle exists at element " << temp -> data << endl;
            return true;
        }

        visited[temp] = true;
        temp = temp -> next;
    }
    return false;

}

Node *floydDetectLoop(Node *head) {
    if(head==NULL) {
        return NULL;
    }
    Node *fast = head;
    Node *slow = head;
    
    fast = fast->next;
    
    while(fast!=NULL && slow!=NULL) {
        fast = fast -> next;
        if(fast!=NULL) {
            fast = fast -> next;
        }
        slow = slow -> next;
        if(slow==fast) {
            cout << " cycle is present at " << slow->data << endl;
            return slow;
        }
    }
    return NULL;
    
}

Node *gettingStarted(Node *head) {
    Node *intersection = floydDetectLoop(head);
    Node *slow = head;
    while(slow!=intersection) {
        slow = slow -> next;
        intersection = intersection -> next;
    }
    return slow;
}

void removeLoop(Node *head) {
    Node *startOfNode = gettingStarted(head);
    Node *temp = startOfNode;
    while(temp->next!=startOfNode) {
        temp = temp -> next;
    }
    temp -> next = NULL;
}

void print(Node *&head) {
    Node *temp = head;
    while(temp!=NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;

}

// void print(Node *&tail) {
//     Node *temp = tail;
//     while(temp!=NULL) {
//         cout << temp -> data << " ";
//         temp = temp -> next;
//     }
//     cout << endl;
// }

int main() {

    // create a new node
    Node *node1 = new Node(10);
    //cout << node1 -> data << endl;
    //cout << node1 -> next << endl;

    // head pointed to node1
    Node *head = node1;
    print(head);

    insertHead(head,12);
    print(head);

    insertHead(head,15);
    print(head);

    Node *tail = node1;
    print(tail);

    //insertTail(tail,15);
    //print(tail);

    //insertPosition(head,2,22);
    //print(head);

    insertTail(tail,22);
    print(head);


    // deleteNode(2,head);
    // print(head);

    tail -> next = head -> next;
    print(head);

    if(detectLoop(head)) {
        cout << " cycle is present " << endl;
    }
    else {
        cout << " no cycle " << endl;
    }
    cout << endl;

    Node *loop = gettingStarted(head);
    cout << " start of loop is: " << loop -> next << endl;
    //cout << endl;

    removeLoop(head);
    print(head);




}