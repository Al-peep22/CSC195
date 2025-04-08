#include "Containers.h"
using namespace std;

void containerVector::printNumbers() {
	cout << "---vector<int>---" << endl;
	vector<int> numbers = { 1,2,3,4,5 };
	for (int i = 0; i < numbers.size(); i++) {
		cout << numbers[i] << endl;
	}
	numbers.push_back(6);
	numbers.push_back(7);
	cout << "---push_back(6)---" << endl;
	cout << "---push_back(7)---" << endl;
	for (int i = 0; i < numbers.size(); i++) {
		cout << numbers[i] << endl;
	}
	numbers.pop_back();
	cout << "---pop_back()---" << endl;
	for (int i = 0; i < numbers.size(); i++) {
		cout << numbers[i] << endl;
	}
}