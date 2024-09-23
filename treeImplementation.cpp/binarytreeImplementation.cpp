#include <iostream>
#include <queue>
using namespace std;

// Node structure
class Node {
    public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        this->data = value;
        left = nullptr;
        right = nullptr;
    }
};

// Insert function for a Binary Tree
void insert(Node* &root, int value) {
    Node* newNode = new Node(value);
    if (root == nullptr) {
        root = newNode;
        return;
    }

    // Use a queue to do level-order traversal
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        // Insert the new node in the first available position
        if (temp->left == nullptr) {
            temp->left = newNode;
            return;
        } else {
            q.push(temp->left);
        }

        if (temp->right == nullptr) {
            temp->right = newNode;
            return;
        } else {
            q.push(temp->right);
        }
    }
}

// In-order traversal to print the Binary Tree
void inorderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

int main() {
    Node* root = nullptr;
    int n, value;

    cout << "Enter the number of nodes: ";
    cin >> n;

    cout << "Enter " << n <<"values: "<<endl;
    for (int i = 0; i < n; i++) {
        cin >> value;
        insert(root, value);
    }

    cout << "In-order traversal: ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}