#include<iostream>
using namespace std;

class node{
private:
    int data;
    node* next;
public:
    node(int x) {
        this->data = x;
        this->next = NULL;
    }
    friend class Stack;
};

class Stack{
private:
    node* topNode;
    int listSize;
public:
    Stack() {
        topNode = NULL;
        listSize = 0;
    }
    bool empty() {
        if(listSize==0)
            return true;
        else
            return false;
    }
    int size() {
        return listSize;
    }
    int top() {
        if(empty()) {
            return -1;
        }
        return topNode->data;
    }
    void push(int x) {
        node* newNode = new node(x);
        if(empty()) {
            topNode = newNode;
        }
        else{
            newNode->next = topNode;
            topNode = newNode;
        }
        listSize++;
    }
    void pop() {
        if(empty()) {
            cout << -1 << "\n";
            return;
        }
        node* delNode = topNode;
        cout << topNode->data << "\n";
        topNode = topNode->next;
        delete delNode;
        listSize--;
    }
};

int main() {
    int N,x; string s;
    cin >> N;
    Stack list;
    while(N--) {
        cin >> s;
        if(s=="push") {
            cin >> x;
            list.push(x);
        }
        else if(s=="top") {
            cout << list.top() << "\n";
        }
        else if(s=="size") {
            cout << list.size() << "\n";
        }
        else if(s=="empty") {
            if(list.empty()) {
                cout << 1 << "\n";
            }
            else{
                cout << 0 << "\n";
            }
        }
        else if(s=="pop") {
            list.pop();
        }
    }
}