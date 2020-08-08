/**
    C++ Goto Statement Examples
    [AUTHOR]: Saddam Arbaa
    [Email] : <saddamarbaas@gmail.com> */

// the  Driver Code
#include <iostream>
using namespace std;

// the  Driver Code
int main()
{
    // variable
    int i = 1;

     // label x
     x :
        /*
        print value of I first ten increment i by 1
        after that check if i still less than or equal
        to 10 will go back to label x (loop) */
        cout << i <<endl;
        i = i + 1;
        if(i <= 10)
            goto x;

    return 0;// signal to operating system everything works fine

}/** End of main function */
