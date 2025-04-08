#include "Containers.h";
using namespace std;
int main() {
	//int i = 0xff;
	//array<int, 5> arr = {1,2,3,4,5};

	//cout << arr.size() << endl;

	////cin >> i;
	////cout << &i << endl;
	//cout << (&arr[0]) << endl;
	//cout << (&arr[1]) << endl;

	//cout << "Hello World!" << endl;

	////vector
	//vector<int> vec = { 1,2,3,4,5 };
	//vec.push_back(6);

	//cout << vec.size() << endl;
	//cout << vec.capacity() << endl;

	////list
	//list<int> lst = { 1,2,3,4,5 };
	//lst.push_back(6);
	//lst.insert(lst.begin(), 0);

	////map
	//map<string, int > m;
	//m["riley"] = 46;
	//m["garrett"] = 86;
	//m["mike"] = 100;

	//cout << m["riley"] << endl;

	containerArray cArray;
	cArray.printDaysOfWeek();

	containerVector cVector;
	cVector.printNumbers();
	
	containerList cList;
	cList.printFruits();

	containerMap cMap;
	cMap.printGroceryProducts();	
}

