#include "DataBase.h"
#include "Cat.h"
#include "Dog.h"
#include <iostream>
using namespace std;

void DataBase::Create(Animal::eType type) {
    Animal* obj = nullptr;
    switch (type)
    {
    case Animal::eType::CAT:
        obj = new Cat();
        break;
    case Animal::eType::DOG:
        obj = new Dog();
        break;
    }
    obj->Read();
    animals.push_back(obj);
}

void DataBase::Display(string name) {
    for (Animal* animal : animals) {
        if (animal->GetName() == name) {
            animal->Write();
        }
    }
}

void DataBase::DisplayAll() {
    for (Animal* animal : animals) {
        animal->Write();
    }
}

void DataBase::Display(Animal::eType type) {
    for (Animal* animal : animals) {
        if (animal->GetType() == type) {
            animal->Write();
        }
    }
}

DataBase::~DataBase() {
    for (Animal* animal : animals) {
        delete animal;
    }
}