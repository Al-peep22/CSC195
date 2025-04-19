#pragma once
#include <iostream>;
using namespace std;
using age_t = unsigned short;

class Human {
public:
    enum class Type{
        STUDENT,
        TEACHER
    };

    
public:
    Human() {
        cout << "human constructor\n";
        count++;
    }
    Human(string name, age_t age) : name{ name }, age{ age } {
        //this->name = name;
        //this->age = age;
        cout << "human constructor\n";
        //image = new unsigned char[435];
        count++;
    }
    ~Human() {
        cout << "human destructor\n";
        count--;
    }

    virtual void Read();
    virtual void Write();

    string GetName() { return name; }
    age_t GetAge() { return age; }
    void SetAge(age_t age);
    virtual Type  GetType() { return Type::STUDENT; } 

    //virtual void Work() { cout << "Human Working!\n" << endl; }
    virtual void Work() = 0;

    static int GetCount() { return count; }
protected:
    string name;
    age_t age = 0;
    //unsigned char* image;

    static int count;
    static const float tax;
    
};