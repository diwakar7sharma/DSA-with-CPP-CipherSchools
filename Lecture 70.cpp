#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *left;
    Node *right;
    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void preorder(Node *root) {
    if (root == NULL) {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node *root) {
    if (root == NULL) {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(Node *root) {
    if (root == NULL) {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void buildTree(Node* &root) {
    int var;
    cout << "Enter the value: ";
    cin >> var;
    if (var == -1) return; 
    root = new Node(var);
    cout << "Now enter the data of left node of node " << var << " " << endl;
    buildTree(root->left);
    cout << "Now enter the data of right node of node " << var << " " << endl;
    buildTree(root->right);
}

int main() {
    Node *root = NULL;
    buildTree(root);
    // Example input: 5 9 1 -1 -1 7 -1 -1 3 2 -1 -1 5 9 -1 -1 10 -1 -1
    cout << "Preorder: ";
    preorder(root);
    cout << endl;
    cout << "Inorder: ";
    inorder(root);
    cout << endl;
    cout << "Postorder: ";
    postorder(root);
    cout << endl;
    return 0;
}
