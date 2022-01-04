#include "bst.h"

int main() {
	bst test, test2;
	Client a1(1, "a1");
	Client a2(2, "a2");
	Client a3(3, "a3");
	Client a4(4, "a4");
	Client a5(5, "a5");
	Client a6(6, "a6");
	Client a7(7, "a7");
	Client a8(8, "a8");
	Client a9(9, "a9");
	Client a10(10, "a10");
	Client a11(11, "a11");
	Client a12(12, "a12");

	test.insert(a8);
	test.insert(a5);
	test.insert(a3);
	test.insert(a12);
	test.insert(a9);
	test.insert(a4);
	test.insert(a11);
	test.insert(a2);
	test.insert(a6);
	test.insert(a10);
	test.insert(a1);
	test.insert(a7);
	test.preorder();
	std::cout << "--------------------" << std::endl;
	test.toRoot(test.getNode(10));
	std::cout << "--------------------" << std::endl;
	test.toRoot(test.getNode(1));
	std::cout << "--------------------" << std::endl;
	test.rotateRight();
	test.preorder();
	std::cout << "--------------------" << std::endl;
	test.toRoot(test.getNode(10));
	std::cout << "--------------------" << std::endl;
	test.toRoot(test.getNode(1));
	std::cout << "--------------------" << std::endl;
	test.rotateLeft();
	test.rotateLeft();
	test.preorder();
	std::cout << "--------------------" << std::endl;
	test.toRoot(test.getNode(10));
	std::cout << "--------------------" << std::endl;
	test.toRoot(test.getNode(1));
	std::cout << "--------------------" << std::endl;
// meus testes
	/*
	test2.insert(a5);
	test2.insert(a1);
	test2.insert(a3);
	test2.insert(a2);
	test2.insert(a9);
	test2.insert(a7);
	test2.insert(a6);
	test2.insert(a11);
	test2.insert(a10);
	test2.insert(a12);
	test2.preorder();
	std::cout << "--------------------" << std::endl;
	test2.postorder();
	std::cout << "--------------------" << std::endl;
	test2.getNode(10)->toRoot();
	std::cout << "--------------------" << std::endl;
	test2.toRoot(test2.getNode(10));
	std::cout << "--------------------" << std::endl;
	test2.rotateRight();
	test2.preorder();
	std::cout << "--------------------" << std::endl;
	test2.rotateLeft();
	test2.preorder();
	std::cout << "--------------------" << std::endl;
	test2.rotateLeft();
	test2.rotateLeft();
	test2.rotateLeft();
	test2.preorder();
	std::cout << "--------------------" << std::endl;
	*/
// fim meus testes
	return 0;
}