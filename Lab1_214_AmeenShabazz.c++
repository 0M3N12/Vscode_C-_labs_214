
//CSIT 214 C++ Lab 1: Fleet Management Company
#include <iostream>
#include <string>
using namespace std;

 //Program start...
int main() {

 //Declaring the const and first variables for the output 
const double PAY_RAISE_INCREASE  = 0.062; 
double formerSalary;
string userName;
 
 //all of my initial output to the user. 
cout << "PLease enter your first name to start: " << endl;
cin >> userName;

cout << "Greetings welcome!! " << userName <<endl;

cout << "please enter your former salary here: \n";
cin >> formerSalary;

 //declaring variables for my main function 

double newMonthly_Salary;
double newAnnual_Salary;
double salaryIncrease;


 // finally calculations of all my variables and the constant

salaryIncrease = formerSalary * PAY_RAISE_INCREASE;
newAnnual_Salary = formerSalary + salaryIncrease;
newMonthly_Salary = newAnnual_Salary / 12;

 // Displaying the results to the user after calculations 

cout << "Former Annual Salary: $" << formerSalary << endl;
cout << "Salary Increase: $" << salaryIncrease << endl;
cout << "New Annual Salary: $" << newAnnual_Salary << endl;
cout << "New Monthly Salary: $" << newMonthly_Salary << endl; 



// End of my program... 
    return 0;
}
