#include <iostream>
using namespace std;

void displayMenu() {
    cout << "Select an operation to perform:" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "Enter your choice (1-4): ";
}

int main() {
    double num1, num2, result;
    int choice;

    // Display menu to the user
    displayMenu();
    cin >> choice;

    // Check for valid choice
    if(choice < 1 || choice > 4) {
        cout << "Invalid choice! Please restart the program and choose a number between 1 and 4." << endl;
        return 1;
    }

    // Input two numbers
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Perform the chosen operation
    switch(choice) {
        case 1:
            result = num1 + num2;
            cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
            break;
        case 2:
            result = num1 - num2;
            cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
            break;
        case 3:
            result = num1 * num2;
            cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
            break;
        case 4:
            if(num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed!" << endl;
            }
            break;
        default:
            cout << "Invalid operation choice. Please restart the program." << endl;
            return 1;
    }

    return 0;
}
