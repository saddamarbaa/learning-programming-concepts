
/**
   [AUTHOR]: Saddam Arbaa
   [Email] : <saddamarbaas@gmail.com>

    C++  Loop Example to Draw  Chess Board  table like blow

******     ******     ******     ******
******     ******     ******     ******
******     ******     ******     ******
     ******     ******     ******
     ******     ******     ******
     ******     ******     ******
******     ******     ******     ******
******     ******     ******     ******
******     ******     ******     ******
     ******     ******     ******
     ******     ******     ******
     ******     ******     ******
******     ******     ******     ******
******     ******     ******     ******
******     ******     ******     ******
     ******     ******     ******
     ******     ******     ******
     ******     ******     ******
******     ******     ******     ******
******     ******     ******     ******
******     ******     ******     ******

i break this to 3 functions  */


#include <iostream>
using namespace std;

void print_chess_table();// function to print Chess Board table

void print_Line(int w ,bool flag); //helper function to print line

void print_Square(int w ,bool flag); //helper function to print square

// the  Driver Code
int main()
{
    /*
      to draw this Chess Board problem I break the problem
      down into to small sub problems in different function
      each function solve for me small problem then i join
      them to fix the bigger problem
    */

    // call function to print Chess Board table
    print_chess_table();

    //print_Line(5, false);
    //print_Square(5 ,false);
    //print_Square(5 ,true);
    //print_Square(5 ,false);
    //print_Square(5 ,true);
    //print_Square(5 ,false);

    return 0;// signal to operating system everything works fine

}/** End of main function  */


/**
  function to draw line the idea is to draw the line blow
  ii consider all as one line

  ******     ******     ******

  printline(w ,bool flag)
  {

   for i 0 to w
    do
    if flag = false
    cout << "******";
    flag = true
    else
    cout << "     ";
    flag = false
*/

void print_Line(int w, bool flag)
{

    for(int i = 0; i < w; i++)
    {
        /*
         if flag = false then cout << "******";
         and make flag = true so next time not print this */

        if(flag == false)
        {
            cout << "******";
             flag = true;
        }
        else
        {
         /*
         if flag = true then cout << "     "; and make flag
          back to true flag = true so next time not print this */

           cout << "     ";

           flag = false;
        }
    }
    
} /** End of  print_Line() */



/**
  function to draw square
  the idea is to draw square like blow


  ******     ******     ******
  ******     ******     ******
  ******     ******     ******

  the square is just number rows  for that i need call printline()
  function to help me on this to draw form me row of lines i wanted

*/

void print_Square(int w, bool flag)
{

    for(int i = 0; i < 3; i++)
    {
        // i need sqaure of 3 rows let me call prinline()
        //  to help me on this print_Square(int w, bool flag)

        print_Line(w,flag);

        cout << endl; // after each row of square go newline
    }
    
} /** End of  print_Square() */


/**
  final function to draw chess Board the idea is to get the number
  of rows (row of square) and and column(column of square)from user
  and call print_Square ()function to help me
  print square function will call print line function and so on

 print_chess_table()
 ask user for w and h

  bool flag = false

  for i 0 to h
    do
    if flag = false
    call
    print_Square(w,flag);
    flag = true

    else
    print_Square(w,flag);
    flag = false

we will get Chess Board  like blow

******     ******     ******     ******
******     ******     ******     ******
******     ******     ******     ******
     ******     ******     ******
     ******     ******     ******
     ******     ******     ******
******     ******     ******     ******
******     ******     ******     ******
******     ******     ******     ******
     ******     ******     ******
     ******     ******     ******
     ******     ******     ******
******     ******     ******     ******
******     ******     ******     ******
******     ******     ******     ******
     ******     ******     ******
     ******     ******     ******
     ******     ******     ******
******     ******     ******     ******
******     ******     ******     ******
******     ******     ******     ******

*/


void print_chess_table()
{
    // variable for row and column
    int row,column;

    // asking user input number of rows
    cout << "Enter the number of Rows :";
    cin >> row;

    // asking user input number of colmun
    cout << "Enter the number of column :";
    cin >> column;


     // i need boolean flag let start by false (flag = false)
     // by doing that square of start will be printed first then
     // square of spaces
     bool flag = false;

    for(int i = 0; i < row ; i++)
    {
        /*
         if flag = false then call print_Square(column ,flag);
          which print digram blow when i == 0

          ******     ******     ******     ******
          ******     ******     ******     ******
          ******     ******     ******     ******

          and make flag = true so next time will start by printing
          square of stars but will start by square of spaces */

        if (flag == false)
        {
            print_Square(column ,flag);
            flag = true;
        }
        else
        {
         /*
         if flag = true then call print_Square(column ,flag);
          which print digram blow

        (       ******     ******     ******   )
        (       ******     ******     ******   )
        (       ******     ******     ******   )

          and make flag = false so next time will not start by printing
          square of paces but will start by printing square of stars */

            print_Square(column ,flag);
            flag = false;
        }
    }
    
}/** End of print_chess_table() */
