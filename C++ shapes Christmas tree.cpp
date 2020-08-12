/**
[AUTHOR]: Saddam Arbaa
[Email] : <saddamarbaas@gmail.com>

C++  Loop Example to Draw  Christmas Tree like the one blow

        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
    |---|
    |---|

number of row will entered by user (user entered 5)
the idea is to draw Pyramid first then half of Pyramid
and add last one
so have be i 3 steps

*/

#include <iostream>

using namespace std;

int main()
{
    int rows; //variable for row
    // asking user input to enter  number of rows
    cout << "Enter number of rows :";
    cin >> rows;

    // (1) draw Pyramid

    // outer loop need 3 nested loop
    for(int i = 1; i <= rows; i++)
    {
        // first inner loop
        for(int k = 1; k <= rows - i; k++)
        {
           cout << "  " ; // print spaces
        }

       // second inner loop
        for(int j = 1; j <= (2 * i - 1 ) ; j++)
        {
          cout << "* " ; // print stars *
        }

         cout << endl; // new line after each inner loop
    }

   /*
     step (2) draw half of Pyramid using the same Pyramid
     logic only changes the condition to be half so that loop
     will start drawing when reach half of row number which will
     entered by user.
      for(int i = rows /2 + 1 ; i <= rows; i++)
   */

    // outer loop need 3 nested loop
    for(int i = rows /2 +1 ; i <= rows; i++) // this only chances in code (int i = rows /2 +1 )
    {
        // first inner loop
        for(int k = 1; k <= rows - i; k++)
        {
           cout << "  " ; // print spaces
        }

      // second inner loop
        for(int j = 1; j <= (2 * i - 1 ) ; j++)
        {
          cout << "* " ; // print stars *
        }

         cout << endl; // new line after each inner loop
    }

    // step 3 draw the las 2 line
    for (int i = 0; i < rows - 2; i++)
    {
       cout <<" "; // print spaces
    }
     cout <<" |---| \n"; // this after the for loop done

    // repate step 3 draw the las 2 line
    for (int i = 0; i < rows - 2; i++)
    {
       cout <<" "; // print spaces
    }
     cout <<" |---| \n"; // this after the for loop done


     return 0;// signal to operating system everything works fine

}/** End of main function  */
