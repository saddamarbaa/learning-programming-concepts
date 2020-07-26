
/**
     [PROG]	    :  C++ Program that take User Input
     [AUTHOR]   : Saddam Arbaa
     [Email]    : <saddamarbaas@gmail.com>

    C++ program to Calculate the area of  circle  */

#include <iostream>

using namespace std;

int main()
{
    int radius;
    float area;
    const float  PI = 3.14;

    // asking user to enter Radius
    cout<< "Enter the Radius :" ;
    cin >> radius;

    // calculating the area
    area = PI * radius * radius;

    /*
      also can be written like this
      area = PI * pow(radius ,2);
      if so we will need call cmath header file
    */

    // printing the area
    cout << "the area of the circle is : " << area <<endl;
    return 0;
}
