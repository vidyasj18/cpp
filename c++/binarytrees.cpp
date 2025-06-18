#include<iostream>
#include<queue>
using namespace std;

class node {
    public:
        int data;
        node *left;
        node *right;

    node(int d) {
        this ->data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
    
};

node *buildTree(node *root) {
    int data;
    cout << "enter the data: " << endl;
    cin >> data;
    root = new node(data);
    if(data == -1) {
        return NULL;
    }

    cout << "enter the data for inserting in left" << data << endl;
    root -> left = buildTree(root->left);
    cout << "enter the data for inserting in right" << data << endl;
    root -> right = buildTree(root->right);
    return root;
}

void levelOrderTraversal(node *root) {
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        node *temp = q.front();
        cout << temp ->data << " ";
        q.pop();

        if(temp==NULL) { // purana level completed
            cout << endl;
            if(!q.empty()) { // queue still has child nodes
                q.push(NULL);
            }
        }
        
        else {
            cout << temp->data << " ";
            if(temp->left) {
                q.push(temp->left);
            }

            if(temp->right) {
                q.push(temp->right);
            }
        }
    }
}

 // reverse level order traversal - HW

 // inorder traversal - HW

void inorderTraversal(node *root) {
    if(root == NULL) {
        return;
    }

    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

void preorderTraversal(node *root) {
    if(root == NULL) {
        return;
    }

    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void postorderTraversal(node *root) {
    if(root == NULL) {
        return;
    }

    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";
}

void buildFromLevelOrder(node *&root) {
    queue<node*> q;
    cout << "enter the data for root node: " << endl;
    int data;
    cin >> data;

    root = new node(data);
    q.push(root);

    while(!q.empty()) {
        node *temp = q.front();
        q.pop();

        cout << "enter left node for " << temp->data << endl;
        int leftData;
        cin >> leftData;
        if(leftData != -1) {
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        cout << "enter right node for " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if(rightData!=-1) {
            temp->right = new node(rightData);
            q.push(temp->right);
        }

        
    }
}


int main() {
    node *root = NULL;
    // creating a tree
    // root = buildTree(root);

    // level order
    // levelOrderTraversal(root);

    // inorder traversal - LNR
    // cout << "inorder traversal is: " << endl;
    // inorderTraversal(root);

    buildFromLevelOrder(root);
    levelOrderTraversal(root);
    
    return 0;
}