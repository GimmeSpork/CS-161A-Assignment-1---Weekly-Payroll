
/******************************************************************************
# Author:           Lucy Price
# Assignment:       Assignment 1 - Weekly Payroll
# Date:             April 12, 2026
# Description:      This program will read the employees ID#, the number of
#                   hours worked, and hourly rate, calculate the users gross 
#                   income, fedral tax withholding, and Net pay.
# Input:            emplyeeID, hours worked, hourly rate, tax withholding as 
#                   integers
# Output:           gross pay, tax withholding and net pay as floats
# Sources:          Assignment 1 Weekly payroll instruction document
#******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;
//main function
int main() {

  //declared variables
  int employeeID = 0;
  int hoursWorked = 0;
  int hourlyRate = 0;
  int taxWithholdRate = 0;
  float grossPay = 0.0;
  float taxWitholding = 0.0;
  float netPay = 0.0;

  // start of program and user inputs
  cout << "Welcome to the weekly payroll calculation program. Enter the following: ";
  cout << endl;
  cout << endl;
  cout << "Employee ID: ";
  cin >> employeeID;

  cout << "Number of hours worked: ";
  cin >> hoursWorked;

  cout << "Hourly rate: ";
  cin >> hourlyRate;

  cout << "Federal tax withholding rate: ";
  cin >> taxWithholdRate;
  cout << endl;

  //calculations
  grossPay = hoursWorked * hourlyRate;
  taxWitholding = grossPay * (taxWithholdRate / 100.0);
  netPay = grossPay - taxWitholding;

  //outputs
  cout << "Your payroll summary: " << endl;
  cout << endl;
  cout << "Total gross pay: $" << grossPay << endl;
  cout << "Federal tax withholding: $" << taxWitholding << endl;
  cout << "Net pay: $" << netPay << endl;
  cout << endl;
  cout << "Thank you for using the weekly payroll calculation program!";
  cout << endl;
  
  return 0;
}


// Function implementations (if any)


// ------------- DESIGN -------------
/* 
Program Name:

Program Description:

Design:
A. INPUT
Define the input variables including name data type. 

B. OUTPUT
Define the output variables including data types. 

C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt


SAMPLE RUNS
Copy from assignment document.

*/
