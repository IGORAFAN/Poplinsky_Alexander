#pragma once
#include "myQueue.h"

template<typename T>
myQueue<T>::myQueue(int count) :ptrArray(NULL), count(0) {
	this->count = count;
	ptrArray = new T[count];
}

template<typename T>
myQueue<T>::~myQueue() {
	delete ptrArray;
}

template<typename T>
void myQueue<T>::pushBack(T data) {
	for (int i(0); i < (count - 1); i++) {
	ptrArray[i] = ptrArray[i + 1];
	}
	ptrArray[count - 1] = data;
	cout << endl << "Set data at the end of the queue - " << data << endl;
}

template<typename T>
void myQueue<T>::popFront() {
	cout << endl << "From the queue deleted the first position - " << ptrArray[0] << endl;
	for (int i(0); i < (count - 1); i++) {
	ptrArray[i] = ptrArray[i + 1];
	}
	ptrArray[count - 1] = NULL;
}

template<typename T>
T myQueue<T>::getFront() {
	cout << endl << "the First item is - " << ptrArray[0] << endl;
	return ptrArray[0];
}

template<typename T>
T myQueue<T>::getSize() {
	return this->count;
}

template<typename T>
void myQueue<T>::printQueue() {
	cout << endl << "Position    :";
	for (int i(1); i <= count; i++) {
		cout << "\t|" << i;
	}

	cout << endl << "Queue's data:";

	for (int i(0); i < count; i++) {
		cout << "\t|" << ptrArray[i];
	}
	cout << endl;
}

template<typename T>
void myQueue<T>::enterQueue() {
	for (int i(0); i < count; i++) {
		cout << "Enter data at position [" << i + 1 << "] >> ";
		cin >> ptrArray[i];
	}
	cout << endl;
}