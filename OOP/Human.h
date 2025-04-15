#pragma once
#include <iostream>;
using namespace std;
using age_t = unsigned short;

class Human {
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
    string GetName() { return name; }
    age_t GetAge() { return age; }
    void SetAge(age_t age);
    static int GetCount() { return count; }
protected:
    string name;
    age_t age = 0;
    //unsigned char* image;
    static int count;
    static const float tax;
    
};

void Func() {
    cout << "funky\n" << endl;
}