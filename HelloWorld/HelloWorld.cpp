//#include "student.h"
#include <iostream>
#include "Alumni.h"
#include <string>
using namespace std;


 /*{
    std::cout << "hello\n";
}*/

using namespace std;

struct Person{
    public:
        float weight;
        int age;


        void f() {}
};

int main() {

    f();

    Student student;
    student.SetName("BOB");
    student.Write();

    Person person; 
    person.age = 19; 

    //int i = 23; 
    unsigned int i = 82;
    //printf("%d\n", i); 
    std::cout << i << std::endl;
    std::cout << sizeof(char) << std::endl;
    std::cout << sizeof(Person) << std::endl;


    cout << i++ << endl;

    char c = 'A';
    cout << &i << endl;

    cout << "Hello, World!" << endl;
    cout << "Git is now tracking this project!" << endl;
    return 0;
}

