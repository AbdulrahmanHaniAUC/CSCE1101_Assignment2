#ifndef Queue_hpp
#define Queue_hpp

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

const int MAX_SIZE = 10;

template <class Q>

class Queue {
private:
    vector<Q> WorkshopQueue;
    int length;
    int count;
    int rear;
    int front;
public:
    Queue() {
        length = size();
        WorkshopQueue.resize(length);
        count = 0;
        front = 0;
        rear = -1;
    };
    Queue(int l) {
        length = l;
        WorkshopQueue.resize(l);
        count = 0;
        front = 0;
        rear = -1;
    }
    
    void push(Q& key) {
        rear++;
        WorkshopQueue[rear] = key;
        count++;
    };
    Q pop() {
        Q x = WorkshopQueue[front];
        front++;
        count--;
        return x;
    };
    Q check(int key) {
        Q x = WorkshopQueue[key];
        return x;
    }
    
    int size() {
        return count;
    };
    
    void print() {
        if (!this->isEmpty()) {
            for (int i = front; i <= rear; i++) {
                cout << WorkshopQueue[i] << endl;
            }
        } else {
            cout << "Queue is Empty" << endl;
        }
    };
    
    bool isEmpty() {
        if (count == 0) {
            return true;
        } else {
            return false;
        }
    };
    
    bool isFull() {
        if (this->size() >= MAX_SIZE) {
            return true;
        } else {
            return false;
        }
    };
};

#endif /* Queue_hpp */
