
/*
   [AUTHOR] : Saddam Arbaa

   [Email] : <saddamarbaas@gmail.com>

The C++ switch statement executes one statement from multiple conditions.
It is like if-else-if ladder statement in C++.
Syntax
switch(expression)
{
case value1:
 //code to be executed;
 break;
case value2:
 //code to be executed;
 break;
......

default:
 //code to be executed if all cases are not matched;
 break;
}
  The example below uses the weekday number to calculate the weekday name:
*/

#include <iostream>
using namespace std;

int main()
{
  int day = 4;

  switch (day)
{
  case 1:
    cout << "Monday";
    break;
    /* The break Keyword
     When C++ reaches a break keyword,
     it breaks out of the switch block.
     This will stop the execution of more
     code and case testing inside the block.
     When a match is found, and the job is done,
    it's time for a break. There is no need for more testing.*/

  case 2:
    cout << "Tuesday";
    break;

  case 3:
    cout << "Wednesday";
    break;

  case 4:
    cout << "Thursday";
    break;

  case 5:
    cout << "Friday";
    break;

  case 6:
    cout << "Saturday";
    break;

  case 7:
    cout << "Sunday";
    break;

    /*
      The default keyword specifies some code
      to run if there is no case match:
      also Note that : The default keyword must
      be used as the last statement in the switch,
     and it does not need a break.*/

    default:
      cout << "Looking forward to the Weekend";
    // Outputs "Thursday" (day 4)
}

  return 0;
}



