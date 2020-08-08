/**

    [AUTHOR]: Saddam Arbaa
    [Email] : <saddamarbaas@gmail.com>

    C++ Nested for Loop Example
*/

#include <iostream>
using namespace std;

/* Driver program to test Nested for Loop */
int main()
{
   int n;// variable declaration
  cout << "Enter the value of n :" ;
  cin >> n;

   // Displaying the n tables.
   for(int i = 1;i <= n; i++)  // outer loop
   {
       for(int j = 1;j <= 12; j++)  // inner loop
       {
           cout << i << " * " << j << "  =  "<< i*j << "\n"; // printing the value.
       }
      cout << endl; // new line after printing ever table
   }

   /*
   Explanation of the above code

    First, the 'i' variable is initialized to 1 and then program control passes to the i<=n.
    The program control checks whether the condition 'i<=n' is true or not.
    If the condition is true, then the program control passes to the inner loop.
    The inner loop will get executed until the condition is true.  
    After the execution of the inner loop, the control moves back to the update of the outer loop, i.e., i++.
    After incrementing the value of the loop counter, the condition is checked again, i.e., i<=n.
    If the condition is true, then the inner loop will be executed again.
    This process will continue until the condition of the outer loop is true.
   */

    return 0;// signal to operating system everything works fine

}/** End of main function */
