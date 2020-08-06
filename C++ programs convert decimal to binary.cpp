/**
     [AUTHOR]: Saddam Arbaa

     [Email] : <saddamarbaas@gmail.com>

    C++ program Convert a number from decimal to binary. */

#include <iostream>

using namespace std;

// Convert a number from decimal to binary.
void Decimal_to_Binary(int N);

// function to swap values of two variables
void swap(int *a, int *b);

// the  Driver Code
int main()
{
    // variable to store the number
    int decimal_Number;

    // asking user input to enter decimal Number
    cout << "Enter a decimal integer  : ";
    cin >> decimal_Number;

    // call the function and pass the number
    Decimal_to_Binary(decimal_Number);

    return 0;// signal to operating system everything works fine

}/** End of Main */


/** function to convert given decimal number to binary */

void Decimal_to_Binary(int decimal_num)
{
    // counters
    int i, j, count, siz = 0, no_of_1s = 0;

    // temp variable ,and remainder
    int remainder, temp ;

    // save the given number in temp first
    temp  = decimal_num;

    // count the size
    while(temp > 0)
    {
        // get the size of number first
        siz++;

        // divide temp by 2
        temp /= 2;  //temp = temp/ 2

        /** why i need size is to create array of that size */
    }
    // by now we know the size let create array
    // create array of size size
    int binary[siz];

    // needed while storing digits to Array
    count = 0;
    while(decimal_num > 0)
    {
        // get the remainder and add to the binary array
        remainder = decimal_num % 2;

        // add the remainder to the binary array
         binary[count] = remainder;

         //increment the array counter
         count++;

         // divide the number by 10 and continue loop
         decimal_num /= 2;
    }

    // print the binary array before Reverse
    cout << "Array contain flowing before Reverse \n";
    for(i = 0; i <siz ; i++)
    cout << binary[i] << "\t";
    cout << endl;

    // Reverse the Array
    for(i = 0,j = siz - 1; i < siz/2; i++)
    {
        // swap between aray[i] and aray[j]
        // for that call swap function
        swap(&binary[i], &binary[j]);
        j--;  // decrement J
    }

    // print the result after Reverse
    cout << "\nArray contain flowing digits After Reverse \n";
    for(i = 0; i <siz ; i++)
    cout << binary[i] << "\t";
    cout << endl;

}/** Decimal_to_Binary() */


/**
  function to swap values of two variables
 (user should pass address of two as parameter)*/

void swap(int *a, int *b)
{
    // declare temp variable
    int temp;
    // store in temp value of a
    temp = *a;
    // store in a value of b
    *a = *b;
    // store in b value of a(we have value of variable a stored in temp)
    *b = temp;

    // swap is done
}/** End of swap () */

