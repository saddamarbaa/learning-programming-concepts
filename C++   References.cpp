
/**
    [PROGRAM] :  C++ References
    [AUTHOR]  :  Saddam Arbaa
    [Email]   :  <saddamarbaas@gmail.com>

    C++ References
    A reference variable is a "reference" to an existing variable,
    we can created with the & operator: */

#include <iostream>
using namespace std;

// the main Function
int main()
{
    // variables declarations

    int    i;  /* simple int variable declaration */
    double d;  /* simple double variable declaration */
    float  f;  /* simple float variable declaration */
    char   c;  /* simple char variable declaration */
    string s;  /* simple string variable declaration */

    // Reference variable declarations

    int &  refi = i;     /* reference variable declaration this reference to i */
    double & refd = d;   /* reference variable declaration this reference to d */
    float  & reff = f;   /* reference variable declaration this reference to f  */
    string & refs = s;   /* reference variable declaration this reference to s */
    char  & refc = c;   /* reference variable declaration this reference to c  */

    // variable initializations
    i = 12;
    f = 3.4;
    d = 12.5;
    s = "thank";
    c = 'A';

   // printing values from variable
   cout << " Value of i       : " << i << endl;
   cout << " Value of d       : " << d << endl;
   cout << " Value of f       : " << f << endl;
   cout << " Value of s       : " << s << endl;
   cout << " Value of c       : " << f << endl;

   // printing values from reference
   cout << " Value of i reference  :  " << refi  << endl;
   cout << " Value of d reference  :  " << refd  << endl;
   cout << " Value of f reference  :  " << reff  << endl;
   cout << " Value of s reference  :  " << refs  << endl;
   cout << " Value of c reference  :  " << refc  << endl;

    return 0;// signal to operating system everything works fine

}/** End of main function */
