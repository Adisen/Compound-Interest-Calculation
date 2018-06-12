#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//Calculate compound interest using the formular a = p(1 + r)n

int main()
{
    cout << "Given principal of 1000USD, the compound interest for each year for 10 years at 5% rate is:" << endl;

    double amount; // set the final amount
    double principal = 1000.0; //set principal
    double rate = 0.05; // interest rate at 5%

    // display headers
    cout << "Year" << setw(21) << "Amount on Deposit" << endl;//set the formatting of the table

    //set floating point precision
    cout << fixed << setprecision(2);

    //Do the compound interest calculation
    for(int year = 1; year <= 10; year++)
    {
        amount = principal * pow(1 + rate, year);

        //display year and amount
        cout << setw(4) << year << setw(21) << amount << endl;
    }

    return 0;
}
