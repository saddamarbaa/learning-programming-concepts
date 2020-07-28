
/**

   [PROG]	    :  C++ Conditions

   [AUTHOR]		:  Saddam Arbaa
   [Email]      : <saddamarbaas@gmail.com>

 C++ program to combine more than one condition
 A company Ensures it Employees in the flowing cases :
 - Employee is married
 - Employee is a single male above 30 years age
 - Employee is a single female above 25 years age
 - conditions
 - martial status = 'm' or
 - martial status = 's' and age > 30 or
 - martial status = 's' and  age > 25

*/

#include <iostream>

using namespace std;

int main()
{
    char martial_status, gender;
    int age ;

    // ask employee to enter martial status
    cout << "Enter your martial status (S for single and M for Married) ! : " ;
    cin  >> martial_status;

    // ask employee to enter gender
    cout << "Enter your gender (F for female and M for male )! :" ;
    cin  >> gender;

      // ask employee to enter age
    cout << "Enter your age)! : " ;
    cin  >> age;

    // check conditions
    if(martial_status == 'm' ||
       (martial_status == 's' && gender == 'm' && age > 30)
        ||(martial_status == 's' && gender == 'f' && age > 27))
    {
      cout << "You will get company insurance \n" ;
    }
    else{
        cout << "You will not get company insurance\n";
    }

    return 0;
}
