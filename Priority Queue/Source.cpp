#include "pQueue.h"

void line() {
	std::cout << "--------------------" << std::endl;
}

int main() {
	Client c1(20, "c1");
	Client c2(80, "c2");
	Client c3(40, "c3");
	Client c4(50, "c4");
	Client c5(10, "c5");
	Client c6(25, "c6");
	Client c7(35, "c7");
	Client c8(60, "c8");
	Client c9(45, "c9");

	pQueue h;

	h.push(c1);
	h.print();
	line();

	h.push(c2);
	h.push(c3);
	h.push(c4);
	h.push(c5);
	h.push(c6);
	h.push(c7);
	h.push(c8);
	h.push(c9);
	h.print();
	line();

	h.pop();
	h.print();
	line();

	h.pop();
	h.pop();
	h.pop();
	h.print();
		line();

	return 0;
}
//tests
/*
Client a1(67, "a1");
	Client a2(42, "a2");
	Client a3(30, "a3");
	Client a4(15, "a4");
	Client a5(36, "a5");
	Client a6(10, "a6");
	Client a7(13, "a7");
	Client a8(9, "a8");
	Client a9(3, "a9");
	Client a10(16, "a10");
	Client aTest(100, "test");

	pQueue test;

	std::cout << test.isEmpty() << std::endl;
	std::cout << test.isFull() << std::endl;
	test.print();
	line();

	test.push(a1);
	test.push(a2);
	test.push(a3);
	test.push(a4);
	test.push(a5);
	test.push(a6);
	test.push(a7);
	test.push(a8);
	test.push(a9);
	test.push(a10);
	std::cout << test.isEmpty() << std::endl;
	line();
	test.print();
	line();

	test.push(aTest);
	test.print();
	line();
	test.top().print();
	line();
	test.print();
	line();
	test.pop();
	test.print();
	line();

	test.pop();
	test.print();
	line();

	test.pop();
	test.print();
	line();

	test.pop();
	test.print();
	line();

	test.pop();
	test.print();
	line();

	test.push(a1);
	test.print();
	line();

	test.push(aTest);
	test.print();
	line();
	*/