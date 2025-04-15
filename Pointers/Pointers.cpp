// Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void func1() {
    bool b = true;
    int i = 5;
}

void func2() {
    bool b = false;
    float f = 10;

    func1(); //NEW
}

void func3() {
    int i[100000];

    //func3();
}

class Animal {
public:
    Animal(string name) {
        this->name = name;
    }
    string getName() {
        return this->name;
    }
private:
    string name;
};

void SetValue(int* v) {
    *v = 5;
}

void Swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int i = 5;
    float f = 4.5f;

    //func2();
    //func3();

    {
        int* pointer = new int(5);
        //int *pointer = new int(5);
        //int * pointer = new int(5);
        // * is address of whatever it is defined with
        cout << *pointer << endl;
        delete pointer;
    }

    Animal* dog = new Animal("Dog");
    cout << dog->getName() << endl;
    cout << (*dog).getName() << endl;
    delete dog;
    dog = nullptr;
    //null check
    if (dog) {
        cout << dog->getName() << endl;
    }

    int* block = (int*)malloc(sizeof(int)*1000);//4k
    block[0] = 3;
    block[1] = 4;
    block[2] = 5;
    block[3] = 6;

    block++;
    cout << *(block + 2) << endl;
    free(--block);

    //
    int v1 = 10;
    int v2 = 20;
    int* p = nullptr;
    cout << p << endl;
    p = &v1; // v1 adress
    *p = 5; //change adress value
    cout << p << endl;
    cout << v1 << endl;

    p = &v2;
    *p = 42;
    cout << v2 << endl;
    cout << v2 << endl;
    //SetValue(&v2);
    // v1 = 5, v2 = 42
    cout << v1 << " " << v2 << endl;
    Swap(&v1, &v2);
    cout << v1 << " " << v2 << endl;

    
}

