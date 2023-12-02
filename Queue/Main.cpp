#include "queue.h"
#include <iostream>
using namespace std;
void main()
{
	queue q;
	cout << "Enter the size\n";
	int x;
	cin >> x;
	q.getsize(x);
	q.enqueue(0);
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(4);
	q.dequeue();
	q.dequeue();
	q.enqueue(0);
	q.enqueue(1);
	q.print();
}