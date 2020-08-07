/**
   [AUTHOR]: Saddam Arbaa
   [Email] : <saddamarbaas@gmail.com>

   Enumeration Example Exercises in C++
   write c++ program to declare EDT and display
   the different between month
*/

#include <iostream>

using namespace std;

// define enum
enum month{ January =   31,
            February =  28,
             March   =  31,
             April  =    30,
             May  =      31 ,
            June =      30 ,
            July =       31,
            August =    31,
            September =   30,
            October =     31,
            November  =   30,
            December =     31
            };

// the  Driver Code
int main()
{
    // display the different between month
    cout << "the different between January and February is = " << January - February<< " days"<< endl;
    cout << "the different between March and April is = " << March - April << " day"<< endl;
    cout << "the different between May and June is = " << May - June << endl;
    cout << "the different between July and August is = " << July - August << endl;
    cout << "the different between September and October is = " << September - October << endl;
    cout << "the different between  November and December is = " <<  November - August << endl;

    return 0;// signal to operating system everything works fine

}/** End of main function */
