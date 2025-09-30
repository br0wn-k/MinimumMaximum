// File Name: MinimumMaximum
// Programmer: Kaylee Brown
// Date: October 2025
// Requirements: This program is designed to take two numbers from a user, and then
// use a conditional operator to determine which number is the smaller and which is the larger.

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, small, large;

    // Module 1: Input
    {
        cout << "Please enter the first number: ";
        cin >> num1;
        cout << "Please enter the second number: ";
        cin >> num2;
    }

    // Module 2: Processing
    {
        small = (num1 < num2) ? num1 : num2;
        large = (num1 > num2) ? num1 : num2;
    }

    // Module 3: Output
    {
        cout << "The smaller number of " << num1
            << " and " << num2 << " is: " << small << endl;
        cout << "The larger number of " << num1
            << " and " << num2 << " is: " << large << endl;
    }

    return 0;
}