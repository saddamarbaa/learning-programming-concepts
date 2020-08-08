/**
    C++ Goto Statement Examples
    [AUTHOR]: Saddam Arbaa
   [Email] : <saddamarbaas@gmail.com> */

#include <iostream>
using namespace std;

int main()
{
    // variable
    int i = 1;

    // label x
    x :
        /*
        print "Hello iam reading goto statement "
        first ten increment i by 1
        after that check if i still less than or equal
        to 10 will go back to label x (loop) so this will
        print 10 times */

        cout << "Hello Iam reading goto statement " <<endl;

        i = i + 1;
        if(i <= 10)
            goto x;

    return 0;// signal to operating system everything works fine

}/** End of main function */
