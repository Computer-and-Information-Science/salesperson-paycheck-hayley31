#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string firstName, lastName;
    double baseSalary, commissionPercent;
    double totalSales, expenses;

    // Get employee name
    cout << "Enter employee first and last name: ";
    cin >> firstName >> lastName;

    // Get base salary and commission percentage
    cout << "Enter base salary and commission percentage: ";
    cin >> baseSalary >> commissionPercent;

    // Get total sales
    cout << "Enter total sales: ";
    cin >> totalSales;

    // Get expenses
    cout << "Enter expenses: ";
    cin >> expenses;

    // Calculations
    double commission = totalSales * (commissionPercent / 100.0);
    double totalPay = baseSalary + commission + expenses;

    //Output
    cout << fixed << setprecision(2);

    cout << "\nPayroll data for " << firstName << " " << lastName << endl;

    cout << "Base Salary:" << endl;
    cout << baseSalary << endl;

    cout << "Commission:" << endl;
    cout << commission << "(" << setprecision(1)
         << commissionPercent << " % of "
         << fixed << setprecision (2) << totalSales << ")" << endl;

    cout << "Expenses:" << endl;
    cout << expenses << endl;

    cout << "Total:" << endl;
    cout << totalPay << endl;

    return 0;
}
