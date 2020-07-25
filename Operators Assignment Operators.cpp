/**
                :  c++

   [PROG]	    : Assignment Operators

   [AUTHOR]		: Saddam Arbaa <saddamarbaas@gmail.com>  */

#include <iostream>
using namespace std;

int main()
{
    //A list of all assignment operators

    int num  = 21 ;   // declare variable name num and assign value 23
    int result;          // declare variable name result
    result = num;        // result = now 23
    cout << "line 1-   = operator ,value of result  = :" <<result<< endl;

    result += num;
    cout << "line 2-  += operator ,value of result  = :" <<result<< endl;

    result -= num;
    cout << "line 3-  -= operator ,value of result  = :" <<result<< endl;

    result *= num;
    cout << "line 4-  *= operator ,value of result  = :" <<result<< endl;

    result /= num;
    cout << "line 5-  /= operator ,value of result  = :" <<result<< endl;

    result = 200;       // result is now 200
    result %= num;      //%  Returns the division remainder

    cout << "line 6-  %= operator ,value of result  = :" <<result<< endl;

    result = 1;                 // result right now is 00000001
    result = result <<  3;       // Left shifting it by 3 will make it 00001000, ie, 8
    cout << "line 7-  <<= operator ,value of result  = :" <<result<< endl;

    result = result >> 2;       // Right shifting a by 2 will make it 00000010, ie, 2

    cout << "line 8-  >>= operator ,value of result  = :" <<result<< endl;

    result = 37;   //result right now is 37         00100101
    result &= 23; // result & with 23 which is      00010111
                  // new result value is 5 with     00000101

    cout << "line 10-  &= operator ,value of result  = :" <<result<< endl;

     result = 37;   //result right now  37         00100101
    result |= 23; // result | with 23 which is     00010111
                  // new result value is 55 with   00110111

    cout << "line 11-  |= operator ,value of result  = :" <<result<< endl;

    result = 37;   // 00100101. ~37 is then 11011010
    result = ~result;
    cout << "line 12-  ~= operator ,value of result  = :" <<result<< endl;

    result = 5;   //result right now is 5              00000101
    result ^= 3; // result ^ with 3 which is           00000011
                // result & 3 value first is           00000001
                //  final result is 6  is              00000110

    cout << "line 13-  ^= operator ,value of result  = :" <<result<< endl;

    return 0;
}
