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
	{
	}
private:
	string className;
	age_t classroom;
};