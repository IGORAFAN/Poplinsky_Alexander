#pragma once
#include <iostream>

using namespace std;

template<typename T>
class myQueue {
private:
	int count;//количество елементов в массиве
	T *ptrArray;//указатель на массив
public:
	myQueue(int count);//конструктор принимающий количество элементов в массив
	~myQueue();//деструкто удаляющий указатель на массив

	void pushBack(T data);//
	void popFront();
	T getFront();
	T getSize();
	void printQueue();
	void enterQueue();
};

#include "myQueue.tpp"