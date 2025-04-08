#include "Containers.h"
using namespace std;

void containerMap::printGroceryProducts() {
	cout << "---map<string,int>---" << endl;
	map<string, int > groceryProducts = { {"Apples",10},{"Bananas",5},{"Oranges",2} };
	for (const auto& item : groceryProducts) {
		cout << item.first << ": " << item.second << endl;
	}
	cout << "---[\"Oranges\"] = 7---" << endl;
	groceryProducts["Oranges"] = 7;
	for (const auto& item : groceryProducts) {
		cout << item.first << ": " << item.second << endl;
	}
}