/**
    [PROGRAM] : void  Functions 
    [AUTHOR]  :  Saddam Arbaa
    [Email]   :  <saddamarbaas@gmail.com> */

#include <iostream>
using namespace std;

// Function declaration
void DisplayMyInfo();

// the main Function
int main()
{
    DisplayMyInfo();    // call the function

    // out put will be as blow
    /*
    My name is Saddam Arbaa
   I am from Sudan
   I am learning C++
    */

     return 0;// signal to operating system everything works fine

}/** End of main function */


/**

  Function definition
  simple function named  DisplayMyInfo take no parameter
  only display my information when it been called*/

void DisplayMyInfo()
{
   cout <<"My name is Saddam Arbaa "<<endl;
   cout <<"I am from Sudan "<< endl;
   cout <<"I am learning C++ "<< endl;
}
