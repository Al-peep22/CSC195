#include "Point.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <istream>

#define NAME "Alison"
//#define XBOX
#define PI 3.1415f
//#define _DEBUG
//using namespace std;

using names_t = std::vector<std::string>;
namespace math {
    template<typename T1,typename T2>
    T1 max(T1 a, T2 b) {
        return (a > b) ? a : b;

           /* if (a > b) {
                return a;
            }
            else {
                return b;
            }*/
    }
}

void print(names_t names) {
    names[0] = "kevin";
    for (std::string name : names) {
        std::cout << name << std::endl;
    }
}

void StreamOut(std::ostream& ostream, std::string text) {
    ostream << text << std::endl;
}

void StreamIn(std::istream& istream, std::string text) {
    istream >> text;
}
int main(){

#ifdef _DEBUG
    std::cout << "program start\n";
#endif


    StreamOut(std::cout, NAME);
    std::ofstream fstream("text.txt");
    StreamOut(fstream,"Hello!");
    fstream.close();

    std::string text;
    StreamIn(std::cin, text);
    std::cout << text << std::endl;

    math::ipoint_t p1(23, 34);
    math::ipoint_t p2(12, 10);
    math::ipoint_t p3;
    p3 = p1.Add(p2);
    p3 = p1 + p2;
    p3 = p1 - p2;

    //std::cout << p1.Add(p2) << std::endl;
    std::cout << p3.GetX() << " " << p3.GetY() << std::endl;



    /*std::cout << std::max(5, 10) << std::endl;
    std::cout << math::max<float>(6.0f, 10.0f) << std::endl;

    names_t names{ "Bob","Dude","Why" };
    print(names);*/
}