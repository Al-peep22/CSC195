#pragma once
#include "Human.h"
#include <vector>

class School {
public:
	~School();

	void Add(Human::Type type);
	
	void DisplayAll();
	void DisplayByType();
	void DisplayByName();

private:
	vector<Human*> humans;
};