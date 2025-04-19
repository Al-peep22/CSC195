#pragma once
#include "Animal.h"

class Dog : public Animal{
public:
	enum class DogSound {
		Woof, 
		Arf, 
		Bark, 
		BowWow
	};

	string enumToString(Dog::DogSound noise);
	void Read();
	void Write();
	eType GetType() override { return eType::DOG; };
private:
	DogSound sound;
};
