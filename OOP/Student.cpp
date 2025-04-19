#include "Student.h"
#include <iostream>
using namespace std;

void Student::Read() {
	Human::Read();
	cout << "Enter GPA: ";
	cin >> gpa;
}
void Student::Write() {
	Human::Write();
	cout << "GPA : " << gpa << endl;
}