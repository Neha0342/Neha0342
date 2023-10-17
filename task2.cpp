#include<iostream>
using namespace std;

int main()
{
    int choice;
    double num1, num2, result;

    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1)
    {
        result = num1 + num2;
        cout << "Result: " << result << endl;
    }
    else if (choice == 2)
    {
        result = num1 - num2;
        cout << "Result: " << result << endl;
    }
    else if (choice == 3)
    {
        result = num1 * num2;
        cout << "Result: " << result << endl;
    }
    else if (choice == 4)
    {
        if (num2 == 0)
        {
            cout << "Division by zero is not allowed." << endl;
        }
        else
        {
            result = num1 / num2;
            cout << "Result: " << result << endl;
        }
    }
    else
    {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}