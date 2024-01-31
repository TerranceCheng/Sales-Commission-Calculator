/*
Name: Cheng Yong Tat
Student Id: SCSJ2000028
Program Description: This is my Programming Methodology assignment. This program shows the employee's monthly sales, gross pay, deductions, and net pay on display.
Filename: Programming Methodology assignment (Cheng Yong Tat).cpp
Date: 02/10/2020
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()      //Start of the program
{
    double sales, commission, gross_pay, deductions, net_pay;    //Declare the variables to store a double value

    int count, num;     //Declare the variables to store a integer value

    int const base_pay = 1000;      //Declare the variable to store a constant integer value

    cout<<setprecision(2)<<fixed;   //Set a double decimal point to all the values in the program

    for(count = 1 ; count <= 1 ; count++)   //Create a For loop for the calculation, refer to line 77 for the results
    {
        cout<<"Please enter your monthly sales : $ " ;    //Request the user to enter their monthly sales
        cin>> sales ;

        //Calculate sales commission by nested if else

        if (sales >= 50000)     //First calculation
        {
            commission = (sales / 100) * 16;        //If monthly sales are greater than or equals to 50000, then the commission rate will be 16%
        }

        else if (sales < 50000 && sales >= 40000)   //Second calculation
        {
            commission = (sales / 100) * 12;         //If monthly sales are smaller than 50000 but greater than or equals to 40000, then the commission rate will be 12%
        }

        else if (sales < 40000 && sales >= 30000)   //Third calculation
        {
            commission = (sales / 100) * 10;         //If monthly sales are smaller than 40000 but greater than or equals to 30000, then the commission rate will be 10%
        }

        else if (sales < 30000 && sales >= 10000)   //Fourth calculation
        {
            commission = (sales / 100) * 6;          //If monthly sales are smaller than 30000 but greater than or equals to 10000, then the commission rate will be 6%
        }

        else if (sales > 0 && sales < 10000)     //Last calculation
        {
            commission = (sales / 100) * 3;          //If monthly sales are smaller than 10000, then the commission rate will be 3%
        }

        else
        {
            cout<<"\nInvalid value entered.";       //If the user entered value was not integers or numbers, the program will shows invalid.
            cout<<endl;
            cout<<"\nPlease try again.";
            cout<<endl;

            break;      //Exit the loop to prevents infinite loop
        }

        //Calculates the gross pay, deductions and net pay
        gross_pay = commission + base_pay;
        deductions = (gross_pay / 100) * 18;
        net_pay = gross_pay - deductions;

        //Displays the final gross pay, deduction and the net pay of the employee after calculation
        cout<<"-------------------------"<< endl;
        cout<<"Gross pay:   $ "<<setw(9)<< gross_pay << endl;      //the 'setw' is used to manipulate the value's position and make it tidier
        cout<<"Deduction :  $ "<<setw(9)<< deductions << endl;
        cout<<"Net pay:     $ "<<setw(9)<< net_pay <<endl;
        cout<<"-------------------------"<< endl;

        cout<<endl;
        cout<<"Please press 1 if you want to recalculate the monthly sales...\n";   //Request the user to enter number 1 if they want to recalculate the sales.
        cout<<"Or press any key to exit the program...\n";                          //Request the user to enter any keys other than 1 to exit the program.
        cin>>num;
        cout<<endl;

        if(num == 1)
        {
            count--;       //If the user entered number is 1, then the 'count' variable will minus 1, and lead to the start of the loop again.
        }                  //If the user entered number is other than 1, then the statement will exit the loop.
    }

    cout<<endl;
    cout<<"End of program.\n";

    return 0; //End of the program
}
