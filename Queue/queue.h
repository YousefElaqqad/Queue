#include <iostream>
using namespace std;
class queue {
private:
    int size;
    int *arr;
    int front;
    int rear;
    int count;

public:
    queue();
    void getsize(int x);
    bool isEmpty();
    bool isFull();
    void enqueue(int x);
    int dequeue();
    void print();
    ~queue();
};