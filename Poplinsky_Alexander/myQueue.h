#pragma once
#include <iostream>

using namespace std;

template<typename T>
class myQueue {
private:
	int count;
	T *ptrArray;
public:
	myQueue(int count);
	~myQueue();

	void pushBack(T data);
	void popFront();
	T getFront();
	T getSize();
	void printQueue();
	void enterQueue();
};

#include "myQueue.tpp"