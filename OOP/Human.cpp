#include "Human.h"
#include <iostream>
using namespace std;

int Human::count = 0;
const float Human::tax = 0.0825f;

void Human::SetAge(unsigned short age) {
	this->age = age;
}
