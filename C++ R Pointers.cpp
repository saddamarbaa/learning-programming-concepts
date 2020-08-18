
 
/**
    [PROGRAM] :  C++ Pointers
    [AUTHOR]  :  Saddam Arbaa
    [Email]   :  <saddamarbaas@gmail.com>

     program to illustrate Pointers in C++
     Pointers is a variable that stores the memory address as its value.
     so we can say that A pointer is a variable whose value is the
     address of another variable.
     Pointers can be created with the * operator.
     Syntax
     type *var-name;     */


#include <iostream>

using namespace std;

// the main Function
int main()
{
    // A num variable of type int
    int num = 23;

     //  A pointer variable, with the name ptrn,
    //  that stores the address of num
    int * ptrn = &num;

    // Output the value of num (23)
    cout << num << "\n";

    // Output the memory address of num (0x79fdcc)
    cout << &num << "\n";

    // Access the memory address of num and output its value (23)
    cout << *ptrn << "\n";

    // (Dereference) Change the value of the pointer
    *ptrn = 3;

    // Output the new value of the pointer (3)
    cout << *ptrn << "\n";

     // A food variable of type string
    string food = "fish";

    // A pointer variable, with the name ptr,
    //  that stores the address of food
    string * ptr = &food;

    // Output the value of food (fish)
    cout << food << "\n";

    // Output the memory address of food (0x6dfed4)
    cout << &food << "\n";

    // Access the memory address of food and output its value (fish)
    cout << *ptr << "\n";

    // (Dereference) Change the value of the pointer
    *ptr = "Pizza";

    // Output the new value of the pointer (Pizza)
    cout << *ptr << "\n";


    // A dnum variable of type double
    double dnum = 99.9;

    // A pointer variable, with the name ptrd,
    //  that stores the address of dnum
    double * ptrd = &dnum;

    // Output the value of dnum (99.9)
    cout << dnum << "\n";

    // Output the memory address of dnum (0x79fdc0)
    cout << &num << "\n";

    // Access the memory address of dnum and output its value (99.9)
    cout << *ptrd << "\n";

    // (Dereference) Change the value of the pointer
    *ptrd = 299.9;

    // Output the new value of the pointer (299.9)
    cout << *ptrd << "\n";

    return 0;// signal to operating system everything works fine

}/** End of main function */
