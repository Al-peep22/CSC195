#include <iostream>
#include <vector>
#include "Animal.h"
#include "DataBase.h"
#include <string>
using unNum = unsigned short;
using namespace std;

int main(){
    DataBase database;
    bool quit = false;
    while (!quit)
    {
        string name;
        std::cout << "1 - Create\n2 - Display All\n3 - Display by Name\n4 - Display by Type\n5 - Quit\n";
        int choice;
        std::cin >> choice;
        //if (std::cin.fail()) {  // Detect invalid input
        //    std::cin.clear();    // Clear error flag
        //    std::cin.ignore(1000, '\n'); // Ignore invalid input
        //    std::cout << "Invalid input! Please enter a number.\n";
        //    continue;  // Restart loop
        //}
        switch (choice)
        {
        case 1: // Create object by type break; 
            std::cout << "Enter type (0 for Cat, 1 for Dog): ";
            unNum t;
            std::cin >> t;
            if (t > 1) { // Assuming only 0 (Cat) and 1 (Dog) are valid
                std::cout << "Invalid type! Please enter 0 for Cat or 1 for Dog." << std::endl;
                continue; // Restart loop
            }
            else {
            database.Create(static_cast<Animal::eType>(t));
            }
            break;
        case 2: // DisplayAll(); break; 
            database.DisplayAll();
            break;
        case 3: // Ask for name, then call database.Display(name) break; 
            cout << "Enter Name: " << endl;
            cin >> name;
            database.Display(name);
            break;
        case 4:
        {
            std::cout << "Enter type (0 for Cat, 1 for Dog): ";
            unNum t;
            std::cin >> t;
            if (t > 1) { // Assuming only 0 (Cat) and 1 (Dog) are valid
                std::cout << "Invalid type! Please enter 0 for Cat or 1 for Dog." << std::endl;
                continue; // Restart loop
            }
            else {
            database.Display(static_cast<Animal::eType>(t));
            }
            break;
        }
        case 5:
            quit = true;
            break;
        }
    }
    return 0;
}
