#include "OrStaticList.h"
//constructor
OrStaticList::OrStaticList() {
	ceiling = 0;
}
//destructor
OrStaticList::~OrStaticList() {
	//no implementation
}
//prints
void OrStaticList::print()const {
	for (unsigned int i = 0; i < ceiling; i++) {
		List[i].print();
	}
}
void OrStaticList::print(unsigned int index) {
	if (index >= 0 and index < ceiling) { List[index].print(); }
	else { std::cout << "0, dummy" << std::endl; }
}
void OrStaticList::print_key(unsigned int fKey) {
	int index = bSearch(fKey, 0, ceiling);
	if (index != -1) { List[index].print(); }
	else { std::cout << "0, dummy" << std::endl; }
}
//binary searches
Client OrStaticList::search(unsigned int value) {
	//wont use sizeof because its static, therefore, some positions may be "unassigned"
	int l = 0;
	int r = ceiling;
	if (value == 0) { return Client(0,"dummy"); }
	if (r >= l) {
		int mid = l + ((r - l) / 2);
		if (List[mid].getKey() == value) { return List[mid]; }
		else if (List[mid].getKey() > value) { return search(value, l, mid - 1); }
		else { return search(value, mid + 1, r); }
	}
	return Client(0, "dummy");
}
Client OrStaticList::search(unsigned int value, int l, int r) {
	//wont use sizeof because its static, therefore, some positions may be "unassigned"
	if (value == 0) { return Client(0, "dummy"); }
	if (r >= l) {
		int mid = l + ((r - l) / 2);
		if (List[mid].getKey() == value) { return List[mid]; }
		else if (List[mid].getKey() > value) { return search(value, l, mid - 1); }
		else { return search(value, mid + 1, r); }
	}
	return Client(0, "dummy");
}
int OrStaticList::bSearch(unsigned int value) {
	//wont use sizeof because its static, therefore, some positions may be "unassigned"
	int l = 0;
	int r = ceiling;
	if (value == 0) { return -1; }
	if (r >= l) {
		int mid = l + ((r - l) / 2);
		if (List[mid].getKey() == value) { return mid; }
		else if (List[mid].getKey() > value) { return bSearch(value, l, mid - 1); }
		else { return bSearch(value, mid + 1, r); }
	}
	return -1;
}
int OrStaticList::bSearch(unsigned int value, int l, int r) {
	//wont use sizeof because its static, therefore, some positions may be "unassigned"
	if (value == 0) { return -1; }
	if (r >= l) {
		int mid = l + ((r - l) / 2);
		if (List[mid].getKey() == value) { return mid; }
		else if (List[mid].getKey() > value) { return bSearch(value, l, mid - 1); }
		else { return bSearch(value, mid + 1, r); }
	}
	return -1;
}
int OrStaticList::bSearchLI(unsigned int value,  int l,  int r) {
	if (r <= l) {
		if (value > List[l].getKey() and List[l].getKey()!=0) { return l + 1; }
		return l;
	}
	int mid = (l + r) / 2;
	if (value == List[mid].getKey()) { return mid + 1; }
	if (value > List[mid].getKey()) { return bSearchLI(value, mid + 1, r); }
	return bSearchLI(value, l, mid - 1);
}
//insertion method
void OrStaticList::insert(Client c) {
	if (ceiling < maxSize) {
		//does not allow two clients with same key, comment to remove restriction
		for (unsigned int i = 0; i < ceiling; i++) {
			if (c.getKey() == List[i].getKey()) {
				return;
			}
		}
		//does not allow client with 0 key
		if (c.getKey() == 0) { return; }
		//
		if (ceiling == 0) { List[0] = c; }
		int aux = bSearchLI(c.getKey(), 0, ceiling);
		if (List[aux].getKey() == 0) {
			List[aux] = c;
		}
		if (List[aux].getKey() > c.getKey()) {
			for (int i = ceiling; i > aux; i--) {
				List[i] = List[i - 1];
			}
			List[aux] = c;
		}
		ceiling++;
	}
}
//merger
void OrStaticList::merge(OrStaticList inp) {
	for (unsigned int i = 0; i < inp.ceiling; i++) {
		if (ceiling == 20) { return; }
		for (unsigned int j = i; j < ceiling; j++) {
			if (List[j] == inp.List[i]) {
				for (unsigned int k = ceiling; k > j; k--) {
					List[k] = List[k - 1];
				}
				List[j] = inp.List[i];
				ceiling++;
				break;
			}
			else if (inp.List[i] < List[j]) {
				for (unsigned int k = ceiling; k > j; k--) {
					List[k] = List[k - 1];
				}
				List[j] = inp.List[i];
				ceiling++;;
				break;
			}
			else if (j == ceiling - 1) {
				List[ceiling] = inp.List[i];
				ceiling++;;
				break;
			}
		}
	}
}
void OrStaticList::merge_f(OrStaticList inp) {
	for (unsigned int i = 0; i < inp.ceiling; i++) {
		Client temp = inp.List[i];
		insert(temp);
	}
}