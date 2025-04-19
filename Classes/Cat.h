#pragma once
#include "Animal.h"

class Cat : public Animal {
public:
	enum class CatSound {
		Meow,
		Mew,
		Mow,
		Meaow
	};

	string enumToString(Cat::CatSound noise);
	void Read();
	void Write();
	eType GetType() override { return eType::CAT; };
private:
	CatSound sound;
};