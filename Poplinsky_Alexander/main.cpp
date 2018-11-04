#include "myQueue.h"

int main() {

	myQueue<double> myQueue(3);

	myQueue.enterQueue();
	myQueue.printQueue();

	myQueue.pushBack(678.231);
	myQueue.printQueue();

	myQueue.popFront();
	myQueue.printQueue();

	myQueue.getSize();

	myQueue.getFront();
	myQueue.printQueue();

	system("pause");
	return 0;
}