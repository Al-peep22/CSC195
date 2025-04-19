#include "Teacher.h"
using namespace std;

void Teacher::Read() {
	Human::Read();
	cout << "Enter Class Name: ";
	cin >> className;
	cout << "Enter Classroom: ";
	cin >> classroom;
}

void Teacher::Write() {
	Human::Write();
	cout << "Class Name: " << className << endl;
	cout << "Classroom: " << classroom << endl;
}