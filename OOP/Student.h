#pragma once
#include <iostream>
#include "Human.h"
//#include "Student.cpp"
using namespace std;

class Student : public Human{
public:
	Student() {
		cout << "student constructor\n";
	}
	Student(string name, unsigned short age, float gpa) : Human{ name, age }, gpa{ gpa }{
		name = name;
		age = age;
		gpa = gpa;
		cout << "student constructor\n";
	}
	Type GetType() override { return Type::STUDENT; }
	float GetGPA() { return gpa; }
	void Work() override { cout << "Student Working!\n" << endl; }

	void Read();
	void Write();

private:
	float gpa = 4.0f;
};