#include "Hash.h"

int main() {
	Client a1(1, "a1");
	Client a2(20, "a2");
	Client a3(17, "a3");
	Client a4(13, "a4");
	Client a5(10, "a5");
	Client a6(18, "a6");
	Client a7(7, "a7");
	Client a8(9, "a8");
	Client a9(16, "a9");
	Client a10(2, "a10");
	Client a11(5, "a11");
	Client a12(11, "a12");
	Client a13(3, "a13");

	Hash test;

	test.insertItem(a1);
	test.insertItem(a2);
	test.insertItem(a3);
	test.insertItem(a4);
	test.insertItem(a5);
	test.insertItem(a6);
	test.insertItem(a7);
	test.insertItem(a8);
	test.insertItem(a9);
	test.insertItem(a10);
	test.insertItem(a11);
	test.insertItem(a12);
	test.insertItem(a13);

	test.displayHash();
	std::cout << "----------" << std::endl;

	for (unsigned int i = 1; i <= 20; i++) {
		test.displayItem(i);
	}
	std::cout << "----------" << std::endl;

	return 0;
}