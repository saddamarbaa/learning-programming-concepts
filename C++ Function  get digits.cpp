/**
     [AUTHOR]: Saddam Arbaa

     [Email] : <saddamarbaas@gmail.com>

     program to find All the digits of any given decimal number */

#include <iostream>
using namespace std;

// function to find digits of decimal number
void findDigitsInDecimal(int N);
// the  Driver Code
int main()
{
    int n;
    // asking user input
    cout <<"Enter the number to digits  ";
    cin >> n;
    // call the function and pass the number
    findDigitsInDecimal(n);

    return 0;// signal to operating system everything works fine

}/** End of Main */


/**
   function to find All the digits of any given decimal number*/

void findDigitsInDecimal(int N)
{
    // counters
    int i,j,siz = 0;
    // temp variable
    int temp,secodTemp ;
    // set both temp equal to given  Number
    temp = secodTemp = N;
    // count the size
    while(secodTemp > 0)
    {
        // get the size of number first
        siz++;
        secodTemp = secodTemp/10;
    }
    // by now we know the size let create array
    // create array of size size
    int aray[siz];
    // needed while storing digits to Array
    int coun = 0;

    while(N > 0)
    {
        // get each digits and store in temp  first  then add temp to array list
        temp = N % 10;
        // add the digit to array
         aray[coun] = temp;
         //increment count
         coun++;
         // divide the number by 10 and continue loop
         N = N / 10;
    }
    cout <<endl<<"Array contain flowing before Reverse "<<endl;
    for(int i = 0; i <siz ; i++)
        cout<<aray[i] <<"\t";
        cout << endl;
    //  let Reverse the Array
    for(i = 0,j = siz - 1; i < siz/2; i++)
    {
        // swap between aray[i] and aray[j]
        temp = aray[i];
        aray[i] = aray[j];
        aray[j] = temp;
        // decrement J
        j--;
    }
    cout <<endl<<"Array contain flowing digits After Reverse "<<endl;
    for(int i = 0; i <siz ; i++)
        cout<<aray[i] <<"\t";
        cout << endl;
}/** End of findDigitsInDecimal */


