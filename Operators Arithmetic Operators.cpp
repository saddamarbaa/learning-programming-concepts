
/**
                : Arithmetic Operators in C++

   [PROG]	    : program for Arithmetic Operators in C++

   [AUTHOR]		: Saddam Arbaa <saddamarbaas@gmail.com>  */

#include <iostream>

using namespace std;

int main()
{
  // declare variable num1 and assign value 21
   int num1 = 21;

   // declare variable num1 and assign value 21
   int num2 = 10;

   // declare variable name result
   int result;

   //Adds together num1 and num 2 and assign the result in result variable
   result = num1 + num2;
   cout << "num1 + num2 is :  " << result << endl ;

   //Subtract num2 from num 1 and assign the result in result variable
   result = num1 - num2;
   cout << "num1 - num2 is :  " << result << endl ;

  //Multiplies num1 to num2 and assign the result in result variable
   result = num1 * num2;
   cout << "num1 * num2 is :  " << result << endl ;

   //Divides num1 by num2 and assign the result in result variable
   result = num1 / num2;
   cout << "num1 / num2 is :  " << result << endl ;

   //Returns the division remainder of num1 and num2 and assign the result in result variable
   result = num1 % num2;
   cout << "num1 % num2 is :  " << result << endl ;

    //Increases the value of num1 by 1 and assign the result in result variable
   result = ++num1;
   cout << "++num1 is   :  " << result << endl ;

   //Decrement the value of num1 by 1 and assign the result in result variable
   result = --num1;
   cout << "--num1 is   :  " << result << endl ;

   return 0;
}
