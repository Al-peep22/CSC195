#include "Containers.h";
using namespace std;
int main() {
	int i = 0xff;
	array<int, 5> arr = {1,2,3,4,5};

	cout << arr.size() << endl;

	//cin >> i;
	//cout << &i << endl;
	cout << (&arr[0]) << endl;
	cout << (&arr[1]) << endl;

	cout << "Hello World!" << endl;

	//vector
	vector<int> vec = { 1,2,3,4,5 };
	vec.push_back(6);

	cout << vec.size() << endl;
	cout << vec.capacity() << endl;

	//stack
	stack<int> s;
	s.push(1);
	s.push(2);
	s.pop();
	cout << s.top() << endl;

	//list
	list<int> lst = { 1,2,3,4,5 };
	lst.push_back(6);
	lst.insert(lst.begin(), 0);

	//iterator
	for (auto iter = lst.begin(); iter != lst.end(); iter++) {
		cout << *iter << endl;
	}

	//list<int>::iterator iter = lst.begin();
	auto iter = lst.begin();
	cout << *iter << endl; // 0
	iter++;
	cout << *iter << endl; // 1

	//map
	map<string, int > m;
	m["riley"] = 46;
	m["garrett"] = 86;
	m["mike"] = 100;

	cout << m["riley"] << endl;

	for (auto iter = m.begin(); iter != m.end(); iter++) {
		cout << iter->first << " " << iter->second << endl;
	}

	/*containerArray cArray;
	cArray.printDaysOfWeek();

	containerVector cVector;
	cVector.printNumbers();
	
	containerList cList;
	cList.printFruits();

	containerMap cMap;
	cMap.printGroceryProducts();	*/
}

