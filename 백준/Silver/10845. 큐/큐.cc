#include<iostream>
using namespace std;

class arrayQueue{
private:
    int front;
    int rear;
    int* arr;
    int capacity;
    int size;
public:
    arrayQueue() {
        capacity = 10000;
        front = rear = 0;
        size = 0;
        arr = new int[capacity];
    }
    bool empty() {
        return size==0;
    }
    int Front() {
        if(empty()) {
            return -1;
        }
        return arr[front];
    }
    int Back() {
        if(empty()) {
            return -1;
        }
        return arr[rear-1];
    }
    int Size() {
        return size;
    }
    void push(int x) {
        arr[rear] = x;
        rear = (rear+1) % capacity;
        size++;
    }
    void pop() {
        if(empty()) {
            cout << -1 << "\n";
            return;
        }
        cout << arr[front] << "\n";
        front = (front+1) % capacity;
        size--;
    }
};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; string s;
    cin >> n;
    arrayQueue queue;
    while(n--) {
        cin >> s;
        if(s=="empty") {
            if(queue.empty()) {
                cout << "1" << "\n";
            }
            else{
                cout << "0" << "\n";
            }
        }
        else if(s=="size") {
            cout << queue.Size() << "\n";
        }
        else if(s=="front") {
            cout << queue.Front() << "\n";
        }
        else if(s=="back") {
            cout << queue.Back() << "\n";
        }
        else if(s=="push") {
            int x; cin >> x;
            queue.push(x);
        }
        else if(s=="pop") {
            queue.pop();
        }
    }
}