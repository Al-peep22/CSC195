#include "Dog.h"
#include <iostream>
using namespace std;

void Dog::Read() {
	Animal::Read();
	cout << "1)Woof, 2)Arf, 3)Bark, 4)Bow-Wow\nEnter Sound: ";
	unsigned short noise;
	cin >> noise;
	sound = static_cast<Dog::DogSound>(noise - 1);
}
string Dog::enumToString(Dog::DogSound noise) {
	switch (noise) {
	case Dog::DogSound::Woof: return "Woof";
	case Dog::DogSound::Arf: return "Arf";
	case Dog::DogSound::Bark: return "Bark";
	case Dog::DogSound::BowWow: return "Bow - Wow";
	default: return "UNKNOWN";
	}
}
void Dog::Write() {
	Animal::Write();
	cout << "\nSound: " << enumToString(sound) << endl;
}