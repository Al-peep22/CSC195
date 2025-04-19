#pragma once
#include <iostream>
#include "Human.h"
using namespace std;

class Teacher : public Human {
public:
	Teacher() {}
	Teacher(string name, age_t age, string className, age_t classroom) :
		Human{ name, age },
		className{ className },
		classroom{ classroom }
	{}
	void SetClassName(string name) { className = name; }
	void SetClassRoom(age_t number) { 
		if (number < 300 || number > 400) return;
			classroom = number;
	}
	Type GetType() override { return Type::TEACHER; }
	string GetClassName() { return className; }
	age_t GetClassroom() { return classroom; }
	void Work() override { cout << "Teacher Working!\n" << endl; }
	void Read();
	void Write();
private:
	string className;
	age_t classroom;
};