#include<iostream>
using namespace std;

class arrayStack {
private:
    int capacity;
    int topIndex;
    int* arr;
public:
    arrayStack(int sz) {
        this->capacity = sz;
        this->topIndex = -1;
        this->arr = new int[capacity];
    }
    bool empty() {
        if(topIndex==-1) {
            return true;
        }
        else{
            return false;
        }
    }
    int size() {
        return topIndex+1;
    }
    int top() {
        if(empty()) {
            return -1;
        }
        return arr[topIndex];
    }
    void push(int x) {
        if(capacity <= size()) {
            cout << "FULL" << "\n";
            return;
        }
        arr[topIndex+=1] = x;
    }
    void pop() {
        if(empty()) {
            cout << -1 << "\n";
            return;
        }
        else {
            cout << arr[topIndex] << "\n";
            topIndex--;
        }
    }
};

int main() {
    int M,x; string s;
    cin >> M;
    arrayStack arr(10000);
    while(M--) {
        cin >> s;
        if(s=="size") {
            cout << arr.size() << "\n";
        }
        else if(s=="empty") {
            if(arr.empty()) {
                cout << 1 << "\n";
            }
            else{
                cout << 0 << "\n";
            }
        }
        else if(s=="push") {
            cin >> x;
            arr.push(x);
        }
        else if(s=="top") {
            cout << arr.top() << "\n";
        }
        else if(s=="pop") {
            arr.pop();
        }
    }
}