#include <iostream>
#include "Calculator.h";

using namespace std;

int main()
{
    double numberOne = 0.0;
    double numberTwo = 0.0;
    double resultFinal = 0.0;
    char operation = '+';

    cout << "Console Application - Calculator" << endl << endl;
    cout << "Please select an operation. In the following format: a+b | a-b | a*b | a/b"
        << endl;

    Calculator calculator;
    while (true)
    {
        cin >> numberOne >> operation >> numberTwo;
        
        if (operation == '/' && numberTwo == 0)
        {
            cout << "Math Error: Division by zero is not allowed" << endl;
            continue;
        }
        else
        {
            resultFinal = calculator.Calculate(numberOne, operation, numberTwo);
        }

        cout << "Result " << "of " << numberOne << operation << numberTwo << " is: " << resultFinal << endl;
        cout << "Awaiting next command..." << endl;
    }

    return 0;
}