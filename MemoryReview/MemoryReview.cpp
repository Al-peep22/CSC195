#include <iostream>
using namespace std;
struct Person
{
	char name[32];
	int id;
};

void Square(int *num) {
	*num = *num * *num;
}

void Double(int* point) {
	*point = *point * 2;
}

int main()
{
	// ** REFERENCE **
	//
	// declare an int variable and set the value to some number (less than 10)
	int num = 5;
	// declare a int reference and set it to the int variable above
	int *numP = &num;
	// output the int variable
	cout << num << endl;
	cout << *numP << endl;
	// set the int reference to some number
	*numP = 2;
	// output the int variable
	cout << num << endl;
	// what happened to the int variable when the reference was changed? (It made the referance varible have the ability to change the value of the original varible)
	// output the address of the int variable
	cout << &num << endl;
	// output the address of the int reference
	cout << &numP << endl;
	// are the addresses the same or different? (They are both differant)
	// 
	// 
	// 
	// 
	// 
	// ** REFERENCE PARAMETER **
	//
	// create a function above main() called Square that takes in an int
	//parameter
	// in the function, multiply the int parameter by itself and assign it back
	//to the parameter(i = i * i)
	// call the Square function with the int variable created in the REFERENCE
	//section
	// 
	Square(numP);
	// 
	// output the int variable to the console
	cout << num << endl;
	// !! notice how the variable has not changed, this is because we only passed
	//the value to the function !!
	// change the Square function to take a int reference
	// !! notice how the calling variable has now changed, this is because we
	//'passed by reference' !!
	// !! when a function takes a reference parameter, any changes to the
	//parameter changes the calling variable ""
	// 
	// 
	// 
	// 
	// ** POINTER VARIABLE **
	//
	// declare an int pointer, set it to nullptr (it points to nothing)
	int* p = nullptr;
	// set the int pointer to the address of the int variable created in the
	//REFERENCE section
	p = &num;
	// output the value of the pointer
	cout << p << endl;
	// what is this address that the pointer is pointing to? (it is pointed to the original address of the first varible created)
	// output the value of the object the pointer is pointing to (dereference the
	//pointer)
	cout << &p << endl;
	// 
	// 
	// 
	// 
	// ** POINTER PARAMETER **
	//
	// create a function above main() called Double that takes in an int pointer
	//parameter
	// in the function, multiply the int pointer parameter by 2 and assign it
	//back to the parameter(i = i * 2)
	// !! make sure to dereference the pointer to set the value and not set the
	//address !!
	// call the Double function with the pointer created in the POINTER VARIABLE
	//section
	Double(p);
	// output the dereference pointer
	cout << *p << endl;
	// output the int variable created in the REFERENCE section
	cout << num << endl;
	// did the int variable's value change when using the pointer? ()
}
