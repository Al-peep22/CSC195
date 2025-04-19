#include "Animal.h"
#include <iostream>
using namespace std;

void Animal::Read() {
	cout << "Enter Name: ";
	cin >> name;
	cout << "Enter Age: ";
	cin >> age;
}

void Animal::Write() {
	cout << "Name: " << name << "\nAge: " << age << endl;
}