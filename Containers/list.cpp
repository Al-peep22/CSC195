#include "Containers.h"
using namespace std;

void containerList::printFruits() {
	list<string> fruits = { "Apple","Banana","Orange" };
	cout << "---list<string>---" << endl;
	for (string item : fruits) {
		cout << item << endl;
	}
	cout << "---remove(\"Orange\")---" << endl;
	fruits.remove("Orange");
	for (string item : fruits) {
		cout << item << endl;
	}
}