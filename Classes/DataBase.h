#include <iostream>
#include <vector>
#include "Animal.h"

class DataBase {
public:
    ~DataBase();
    void Create(Animal::eType type);
    void DisplayAll();
    void Display(string name);
    void Display(Animal::eType type);
private:
    vector<Animal*> animals;
};
