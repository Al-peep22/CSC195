#include "Console.h"
using namespace std;

int GetInt() {
	int x;
	while (true) {
		cin >> x;
		if (cin.fail()) {
			cin.clear();
		}
	}
}