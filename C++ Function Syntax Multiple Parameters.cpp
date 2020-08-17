/**
    [PROGRAM] : C++ Multiple Parameters
    [AUTHOR]  :  Saddam Arbaa
    [Email]   :  <saddamarbaas@gmail.com>

     Example of Multiple Parameters  functions */

#include <iostream>
using namespace std;

// Function declaration
void myFunction(string name, int age);

// the main Function
int main()
{
    // call the function 5 times
    myFunction("Jhon", 23);
    myFunction("Liam", 54);
    myFunction("Adam", 12);
    myFunction("Ali",  30);
    myFunction("Mr Bob", 11);
    // out put will be as blow

    /*
    Hello dear : Jhon you are 23 years old
    Hello dear : Liam you are 54 years old
    Hello dear : Adam you are 12 years old
    Hello dear : Ali you are 30 years old
    Hello dear : Mr Bob you are 11 years old */

     return 0;// signal to operating system everything works fine

}/** End of main function */


// void Function definition with 2 Parameters
void myFunction(string name, int age)
{
    cout << "Hello dear : " << name << " you are " << age << " years old" << endl;
}
