/**
[AUTHOR]: Saddam Arbaa
[Email] : <saddamarbaas@gmail.com>

C++  Loop Example to Draw Rectangle of stars like blow
number of row will entered by user

*
* *
* * *
* * * *
* * * * *
* * * * * *
* * * * * * *
* * * * * * * *
*/

#include <iostream>
using namespace std;

// the  Driver Code
int main()
{
    int row; //variable for

    //asking user input number of rows
    cout << "enter number of Rows :";
    cin >> row;
    // outer loop
    for(int i = 1; i <= row; i++)
    {
        // inner loop
        for(int j = 1; j <= i ; j++)
        {
          cout <<"* " ;
        }
         cout << endl; // new line after each inner loop
    }

    /* the program can be written in different way using string calss
     as code blow */

//     // outer loop
//    for(int i = 1; i <= 5; i++)
//    {
//        cout<<string(i,'*');
//        cout<<endl;
//    }

    return 0;// signal to operating system everything works fine

}/** End of main function  */

