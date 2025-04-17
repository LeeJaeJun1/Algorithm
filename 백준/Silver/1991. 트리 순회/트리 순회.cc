#include<iostream>
#include<list>
using namespace std;

struct Node {
    char data;
    Node* left;
    Node* right;
    list<Node*>::iterator pos;

    Node(char data) {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

class BinaryTree {
private:
    Node* root_node;
    list<Node*> node_list;

public:
    BinaryTree() {
        root_node = nullptr;
    }
    Node* find(char value) {
        for(auto node : node_list) {
            if(node->data == value) {
                return node;
            }
        }
        return nullptr;
    }
    void insert(char parent, char left, char right) {
        Node* parentNode = find(parent);
        if(!parentNode) {
            parentNode = new Node(parent);
            node_list.push_back(parentNode);
            parentNode->pos = --node_list.end();
            if(!root_node) {
                root_node = parentNode;
            }
        }
        if(left != '.') {
            Node* leftNode = new Node(left);
            parentNode->left = leftNode;
            node_list.push_back(leftNode);
            leftNode->pos = --node_list.end();
        }
        if(right != '.') {
            Node* rightNode = new Node(right);
            parentNode->right = rightNode;
            node_list.push_back(rightNode);
            rightNode->pos = --node_list.end();
        }
    }

    void preorder(Node* node) {
        if(!node) {
            return;
        }
        cout << node->data;
        preorder(node->left);
        preorder(node->right);
    }
    void inorder(Node* node) {
        if(!node) {
            return;
        }
        inorder(node->left);
        cout << node->data;
        inorder(node->right);
    }
    void postorder(Node* node) {
        if(!node)  {
            return;
        }
        postorder(node->left);
        postorder(node->right);
        cout << node->data;
    }
    void printTraversal() {
        preorder(root_node);
        cout << "\n";
        inorder(root_node);
        cout << "\n";
        postorder(root_node);
        cout << "\n";
    }
};

int main() {
    int n;
    cin >> n;

    BinaryTree tree;
    while(n--) {
        char parent,left,right;
        cin >> parent >> left >> right;
        tree.insert(parent,left,right);
    }
    tree.printTraversal();
}