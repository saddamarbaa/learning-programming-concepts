/**
    Enumeration in C++
   [AUTHOR]: Saddam Arbaa
   [Email] : <saddamarbaas@gmail.com>

   Enum seasons Example  */

#include <iostream>

using namespace std;

// the  Driver Code
int main()
{
    // defining season enum start from number 1
    enum season{winter = 1, spring , summer, autum};

    season s1 ,s2;
    s1 = winter;
    s2 = autum ;

    cout << "Winter  = " << s1 << endl;
    cout << "Spring  = " << spring << endl;
    cout << "Summer  = " << summer << endl;
    cout << "Autum   = " << s2  << endl;

    return 0;// signal to operating system everything works fine

}/** End of main function */

