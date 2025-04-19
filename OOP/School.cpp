#include "School.h"
#include "Student.h"
#include "Teacher.h"

School::~School(){
	for (Human* human : humans) {
		delete human;
	}
	humans.clear();
}

void School::Add(Human::Type type){

	Human* human = nullptr;

	switch (type){
	case Human::Type::STUDENT:
		human = new Student;
		break;
	case Human::Type::TEACHER:
		human = new Teacher;
		break;
	default:
		break;
	}

	human->Read();
	humans.push_back(human);
}

void School::DisplayAll(){
	
	for (Human* human : humans) {
		human->Write();
	}

}
