#include<iostream>
using namespace std;

class Node{
public:
    Node* next = nullptr;
    Node* prev = nullptr;
    char value;
};

class Iterator {
public:
    Node* node;
    Iterator() {
        node = nullptr;
    }
    void set(Node* node) {
        this->node = node;
    }
    Iterator* operator++() {
        node = node->next;
        return this;
    }
    Iterator* operator--() {
        node = node->prev;
        return this;
    }
};

class Sequence {
public:
    Node* head;
    Node* tail;
    int size;

    Sequence() {
        head = new Node;
        tail = new Node;
        head->next = tail;
        tail->prev = head;
        size = 0;
    }
    Node* begin() {
        return head->next;
    }
    Node* end() {
        return tail;
    }

    void insert(Iterator& p, char e) {
        Node* newNode = new Node;
        newNode->value = e;

        p.node->prev->next = newNode;
        newNode->prev = p.node->prev;
        newNode->next = p.node;
        p.node->prev = newNode;
        this->size++;
    }
    void erase(Iterator& p) {
        if(size==0 || p.node==head->next) {
            return;
        }
        Node* delNode = p.node->prev;
        delNode->prev->next = delNode->next;
        delNode->next->prev = delNode->prev;
        size--;
        delete delNode;
    }
    void nextP(Iterator& p) {
        if(p.node == tail) {
            return;
        }
        ++p;
    }
    void prevP(Iterator& p) {
        if(p.node==head->next) {
            return;
        }
        --p;
    }
    void findmultiple(int e) {
        int idx = 0; int count = 0;
        Iterator q = Iterator();
        q.node = begin();

        while(q.node!= end()) {
            if(q.node->value % e == 0) {
                cout << idx << " ";
                count++;
            }
            idx++;
            nextP(q);
        }
        if(count==0) {
            cout << -1 << "\n";
        }
        else{
            cout << "\n";
        }
    }
    void print() {
        Node* curNode = head->next;
        while(curNode !=tail) {
            cout << curNode->value << "";
            curNode = curNode->next;
        }
        cout << "\n";
    }
};

int main() {
    string str,command;
    char ch;
    Sequence sa;
    Iterator p;
    p.set(sa.begin());
    cin >> str;
    for(int i = 0; i < str.size(); i++) {
        sa.insert(p,str[i]);
    }
    int M;
    cin >> M;
    while(M--) {
        cin >> command;
        if(command=="L") {
            sa.prevP(p);
        }
        else if(command == "D") {
            sa.nextP(p);
        }
        else if(command == "B") {
            sa.erase(p);
        }
        else if(command == "P") {
            cin >> ch;

            sa.insert(p,ch);
        }
    }
    sa.print();
}