#pragma once
#include <iostream>
using namespace std;
using unNum = unsigned short;

class Animal {
public:
	enum class eType {
		CAT,
		DOG,
		BIRD
	};
	virtual void Read();
	virtual void Write();
	string GetName();
	unNum GetAge();
	virtual eType GetType() = 0;
private:
	string name = "";
	unNum age = 0;
};
