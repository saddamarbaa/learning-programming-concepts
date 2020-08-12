/**
  [AUTHOR] :  Saddam Arbaa 

  [Email]  :  <saddamarbaas@gmail.com>

 C ++ program to generate Random Number in a given range */

#include <iostream>
#include <time.h> // call time  header file

using namespace std;

// generate Random Number in a given range
int RandomNumber(int min, int max);

//the  Driver Code
int main()
{// variable for min  and max
    int min,max;

    // ask user input
    cout << "Enter min value : ";
    cin >> min;

    cout << "Enter max value : ";
    cin >> max;
    // call RandomNumber() function
    int num =  RandomNumber(min, max);

    // print the number
    cout << "the Random number you got is : "<< num << endl;

     return 0;// signal to operating system everything works fine

}/** End of main function */



/**
   Function to generate Random number in range [min, max].
 */

int RandomNumber(int min, int max)
{

    // Use current time as seed for random generator
    // also can be srand(time(NULL));
    srand(time(0));

    // get the random number first
    int ran = rand();

     /**
     Formula for calculation random number in range
    num = (rand() % (upper – lower + 1)) + lower */

     int num =  ran % (max - min + 1) + min;

     return num; // return num to where is been called

}/** End of RandomNumber() */

