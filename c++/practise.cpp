#include<iostream>
using namespace std;

/*
class Node {
    public:
    int data;
    Node *next;

    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }

    // deconstructor
    ~Node() {
        int value = this -> data;
        if(this->next!=NULL) {
            delete next;
            this -> next = next;
        }
        cout << " memory is freed from " << value << endl;
    }
};

void insertAtHead(Node *&head,int d) {
    Node *temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node *&tail,int d) {
    Node *temp = new Node(d);
    tail -> next = temp;
    tail = tail -> next;
}

void insertAtPosition(Node *&head,Node *&tail,int position,int d) {
    if(position==1) {
        insertAtHead(head,d);
        return;
    }

    Node *temp = head;
    int cnt = 1;
    while(cnt < position-1) {
        temp = temp -> next;
        cnt++;
    }

    if(temp == NULL) {
        insertAtTail(tail,d);
        return;
    }

    Node *nodetoInsert = new Node(d); 
    nodetoInsert -> next = temp -> next;
    temp -> next = nodetoInsert;
}

void deleteNode(int position,Node *head) {
    if(position==1) {
        Node *temp = head;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }

    else {
        // delete middle / end value
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

void print(Node *&head) {
    Node *temp = head;
    while(temp!=NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main() {
    Node *node1 = new Node(10);
    //cout << node1 -> data << endl;
    //cout << node1 -> next << endl;

    Node *head = node1;
    Node *tail = node1;
    print(head);
    insertAtHead(head,12);
    print(head);
    insertAtTail(tail,20);
    print(head);

    insertAtPosition(head,tail,3,18);
    print(head);

    deleteNode(2,head);
    print(head);
}

class Node {
    public:
    int data;
    Node *prev;
    Node *next;

    Node(int data) {
        this -> data = data;
        this -> prev = NULL;
        this -> next = NULL;

    }

    ~Node() {
        int val = this -> data;
        if(next != NULL) {
            delete next;
            next = NULL;
        }
        cout << " memory freed from " << val << endl;
    }
};

void insertAtHead(Node *&head,int d) {
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

void insertAtPosition(Node *&head,Node *&tail,int position,int d) {
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

    if(temp->next == NULL) {
        insertAtTail(tail,d);
        return;
    }

    Node *nodeToInsert = new Node(d);
    temp -> next -> prev = nodeToInsert;
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;

}

void deleteNode(Node *&head,int position) {
    if(position == 1) {
        Node *temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }

    else {
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while(cnt<position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;

        delete curr;
    }
}

void print(Node *&head) {
    Node *temp = head;

    while(temp!=NULL) {
        cout << temp -> data;
        temp = temp -> next;
    }
    cout << endl;

}

int getLength(Node *&head) {
    Node *temp = head;
    int cnt = 1;

    while(temp!=NULL) {
        cnt++;
        temp = temp -> next;
    }
    return cnt;
}

int main() {
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    print(head);

    //cout << getLength << endl;

    insertAtHead(head,2);
    print(head);

    insertAtTail(tail,15);
    print(head);

    insertAtPosition(head,tail,2,30);
    print(head);

    deleteNode(head,2);
    print(head);

}

class Node {
    public:
    int data;
    Node *next;
    Node(int d) {
        this -> data = d;
        this -> next = NULL;
    }
    ~Node() {
        int value = this -> data;
        if(this->next!=NULL) {
            delete next;
            next = NULL;
        }
        cout << " memory freed from " << value << endl;
    }
};

void insertNode(Node *&tail,int element,int d) {
    // empty list
    if(tail == NULL) {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }

    else {
        // non-empty list
        
        Node *curr = tail;
        while(curr->data != element) {
            curr = curr -> next;
        }

        Node *temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}

void deleteNode(Node *&tail,int value) {
    // empty list

    if(tail==NULL) {
        cout << " check" << endl;
        return;
    }

    else {
        // non-empty list
        Node *prev = tail;
        Node *curr = prev -> next;

        while(curr->data!=value) {
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        if(curr==prev) {
            tail=NULL;
        }

        else if(tail==curr) {
            tail = prev;
        }

        curr -> next = NULL;
        delete curr;
    }
}

bool isCircular(Node *&tail) {
    // empty list
    if(tail==NULL) {
        return true;
    }
    // non-empty
    Node *temp = tail->next;
    while(temp!=NULL && temp!=tail) {
        temp = temp -> next;
    }
    if(temp == NULL) {
        return false;
    }
    if(temp == tail) {
        return true;
    }


}
void print(Node *&tail) {
    if(tail==NULL) {
        cout << " node is empty " << endl;
        return;
    }
    Node *temp = tail;
    do {
        cout << tail -> data << " ";
        tail = tail -> next;
    } while(tail!=temp);
    cout << endl;
}

int main() {
    Node *tail = NULL;

    insertNode(tail,5,3);
    print(tail);

    insertNode(tail,3,5);
    print(tail);

    insertNode(tail,5,7);
    print(tail);

    // deleteNode(tail,5);
    // print(tail);

    int ans = isCircular(tail);
    cout << ans << endl;

}

void reachHome(int src,int dest) {
    cout << src << endl;
    if(src==dest) {
        cout << " reached " << endl;
        return;
    }
    
    src++;
    reachHome(src,dest);
}

int main() {
    int src = 1;
    int dest = 10;

    cout << endl;

    reachHome(src,dest);
    //cout << endl;
}

// sorted or not

bool sorted(int arr[],int n) {
    if(n==0)
        return true;
    
    if(n==1)
        return true;
    
    if(arr[0]>arr[1]) {
        return false;
    }
    else {
        sorted(arr+1,n-1);
    }
    return true;
}

int main() {
    int arr[5] = {1,2,3,4,6};
    int n = 5;
    //int size = 5;
    sorted(arr,n);
    if(sorted) {
        cout << " sorted " << endl;
    }
    else {
        cout << " not sorted " << endl;
    }
    cout << endl;
    
}

int getSum(int arr[],int n) {
    if(n==0)
        return 0;
    
    if(n==1)
        return arr[0];
    
    int sum = arr[0];
    sum = sum + getSum(arr+1,n-1);
    return sum;
}

int main() {
    int arr[5] = {1,2,3,5,4};
    int n = 5;
    int ans = getSum(arr,n);
    cout << ans << endl;
}

bool linearSearch(int arr[],int n,int key) {
    if(n==0)
        return false;
    
    if(arr[0]==key)
        return true;
    
    else {
        bool remainingPart= linearSearch(arr+1,n-1,key);
        return remainingPart;
    }
    

}

int main() {
    int arr[5] = {1,2,3,4,6};
    int n = 5;
    int key = 3;

    linearSearch(arr,n,key);
    if(linearSearch) {
        cout << " key is present " << endl;
    }
    else {
        cout << " key is absent " << endl;
    }
}

bool binarySearch(int arr[],int n,int key) {
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;

    while(s<=e) {
        if(arr[mid]==key) {
            return true;
        }

        if(arr[mid]<key) {
            s = mid+1;
        }

        if(arr[mid]>key) {
            e = mid;
        }

        mid = s+(e-s)/2;
    }

    return false;
}

int main() {
    int arr[6] = {1,2,3,4,5,6};
    int n = 6;
    int key = 4;
    //int s = 0;
    //int e = n-1;

    int ans = binarySearch(arr,n,key);
    cout << ans << endl;
}

bool binarySearch(int arr[],int n,int key,int s,int e) {
    int mid = s+(e-s)/2;
    if(n==0) {
        return false;
    }

    if(arr[mid]==key) {
        return true;
    }
    
    if(arr[mid]<key) {
        binarySearch(arr,n,key,mid+1,e);
    }

    if(arr[mid]>key) {
        binarySearch(arr,n,key,s,mid);
    }
    //return false;
}

int main() {
    int arr[6] = {1,2,3,4,5,6};
    int n = 6;
    int key = 4;

    int s = 0;
    int e = n-1;
    int ans = binarySearch(arr,n,key,s,e);
    cout << ans << endl;
}

class Node {
    public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

    ~Node() {
        int value = this->data;
        if(this->next!=NULL) {
            delete this;
            this->next = NULL;
        }
        
        cout << " deleted this no. " << value << endl;
    }

    
};

void InsertAtHead(Node *&head,int d) {
    Node *temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void InsertAtTail(Node *&tail,int d) {
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void InsertAtPosition(Node *&head,Node *&tail,int position,int d) {
    if(position==1) {
        InsertAtHead(head,d);
        return;
    }

    int cnt = 1;
    Node *temp = head;
    while(cnt<position-1) {
        temp = temp->next;
        cnt++;
    }

    if(temp->next==NULL) {
        InsertAtTail(tail,d);
        return;
    }

    Node *NodeToInsert = new Node(d);
    NodeToInsert->next = temp->next;
    temp->next = NodeToInsert;

}

void deleteNode(Node *&head,int position) {
    if(position==1) {
        Node *temp = head;
        head = head->next;
        temp -> next = NULL;
        delete temp;
    }

    else {
        int cnt = 1;
        Node *curr = head;
        Node *prev = NULL;
        while(cnt<position) {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }

}

void print(Node *&head) {
    Node *temp = head;
    while(temp!=NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    InsertAtHead(head,12);
    InsertAtHead(head,14);
    print(head);
    InsertAtTail(tail,15);
    print(head);
    InsertAtPosition(head,tail,3,18);
    print(head);

    deleteNode(head,2);
    print(head);

}


#include<iostream>
using namespace std;
class Node {
    public:
    //Node *head;
    int data;
    Node *prev;
    Node *next;

    // constructor
    Node(int d) {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    // destructor
    ~Node() {
        int val = this->data;
        if(next!=NULL) {
            delete next;
            next = NULL;
        }
        cout << " this value is deleted " << val << endl;
    }
 };

void insertAtHead(Node *&head,int d) {
    if(head==NULL) {
        Node *temp = new Node(d);
        head = temp;
        //tail = temp;
    }
    else {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    //temp->prev = NULL;
}

void insertAtTail(Node *&tail,int d) {
    if(tail==NULL) {
        Node *temp = new Node(d);
        tail = temp;
        //head = temp;
    }
    else {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtPosition(Node *&head,Node *&tail,int position,int d) {
    if(position==1) {
        insertAtHead(head,d);
        return;
    }

    Node *temp = head;
    int cnt = 1;
    while(cnt<position-1) {
        temp=temp->next;
        cnt++;
    }

    if(temp->next==NULL) {
        insertAtTail(tail,d);
        return;
    }

    Node *nodeToInsert = new Node(d);
    temp->next->prev = nodeToInsert;
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;

}

void deleteNode(Node *&head,int position) {
    if(position==1) {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        temp->prev = NULL;
        delete temp;
    }

    else {
        Node *curr = head;
        Node *prev = NULL;
        int cnt = 1;
        while(cnt<position) {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        curr->prev = NULL;
        curr->next->prev = prev;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
        
    }
}

void print(Node *head) {
    Node *temp = head;
    while(temp!=NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int nodeLength(Node *head) {
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

    //print(head);
    insertAtHead(head,15);
    //print(head);
    insertAtHead(head,20);
    print(head);
    insertAtTail(tail,25);
    print(head);
    insertAtPosition(head,tail,4,28);
    print(head);
    deleteNode(head,3);
    print(head);
    //cout << nodeLength(head) << endl;
}

#include<stack>

int main() {
    stack<int>s;
    s.push(2);
    s.push(4);
    s.push(6);
    s.push(8);
    s.push(7);
    s.push(9);

    cout << " size of stack " << s.size() << endl;
    s.pop();
    cout << " size now " << s.size() << endl;
    if(s.empty()) {
        cout << " stack is empty " << endl;
    }
    else {
        cout << " stack is not empty " << endl;
    }
    s.pop();
    cout << s.size() << endl;

}

// implementing arrays in linked list
#include<stack>
class Stack {
    public:
        int size;
        int top;
        int *arr;

    Stack(int size) {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int data) {
        if(size-top>1) {
            top++;
            arr[top] = data;
        }
        else {
            cout << " stack overflow " << endl;
        }

    }

    void pop() {
        if(top>=0) {
            top--;
        }

        else {
            cout << " stack underflow " << endl;
        }

    } 

    bool isEmpty() {
        if(top==-1) {
            return true;
        }

        else {
            return false;
        }

    }

    int peak() {
        if(top>=0) {
            return arr[top];
        }
        else {
            cout << " stack is empty " << endl;
            return -1;
        }

    }
};

int main() {
    Stack st(5);

    st.push(2);
    st.push(4);
    st.push(6);
    st.push(8);
    //st.push(10);

    cout << st.peak() << endl;

    st.pop();
    cout << st.peak() << endl;
    st.pop();
    cout << st.peak() << endl;

   if(st.isEmpty()) {
    cout << " stack is empty " << endl;
   } 
   else {
    cout << " stack is not empty " << endl;
   }

}

int main() {
    // declare
    int number[10];
    int first[5];
    first[5] = {0};

    for(int i = 0; i<5; i++) {
        cout << first[i] << endl;
    }

    // initialising an array
    int second[5] = {1,2,3,4,5};
    for(int i = 0; i<5; i++) {
        cout << second[i];
    }
    cout << endl;
    
}

void printArray(int arr[],int n) {
    for(int i = 0; i<n; i++) {
        cout << arr[i] << endl;
    }
    cout << "printing array" << endl;
}

void printingArray(char arr[],int n) {
    for(int i = 0; i<n; i++) {
        cout << arr[i] << endl;
    }
    cout << " printing array " << endl;
}

int main() {
    int first[5] = {1,2,3,4,5};
    int n = 5;
    printArray(first,n);
    cout << endl;

    char ch[5] = {'a','b','c','d','e'};
    cout << ch[3] << endl;
    printingArray(ch,n);
}

#include<limits.h>
#include<math.h>

int getMax(int num[],int size) {
    int max = INT_MIN;
    for(int i = 0; i<size; i++) {
        if(max<num[i]) {
            max = num[i];
        }
    }
    return max;
}

int getMin(int num[],int size) {
    int min = INT_MAX;
    for(int i = 0; i<size; i++) {
        if(min>num[i]) {
            min = num[i];
        }
    }
    return min;
}

int main() {
    int size;
    cout << " enter the size pf an array " << endl;
    cin >> size;

    int num[100];
    cout << " enter the values in array " << endl;
    for(int i = 0; i<size; i++) {
        cin >> num[i];
    }
    cout << " maximum value in the array " << getMax(num,size) << endl;
    cout << " minimum value in the array " << getMin(num,size) << endl;
}

int arraySum(int arr[],int n) {
    int sum = 0;
    for(int i = 0; i<n; i++) {
        sum = sum + arr[i];
    }
    return sum;
}

int main() {
    int arr[5] = {1,2,3,4,5};
    int n = 5;
    int sum = arraySum(arr,n);
    cout << sum << endl;
}

bool search(int arr[],int n,int key) {
    for(int i = 0; i<n; i++) {
        if(arr[i]==key) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int arr[5] = {1,2,3,4,5};
    int n = 5;
    int key;
    cout << " enter the key " << endl;
    cin >> key;
    bool found = search(arr,n,key);
    if(found) {
        cout << " key exists " << endl;
    }

    else {
        cout << " key doesnt exist " << endl;
    }
}

void reverse(int arr[],int n) {
    int s = 0;
    int e = n-1;
    while(s<e) {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

void printArray(int arr[],int n) {
    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[6] = {1,2,3,4,5,6};
    int n = 6;
    reverse(arr,n);
    printArray(arr,n);
    cout << endl;
}

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void evenSwap(int even[],int n1) {
    for(int i = 0; i<n1; i=+2) {
        if(i+1<n1) {
            swap(even[i],even[i+1]);
        }
    }
}

void oddSwap(int odd[],int n2) {
    for(int i = 0; i<n2; i=+2) {
        if(i+1<n2) {
            swap(odd[i],odd[i+1]);
        }
    }
}

void printArray(int arr[],int size) {
    for(int i = 0; i<size; i++) {
        cout << arr[i];
    }
    cout << endl;
    
}

int main() {
    int even[6] = {1,2,3,4,5,6};
    int odd[5] = {1,2,3,4,5};
    int n1 = 6;
    int n2 = 5;
    evenSwap(even,6);
    printArray(even,6);
    oddSwap(odd,5);
    printArray(odd,5);

    cout << endl;
}

#include<iostream>
using namespace std;

int main() {
    int key = 2;
    int arr = {1,2,3,4,5,6};
    for(int i = 0; i<6; i++) {
        if(arr[i]==key) {
            return true;
        }
    }
    return false;
}

#include<iostream>
using namespace std;

int factorial(int n) {
    // base case
    if(n==0) 
        return 1;

    return n * factorial(n-1);
}

int main() {
    int n = 5;
    int ans = factorial(5);
    cout << ans << endl;
}

#include<iostream>
using namespace std;

int power(int n) {
    if(n==0) {
        return 1;
    }

    return 2 * power(n-1);
}

int main() {
    int n = 5;
    int ans = power(n);
    cout << ans << endl;
}

#include<iostream>
using namespace std;

void print(int n) {
    if(n==0) {
        return;
    }
    cout << n << endl;
    print(n-1);
}

int main() {
    int n = 5;
    print(n);

}

#include<iostream>
using namespace std;

void reachHome(int dest,int src) {
    cout << src << endl;
    if(src==dest) {
        cout << src;
        return;
    }
    src++;
    reachHome(dest,src);
        
}

int main() {
    int dest = 10;
    int src = 1;

    cout << endl;
    reachHome(dest,src);
}

#include<iostream>
using namespace std;

void fibonacci(int prev,int curr,int n) {
    n = 2;
    cout << prev+curr;
    if(n==8) {
        cout << curr << endl;
        return;
    }
    n++;
    cout << endl;
    fibonacci(prev,curr,n);

}

int main() {
    int prev = 0;
    int curr = 1;
    int n;

    cout << prev <<endl;
    cout << endl;
    fibonacci(prev,curr,n);
}

#include<iostream>
using namespace std;

void sayDigit(int n,string arr[]) {
    if(n==0) 
        return;

    int digit = n%10;
    n = n/10;

    sayDigit(n,arr);
    cout << arr[digit] << endl;
}

int main() {
    int n = 421;
    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    sayDigit(n,arr);
    cout << endl;
}

#include<iostream>
using namespace std;

bool isSorted(int *arr,int size) {
    if(size==0 || size==1) {
        return true;
    }

    if(arr[0]>arr[1]) {
        return false;
    }

    else {
        bool remainingPart = isSorted(arr+1,size-1);
        return remainingPart;
    }
}

int main() {
    int arr[] = {1,2,8,4,6};
    int size = 5;
    bool ans = isSorted(arr,size);

    if(ans) {
        cout << "array is sorted" << endl;
    }

    else {
        cout << "array is not sorted" << endl;
    }
}

#include<iostream>
using namespace std;

int getSum(int *arr,int size) {
    if(size==0) {
        return 0;   
    }

    if(size==1) {
        return arr[0];
    }

    int sum = arr[0] + getSum(arr+1,size-1);
    return sum;
}

int main() {
    int arr[] = {1,2,3,4,5};
    int size = 5;

    int sum = getSum(arr,size);
    cout << sum << endl;
}

#include<iostream>
using namespace std;

bool linearSearch(int *arr,int size,int key) {
    if(size==0) {
        return false;
    }

    if(arr[0]==key) {
        return true;
    }

    else {
        bool remainingPart = linearSearch(arr+1,size-1,key);
        return remainingPart;
    }
}

int main() {
    int arr[] = {2,5,8,1,3,9};
    int size = 6;
    int key = 1;

    bool ans = linearSearch(arr,size,key);
    if(ans) {
        cout << "key is present" << endl;
    }

    else {
        cout << "key is absent" << endl;
    }
}

#include<iostream>
using namespace std;

bool binarySearch(int *arr,int s,int e,int key) {
    if(s>e) 
        return false;

    int mid = s + (e-s)/2;
    if(arr[mid]==key) 
        return true;

    if(arr[mid]<key) {
        return binarySearch(arr,mid+1,e,key);
    }

    else {
        return binarySearch(arr,s,mid-1,key);
    }
    
}

int main() {
    int arr[] =  {1,2,7,3,8,9,10};
    int size = 7;
    int key = 8;
    int s = 0;
    int e = 6;

    bool ans = binarySearch(arr,s,e,key);
    if(ans) {
        cout << "key is present" << endl;
    }

    else {
        cout << "key is not present" << endl;
    }
}

#include<iostream>
using namespace std;

void reverse(string &str,int i,int j) {
    if(i>j) 
        return;
    
    swap(str[i],str[j]);
    i++;
    j--;
    reverse(str,i,j);
}

int main() {
    string str = "abcde";
    int i = 0;
    int j = 4;

    reverse(str,i,j);
    cout << str << endl;

}

#include<iostream>
using namespace std;

bool checkPalindrome(string str,int i,int j) {
    if(i>j)
        return true;
    
    if(str[i]!=str[j]) 
        return false;

    else {
        checkPalindrome(str,i+1,j-1);
    }
}

int main() {
    string str = "abbccbba";
    int i = 0;
    int j = 7;
    bool isPalindrome = checkPalindrome(str,i,j);
    if(isPalindrome) {
        cout << "it is a palindrome" << endl;
    }
    else {
        cout << "it is not a palindrome" << endl;
    }

}

#include<iostream>
using namespace std;

int power(int a,int b) {

    if(b==0) {
        return 1;
    }

    if(b==1) {
        return a;
    }

    int ans = power(a,b/2);
    if(b%2==0) {
        return ans * ans;
    }

    else {
        return a * ans *ans;
    }
}

int main() {
    int a = 2;
    int b = 5;
    int pow = power(a,b);
    cout << pow << endl;
}

#include<iostream>
using namespace std;

void sortArray(int *arr,int size) {
    if(size==0)
        return;
    
    if(size==1) 
        return;
    
    for(int i = 0; i<size-1; i++) {
        if(arr[i]>arr[i+1]) {
            swap(arr[i],arr[i+1]);
        }
    }

    sortArray(arr,size-1);
}

int main() {
    int arr[] = {2,4,1,8,6};
    int size = 5;

    sortArray(arr,size);
    for(int i = 0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

#include<iostream>
using namespace std;

void reverse(string &str,int s,int e) {
    if(s>e) 
        return;
    
    swap(str[s],str[e]);
    s++;
    e--;
    reverse(str,s,e);
    
}

int main() {
    string str = "abcdefg";
    int s = 0;
    int e = 6;
    
    reverse(str,0,6);
    cout << str << endl;
}

#include<iostream>
using namespace std;

bool checkPalindrome(string str,int s,int e) {
    if(s>e) {
        return true;
    }

    if(str[s]!=str[e]) {
        return false;
    }

    else {
        checkPalindrome(str,s+1,e-1);
    }
    

}

int main() {
    string str = "abba";
    int s = 0;
    int e = 3;

    bool isPalindrome = checkPalindrome(str,s,e);
    if(isPalindrome) {
        cout << "it is a palindrome" << endl;
    }

    else {
        cout << "it is not a palindrome" << endl;
    }
    
}

#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;
    // constructor
    Node(int data) {
        this->data = data;
        this->next = next;
    }
};

void insertHead(Node *&head,int d) {
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail,int d) {
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtMiddle(Node*&head,Node*&tail,int d,int position) {
    Node *temp = head;
    if(position==1) {
        insertHead(head,d);
        return;
    }

    int count = 1;
    while(count < position-1) {
        temp = temp->next;
        count++;
    }

    if(temp->next == NULL) {
        insertAtTail(tail,d);
        return;
    }

    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void print(Node *head) {
    Node *temp = head;
    while(temp!=NULL) {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main() {
    Node *node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;
    Node *head = node1;
    Node *tail = node1;

    // insertHead(head,12);
    // print(head);

    // insertAtTail(tail,14);
    // print(head);

    insertAtMiddle(head,tail,16,3);
    print(head);
}


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     int a[n];
    
//     if((a[0]==0 && a[1]==1) || (a[0]==1 && a[1]==1)) {
//         for(int i = 1; i<n; i++) {
//             if(a[i]==0 && a[i]==a[i+1]) {
//                 cout << "yes" << endl;
//             }
//         }
//         cout << "No" << endl;
//     }

//     else {
//         cout << "yes" << endl;
//     }
// }


#include<iostream> 
#include<bits/stdc++.h>
using namespace std;

int main() {
    float a = 4.0;

    int x = 1;

    int y = 2;

    int sum = 0;
    float ans = a + 0.5;

    while(sum <= ans) {
        if(sum + x >= ans) {
            cout << "No" << endl;
            break;
        }

        sum = sum + x;

        if(sum + y >=ans) {
            cout << "yes" << endl;
            break;
        }

        sum = sum + y;
    }
    return 0;
}


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        long long n,k;
        cin >> n >> k;
        vector<long long> a(n);
        for(int i = 0; i<n; i++) {
            cin >> a[i];
        }

        vector<long long> copy_a = a;
        sort(copy_a.begin(),copy_a.end());

        if(copy_a==a || k>1) {
            cout << "YES" << endl;
        }

        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
    int k = 4;
    int arr[4] = {6,4,2,1};
    bool sorted = true;
    for(int i = 0; i<4; i++) {
        if(arr[i]>arr[i+1]) {
            sorted = false;
        }
    }

    if(sorted==true) {
        cout << "YES" << endl;
    }

    else {
        if(k==1) {
            cout << "NO" << endl;
        }

        else {
            cout << "YES" << endl;
        }
    }
}

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        string s;
        int n;
        cin >> n;
        cin >> s;

        int op = 0;
        bool may = false;

        for(int i= 0; i<n; i++) {
            if(s[i]=='.' && (i+1)<n && s[i+1]=='.' && (i+2)<n && s[i+2]=='.') {
                may = true;
                break;
            }

            if(s[i]=='.') {
                op++;
            }
        }

        if(may) {
            cout << 2 << endl;
        }

        else {
            cout << op << endl;
        }
    }
    return 0;
}

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int a[n];
        
        for(int i = 0; i<n; i++) {
            cin >> a[i];
        }

        if(a[0]!=1) {
            cout << "NO" << endl;
        }

        else {
            for(int i = 0; i<n; i++) {
                if(a[i]>n) {
                    cout << "NO" << endl;
                    break;
                }

            }

            cout << "YES" << endl;
        }
    }

    return 0;
}


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool check(string s, string x) {
    if(x.size() < s.size()) {
        return false;
    }

    for(int i = 0; i<x.size()-s.size()+1; i++) {
        if(x.substr(i,s.size())==s) {
            return true;
        }
    }

    return false;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        string x;
        string s;
        long long n,m;
        cin >> n >> m;
        cin >> x >> s;

        string x0 = x;
        string x1 = x0 + x0;
        string x2 = x1 + x1;
        string x3 = x2 + x2;
        string x4 = x3 + x3;
        string x5 = x4 + x4;

        long long ans = -1;
        if(check(s,x0)) {
            ans = 0;
        }

        else if(check(s,x1)) {
            ans = 1;
        }

        else if(check(s,x2)) {
            ans = 2;
        }

        else if(check(s,x3)) {
            ans = 3;
        }

        else if(check(s,x4)) {
            ans = 4;
        }

        else if(check(s,x5)) {
            ans = 5;
        }

        cout << ans << endl;
    }
    return 0;
}

#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        int a[n-1];
        for(int i = 0; i<n-1; i++) {
            cin >> a[i];
        }

        long long ans1 = 0;
        long long ans2 = 0;
        long long ans;

        for(int i = 0; i<n-1; i++) {
            if(a[i]>=0) {
                ans1 = ans1 + a[i];
            }

            else {
                ans2 = ans2 + abs(a[i]);
            }
        }

        ans = ans2 - ans1;
        cout << ans << endl;
    }

    return 0;
}


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

    long long mini = INT_MAX;
    long long n;
    cin >> n;
    long long a[n];
        
    for(int i = 0; i<n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i<n; i++) {

        mini = min(mini,abs(a[i]));

    }

    cout << mini << endl;


    return 0;
}


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a,b,c,d;
        cin >> a >> b >> c >> d;

        if(c==0) {
            cout << "Flower" << endl;
        }

        else if(d==0) {
            cout << "Gellyfish" << endl;
        }

        else if(c==d || c>d) {
            cout << "Gellyfish" << endl;
        }

        else if(c<d) {
            cout << "Flower" << endl;
        }

    }

    return 0;
}

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,s;
        cin >> n >> s;

        int arr[n];
        for(int i = 0; i<n; i++) {
            cin >> arr[i];
        }

        int maxi = 0;

        for(int i = 0; i<n; i++) {
            if(arr[i]>maxi) {
                maxi = arr[i];
            }
        }

        int ans1 = maxi-s;

        if(n==1 && s==1 && maxi==1) {
            cout << 0 << endl;
        }

        else if(s>maxi) {
            cout << (s-1) << endl;
        }

        else if(s>ans1 && maxi>=s) {
            cout << (maxi-s + maxi-1) << endl;
        }

        else if(maxi>=s) {
            cout << (s + maxi - 2) << endl;
        }

    }

    return 0;


}




