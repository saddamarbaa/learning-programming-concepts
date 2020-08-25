
/**
    [PROGRAM] : C/C++ struct
    [AUTHOR]  :  Saddam Arbaa
    [Email]   :  <saddamarbaas@gmail.com>
    A structure is a user defined data type in C/C++.
    Syntax of struct
    struct structureName
    {
      dataType member1;
     dataType member2;
        ...
    };  */

#include <iostream>
using namespace std;


//define Employee struct
typedef struct
{
    int id;        // for Employee id number
    char name[30]; // for Employee name
    float salary;    // for Employee salary
    char job [30]; // for Employee job
} Employee;

// A utility function to get Employee information
void get_Data(Employee[], int);

// A utility function to print All Employee information
void print(Employee[], int );

// the  Driver Code
int main()
{
    // variable n declaration and initialize by 5
    int n = 2; // n is the number of employees

    Employee employees[n]; // employees array of type Employee declaration

    /* calling a function to get employees information from user.*/
    get_Data(employees, n);

    /* calling a function to print employees information .*/
    print(employees, n);

    return 0;// signal to operating system everything works fine

}/** End of main function */


// A utility function to get Employee information from user
void get_Data(Employee employees[], int size)
{
    //Taking each employee detail as input
    cout << "Enter "<< size << " employee informations" << endl;
    for(int i = 0; i < size; i++)
    {
        cout << "Employee number " << i + 1 << " information\n";
        cout << "Enter employee Name :"; // employee i Name
        cin >> employees[i].name;

        cout << "Enter employee ID :"; // employee i ID
        cin >> employees[i].id;

        cout << "Enter employee JOB:"; // employee i job
        cin >> employees[i].job;

        cout << "Enter employee Salary:"; // employee i Salary
        cin >> employees[i].salary;

        cout << endl;// go new line
    }

} /** end of get_Data()*/


// A utility function to print All Employee informations

void print(Employee employees[], int size)
{
    // printing all employees information
    cout << "Printing All Employees Informations \n";
    for(int i = 0; i < size; i++)
    {
        cout <<"Employee number " << i + 1 << " information" <<endl;

        cout << "Name \t: " << employees[i].name << endl;        // printing name

        cout << "ID \t: " << employees[i].id << endl;            // printing ID

        cout << "Salary \t: " << employees[i].salary << endl;        // printing salary

        cout << "JOB \t: " << employees[i].job << endl;            // printing job

    }

} /** end of print()*/
