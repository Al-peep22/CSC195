#include "Human.h"
#include <iostream>
#include "Console.h"
using namespace std;

int Human::count = 0;
const float Human::tax = 0.0825f;

void Human::SetAge(unsigned short age) {
	this->age = age;
}

void Human::Read() {
	cout << "Enter Name: " << endl;
	cin >> name;
	cout << "Enter Age: " << endl;;
	age = GetInt();
}

void Human::Write() {
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
}
