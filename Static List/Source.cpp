/*
- Always ordered through key, crescent
- Static memory/allocation
- Client:
	Key
	Name
- [0] is a dummy, used to allocate new clients
- Keys are unique
- List size is 20
- Default constructor
- Find and print key
- Receive and allocate node, if possible, to its oredred index
- Merge two lists
- Print entirety of list key, name

*/

#include <string>
#include "OrStaticList.h"

//line filler(visualization purpose)
void line() {
	std::cout << "------------------------------------------------------------" << std::endl;
}

int main() {
	OrStaticList l1;
	OrStaticList l2;

	Client c1(1, "a");
	Client c2(2, "b");
	Client c3(3, "c");
	Client c4(4, "d");
	Client c5(5, "e");
	Client c6(6, "f");
	Client c7(7, "g");
	Client c8(8, "h");
	Client c9(9, "i");

	l1.insert(c2);
	l1.print();
	line();

	l1.insert(c5);
	l1.print();
	line();

	l1.insert(c9);
	l1.print();
	line();

	l1.insert(c7);
	l1.print();
	line();

	l1.insert(c6);
	l1.print();
	line();
	line();

	l1.search(2).print();
	line();

	l1.search(9).print();
	line();

	l1.search(5).print();
	line();

	l1.search(1).print();
	line();

	l1.search(8).print();
	line();

	l1.search(4).print();
	line();
	line();

	l2.insert(c1);
	l2.insert(c3);
	l2.insert(c8);
	l2.insert(c4);
	//l2.insert(Client(10, "test")); //added to test merging a number greater than all of those inside l1
	l2.print();
	line();
	line();

	l1.merge(l2);
	l1.print();
	line();

	l2.print();
	line();
	
	return 0;
}