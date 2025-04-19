#include "Cat.h"
#include <iostream>
using namespace std;

void Cat::Read() {
	Animal::Read();
	cout << "1)Meow, 2)Mew, 3)Mow, 4)Me-Ow~\nEnter Sound: ";
	unsigned short noise;
	cin >> noise;
	sound = static_cast<Cat::CatSound>(noise - 1);
}
string Cat::enumToString(Cat::CatSound noise) {
	switch (noise) {
	case Cat::CatSound::Meow: return "Meow";
	case Cat::CatSound::Mew: return "Mew";
	case Cat::CatSound::Mow: return "Mow";
	case Cat::CatSound::Meaow: return "Me-Ow~";
	default: return "UNKNOWN";
	}
}
void Cat::Write() {
	Animal::Write();
	cout << "\nSound: " << enumToString(sound) << endl;
}