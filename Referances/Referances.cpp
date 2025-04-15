#include <iostream>
using namespace std;

void Swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int i1 = 5;
    int i2 = 20;
    int* p1 = &i1; //for as long as decieded
    p1 = nullptr;
    
    int& r1 = i1; //joined forever
    r1 = 10;

    //int v = 5;
    //if (v) cout << "true" << endl;

    cout << "i1: " << i1 << " i2: " << i2 << endl;
    Swap(&i1, &i2);
    cout << "i1: " << i1 << " i2: " << i2 << endl;
    Swap(i1,i2);
    cout << "i1: " << i1 << " i2: " << i2 << endl;

    cout << i1 << endl;
    //cout << &r1 << endl;
    //cout << &i1 << endl;

    for (int i = 0; i < 1000; i++) {
        //cout << p1++ << endl;
        //cout << *p1++ << endl; ERROR
    }
}