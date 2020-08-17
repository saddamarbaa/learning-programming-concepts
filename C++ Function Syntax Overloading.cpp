/**
    [PROGRAM] : C++ Function Overloading 
    [AUTHOR]  :  Saddam Arbaa
    [Email]   :  <saddamarbaas@gmail.com>

    With function overloading, multiple functions can have
    the same name with different parameters:*/

#include <iostream>
using namespace std;

// function with 2 parameters
void print(char c, string cc)
{
    cout << "char value    is : " <<c << endl;
    cout << "string value  is :  " << cc << endl;
}

// function with 2 parameters
void print(int num1, double num2)
{
    cout << "Integer number  is : " << num1 << endl;
    cout << "double number   is :  " << num2 << endl;
}

// function with double type single parameter
void print(double num)
{
    cout << "Double number is : " << num << endl;
}

// function with int type single parameter
void print(int num)
{
    cout << "Integer number is : " << num << endl;
}
// function with char type single parameter
void print(char c)
{
    cout << "char value is  : " <<c << endl;
}

// function with string type single parameter
void print(string cc)
{
    cout << "string value is :  " << cc << endl;
}

// the main Function
int main()
{
    // local variable declaration:
    int   x = 23;
    double y = 12.3;
    char c = 'a';
    string cc = "yes";

    // call function with 2 parameters
    print(c, cc);

    // call function with int type parameter
    print(x);

    // call function with double type parameter
    print(y);

    // call function with char type parameter
    print('a');

    // call function with string type parameter
    print("thank for help");

    // call function with 2 parameters
    print(x, y);

    return 0;// signal to operating system everything works fine

}/** End of main function */
