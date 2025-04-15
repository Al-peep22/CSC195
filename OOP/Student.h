#pragma once
#include <iostream>
#include "Human.h"
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

private:
	float gpa = 4.0f;
};