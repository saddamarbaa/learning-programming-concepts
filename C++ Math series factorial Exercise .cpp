/**

   [AUTHOR] :  Saddam Arbaa
   [Email]  :  <saddamarbaas@gmail.com>

   write program to calculate the flowing  math series
    y = 1 + 1/1! + 1/2! + 1/3! + 1/4!+ .........1/N!
   and N will be entered by user */

#include <iostream>
using namespace std;

// the  Driver Code
int main()
{
    int i, j, N ;
    float factorial,y ;

    /*read value of N*/
    cout << "Enter the value of N: ";
    cin >> N;

    /*calculate  the series*/
    for(i = 1; i < N; i++)
    {
       /*set factorial by 1*/
        factorial = 1.0;

         for(j = 1; j < i; j++)
         {
             // calculate factorial
              factorial = factorial * j;
         } /** End of inner loop*/

    }/** End of outer loop*/

    // calculate y value
   y = 1.0 + 1.0/ factorial;

    /*print the reult*/
     cout << "Result of the series is: " << float (y) << endl;

     return 0;// signal to operating system everything works fine

}/** End of main function  */
