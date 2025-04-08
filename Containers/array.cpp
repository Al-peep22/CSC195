#include "Containers.h"
using namespace std;

void containerArray::printDaysOfWeek() {
	cout << "---array<string>---" << endl;
	array<string, 7> daysOfWeek = { "Monday","Tuesday","Wednesday","Thrusday","Friday","Sunday" };
	for (int i = 0; i < daysOfWeek.size(); i++) {
		cout << daysOfWeek[i] << endl;
	}
}