#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

int main() {
    string firstName, lastName;
    double baseSalary, commissionPercent;
    double totalSales, expenses;
    string filename;

    // Prompt for filename
    cout << "Enter the name of the file: ";
    cin >> filename;

    // Open file
    ifstream inputFile(filename);
    if (!inputFile) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    // Read from file
    inputFile >> firstName >> lastName;
    inputFile >> baseSalary >> commissionPercent;
    inputFile >> totalSales;
    inputFile >> expenses;
    inputFile.close();

    // Calculations
    double commission = totalSales * (commissionPercent / 100.0);
    double totalPay = baseSalary + commission + expenses;

    // Output
    cout << fixed << setprecision(2);
    cout << "\nPayroll data for " << firstName << " " << lastName << endl << endl;
    cout << "Base Salary:" << setw(8) << baseSalary << endl;
    cout << "Commission:" << setw(7) << commission << " (" << setprecision(1) << commissionPercent << "% of " 
         << fixed << setprecision(2) << totalSales << ")" << endl;
    cout << "Expenses:" << setw(11) << expenses << endl;
    cout << "               --------" << endl;
    cout << "Total:" << setw(14) << totalPay << endl;

    return 0;
}