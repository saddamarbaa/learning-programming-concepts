
/**
   [PROG]	     : C++ / (Exercise) Operators
   [AUTHOR]		 : Saddam Arbaa <saddamarbaas@gmail.com>  */

#include <iostream>

using namespace std;

int main()
{
    int x =11;
    int m = (6>1) | (6^16)&x++;

    /* (1) m = (6>1) | (6^16)&11;
       (2) m = (6>1) | 22 &11;
       (3) m = (6>1) | 2;
       (4) m = 1 | 2;
       (5) m = 3
       */
    // result 3
    cout << m;
    return 0;
}
