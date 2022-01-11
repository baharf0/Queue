// PriorityQueue.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

template <class T>
class Queue
{

private:

	T* data;
	unsigned int size;
	unsigned int front;
	unsigned int rear;

public:

	Queue();
	Queue(unsigned int);
	~Queue();
	bool IsFull();
	bool IsEmpty();
	void Add(const T&);
	T& Del();
	T& front();
	T& rear();

};

template <class T>
Queue<T> ::Queue()
{
	front = 0;
	rear = 0;
	size = 0;
	data = 0;
}

template <class T>
Queue<T> ::Queue(unsigned int s)
{
	size = s;
	front = 0;
	rear = 0;
	data = new T[s];
}

template <class T>
Queue<T> ::~Queue()
{
	delete[] data;
}

template <class T>
bool Queue<T> ::IsEmpty()
{
	if (front == rear)
		return true;
	else return false;
}

template <class T>
bool Queue<T> ::IsFull()
{
	return(front == (rear + 1) % size);
}

template <class T>
void Queue<T> ::Add(const T& d)
{

	if (IsFull())
		throw domain - error("Is Full");
	else
	{
		data[rear++] = d;
		rear = rear%s;
	}

}

template <class T>
T& Queue<T> ::Del()
{

	if (IsEmpty())
		throw domain - error("Is Empty");
	else
	{
		d = data[front++];
		if (front == size)
			front = 0;
	}
	return d;

}

template <class T>
T& Queue<T> ::front()
{

	if (IsEmpty())
		throw domain - error("Is Empty");
	return data[front];

}

template <class T>
T& Queue<T> ::rear()
{
	if (IsEmpty())
		throw domain - error("Is Empty");
	if (rear == 0)
		return data[size - 1];
	else return data[rear - 1];

}

int main()
{
	return 0;
}