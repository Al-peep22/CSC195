#pragma once
#include <iostream>
void f();
class Student {
public:
	Student() {}
	Student(std::string name) { this->m_name = name; }
	void Write();
	std::string Getname() {return m_name;}
	void SetName(std::string name) { m_name = name; }
private:
	std::string m_name;	
};


