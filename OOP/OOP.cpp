#include <iostream>
using namespace std;
#include "Student.h"
#include "Teacher.h"
#include <vector>
#include "School.h"



int main() {

    //cout << sizeof(Human) << endl;   // 48 bytes
    //cout << sizeof(Student) << endl; // 56 bytes
    //cout << sizeof(Teacher) << endl; // 96 bytes

    //

    //vector<Human*> school;

    //Student* student = new Student;
    //student->Read();
    ////dynamic_cast<Student*>(student)->SetAge(19);
    //school.push_back(new Student{"Carlos",19,4.0f});
    //school.push_back(new Teacher{"Omkar",24,"C++",207});
    //Teacher* teacher = new Teacher;
    //teacher->Read();

    //for (int i = 0; i < school.size(); i++) {
    //    /*if (school[i]->GetType() == Human::Type::STUDENT){
    //        cout << (dynamic_cast<Student*>(school[i]))->GetAge() << endl;
    //    }*/
    //    if (dynamic_cast<Student*>(school[i])) {
    //        cout << (dynamic_cast<Student*>(school[i]))->GetAge() << endl;
    //    }
    //    if (dynamic_cast<Teacher*>(school[i])) {
    //        cout << (dynamic_cast<Teacher*>(school[i]))->GetClassName() << endl;
    //    }
    //    school[i]->Work();
    //    school[i]->Write();
    //    cout << school[i]->GetName() << endl;
    //}

    ////Student* student1 = new Student{"Bob",48,3.4f};

    //////Student student1("Bob",48,3.4f);
    //////func();
    //////Human human2;    
    //////Human human3;   
    ////cout << Human::GetCount() << endl;
    ////cout << student1->GetAge() << endl;
    ////cout << static_cast<int>(student1->GetType()) << endl;

    //delete student;
    ////delete student1;
    //delete teacher;

    School school;

    bool quit = false;
    while (!quit) {

        cout << "1) Add Human\n";
        cout << "2) Display All Humans\n";
        cout << "3) Display Human of Type\n";
        cout << "4) Quit\n";

        unsigned short selection;
        cin >> selection;

        switch (selection)
        {
        case 1:
            cout << "1) Student\n";
            cout << "2) Teacher\n";

            unsigned short type;
            cin >> type;

            school.Add(static_cast<Human::Type>(type-1));
            break;
        case 2:
            system("cls");
            school.DisplayAll();
            break;
        case 3:
            type = 3;
            break;
        case 4:
            quit = true;
            break;
        default:
            break;
        }

    
   
    }
}