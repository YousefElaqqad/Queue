#include "queue.h"
#include <iostream>
using namespace std;
queue::queue() : front(0),rear(- 1),count(0)
{
}
void queue::getsize(int x)
{
    size = x;
    arr = new int[size];
}
bool queue::isEmpty() {
    return (count == 0);
}

bool queue::isFull() {
    return (count == size);
}
void queue::enqueue(int x) {
    if (isFull()) {
        cout << "Queue is full, cannot enqueue" << endl;
        return;
    }
    rear = (rear + 1) % size;
    arr[rear] = x;
    count++;
}
int queue::dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty, cannot dequeue" << endl;
        return -1;
    }
    int x = arr[front];
    front = (front + 1) %size;
    count--;
    return x;
}
void queue::print() {
    if (isEmpty()) {
        cout << "Queue is empty, nothing to print" << endl;
        return;
    }
    cout << "Queue elements are: ";
    int i = front;
    while (i != rear) {
        cout << arr[i] << " ";
        i = (i + 1) % size;
    }
    cout << arr[rear] << endl;
}
queue::~queue()
{
    delete[]arr;
}