#include "Deque.h"
#include <assert.h>

void line() {
	std::cout << "______________________________" << std::endl;
}

int main() {

	//int i = 2;
	//assert(i == 1);
#ifdef NDEBUG
	std::cout << "**" << std::endl;
#endif //NDEBUG

	Deque d;
	Client c1(1, "a");
	Client c2(2, "b");
	Client c3(3, "c");
	Client c4(4, "d");
	Client c5(5, "e");
	Client c6(6, "f");
	Client c7(7, "g");
	Client c8(8, "h");
	Client c9(9, "i");

	line();
	d.push_back(c1);
	d.push_back(c3);
	d.push_front(c4);
	d.push_back(c8);
	d.push_front(c7);
	d.print();
	line();

	d.catch_front().print();
	d.catch_front().print();
	d.catch_front().print();
	line();
	d.print();
	line();
	d.catch_front().print();
	d.catch_front().print();
	d.catch_front().print();
	line();

	d.push_front(c2);
	d.push_front(c6);
	d.push_front(c9);
	d.push_back(c3);
	d.push_back(c7);
	d.print();
	line();

	d.catch_back().print();
	d.catch_back().print();
	d.catch_back().print();
	line();
	d.print();
	line();
	d.catch_back().print();
	d.catch_back().print();
	d.catch_back().print();
	line();
	d.print();

	return 0; //breakpoint
}