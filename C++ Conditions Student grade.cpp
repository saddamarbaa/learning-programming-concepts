
/*
       C++ Conditions

   [AUTHOR]: Saddam Arbaa
   [Email] : <saddamarbaas@gmail.com>

  Program To Find Grade using control statement
*/

#include<iostream>

using namespace std;

int main()

{
    // variable for marks
    int marks;

    // asking student to input his grade
    cout <<"Program To Find Grade\n";
    cout <<"Enter Marks: ";
    cin  >> marks;

    // check all the codition
    if(marks >= 90 && marks <= 100)
        cout<<"Your Grade is A+ .";

    else if(marks >= 80 && marks < 90)
        cout << " Your Grade is A.";

    else if(marks >= 70 && marks < 80)
        cout << "Your Grade is B.";

    else if(marks >= 60 && marks< 70)
    cout<<"Your Grade is C.";

    else if(marks >= 50 && marks <60)
        cout<<"Your Grade is D.";

   else if(marks >= 0 && marks < 50)
        cout<<"Your Grade is F.";

   else
    cout<<"Invalid input.";
   return 0;
 }
