/**
[AUTHOR]: Saddam Arbaa
[Email] : <saddamarbaas@gmail.com>

 Nested Loops examples in C++
 write c++ program that calculate average grade for N  number of
 student in N number of classes
 number of students and number of classes will be entered by user

 (Average grade  for All  student in school)

*/

#include <iostream>
using namespace std;

/* Driver program  */
int main()
{
    int number_of_sudent; // number of student will entered by user
    int number_of_subj; // number of subj for student will entered by user
    float sum = 0;  // sum for  each subj
    float average; // average for each student
    float grade; // grade will each students will entered by user

    // asking user for  number of student in school
    cout << "How students you have in school this year : " ;
    cin >> number_of_sudent;

    //outer loop
    for ( int i = 1; i <= number_of_sudent; i++)
    {
        // asking for number of subject from student
         cout << "Enter number of classes for student number  " << i << " :  " ;
         cin >> number_of_subj;

         // inner loop
         for(int i = 1; i <= number_of_subj ; i++)
         {
             // asking student to enter grade
              cout << "Enter grade for class number  " << i<< "  : " ;
              cin >> grade;

              sum = sum + grade ; // calculation sum
         }

         // calculation average grade for each student in class and print it
         average = sum /number_of_subj;
         cout << "Average grade for student number  " << i<< " =  " << average << endl;
    }

    return 0;// signal to operating system everything works fine

}/** End of main function */
