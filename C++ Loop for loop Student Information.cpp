/**
 [AUTHOR]: Saddam Arbaa
 [Email] : <saddamarbaas@gmail.com>

  for loop examples in C++
    C++ / (Exercise) Student Information

    write c++ program that read information of N student
    in 3 class (English ,math computer) then calculate
    the average of each  student then print if student is
    passed to next class or fail
    note that student will passed to next class if and
    only got grade 50 or above in each subject
  */

#include <iostream>
using namespace std;

int main()
{
    int n; // for number of student in school

    int sum = 0;//variable for sum

    float average; // variable for avg

    string name;//for student name

    int age ; // variable for student age

    // all students subject in school
    float englsh,math,computer;

    // asking number of student from user
    cout << "welcome :" <<endl;
    cout <<"Enter number of student in this class : " ;
    cin >> n;
    cout << "this program to calculate Average grade of : "<< n << " students" << endl;

    for(int i = 1; i <= n; i++)
    {
        // asking each student information
        // asking student name
        cout <<"for student number " << i << "  Enter name  : " ;
        cin >> name;
        // asking student grade for English class
        cout <<"Enter grade for English class : " ;
        cin >> englsh;

        // asking student grade for math class
        cout <<"Enter grade for math class : " ;
        cin >> math;

        // asking student grade for computer class
        cout <<"Enter  grade for computer class : " ;
        cin >> computer;

        // calculate  sum and average for each student
        sum = (math + englsh + computer);
        average  = (float)sum /3;

        // print student grade
        cout << "Your final Average grade is: " << average  <<endl;


        /*
          check if student pass or fail here student will be pass
           to next class if and only if got grade 50 or above in
            all subject */

          if (englsh >= 50 && computer >= 50 && math >= 50)
          {
              cout <<"congratulations you pass to next class "<<endl;
          }
         else
        cout <<"Sorry you have fail this year good luck in next time" <<endl;

    } // end for loop

    return 0;// signal to operating system everything works fine

}/** End of main function */

