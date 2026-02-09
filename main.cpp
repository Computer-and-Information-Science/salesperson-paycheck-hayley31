#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    std::string fileName;
    std::ifstream inputFile;

    cout << " Enter employee first and last name: ";
    cin >> fileName;

    inputFile.open(fileName);

    if (!inputFile) {
       cout << "Error opening file." << endl;
       return 1;
    }
    // Variables
    string firstName, lastName;
    double baseSalary, commissionPercent;
    double totalSales, expenses;

    // Read data from file
    inputFile >> firstName >> lastName;
    inputFile >> baseSalary >> commissionPercent;
    inputFile >> totalSales;
    inputFile >> expenses;

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

    inputFile.close();
    return 0;
}
