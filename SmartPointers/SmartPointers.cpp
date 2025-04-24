#include <iostream>
#include <memory>
using namespace std;

int g = 10;

template<typename T>
struct smart_ptr {
    //smart_ptr() = default; Always use first
    smart_ptr() = delete; // No one use default constructor
    //smart_ptr(int* p) : p{ p } {}
    smart_ptr(T* p){
        this->p = p;
    }
    ~smart_ptr() {
        delete p;
        cout << "deleted\n" << endl;
    }

    T Dereference()   { return *p; }
    //T operator + () { return *p; }
    T& operator * ()   { return *p; }
    T* operator & ()  { return p; }

    T* p = nullptr;
};
int main()
{
    g = 23;
    int i = 5;
    int* p = &i;
    //delete p;
    {
        smart_ptr<int> sptr{ new int(10)};
        *sptr = 20;
        //int* ptr = new int(10);
        //delete ptr;
        cout << "Regular Value: " << * sptr.p << endl;
        cout << "Smart Value: " << * sptr << endl;
        cout << "Regular Adress: " <<sptr.p << endl;
        cout << "Smart Adress: " << & sptr << endl;
        //cout << sptr.Dereference() << endl;
        //cout << +sptr << endl;

        //point1(10,10);
        //point2(10,10);
        //point3 = add (point1,point2);

        smart_ptr<float> sptr1{ new float(23.5) };
    }

    unique_ptr<int> uptr = make_unique<int>(23);
    cout << uptr << endl;

    //unique_ptr<int> uptr2 = uptr;
    shared_ptr<int> sharedptr = make_shared<int>(34);
    cout << sharedptr.use_count() << endl;
    {
        shared_ptr<int> sharedptr2 = sharedptr;
        cout << sharedptr2.use_count() << endl;
    }
    shared_ptr<int> sharedptr3 = sharedptr;
    cout << sharedptr3.use_count() << endl;
}