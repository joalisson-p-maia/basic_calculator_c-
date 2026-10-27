#include "Calculator.h";

double Calculator::Calculate(double numberOne, char operation, double numberTwo)
{
	switch (operation)
	{
		case '+':
			return numberOne + numberTwo;
		case '-':
			return numberOne - numberTwo;
		case '*':
			return numberOne * numberTwo;
		case '/':
			return numberOne / numberTwo;
		default:
			return 0.0;
	}
}