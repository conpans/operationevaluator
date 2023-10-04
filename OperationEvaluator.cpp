#include "std_lib_facilities.h"
int main() {
	// Declare a string variable to hold the arithmetic operation
	string operation;

	// Declare double variables to hold the two operands and the result
	double operand1, operand2, result;

	cout << "Enter an operation followed by two operands: ";
	cin >> operation >> operand1 >> operand2;

	if (operation == "+" || operation == "plus") {
		result = operand1 + operand2;
	}
	else if (operation == "-" || operation == "minus") {
		result = operand1 - operand2;
	}
	else if (operation == "*" || operation == "mul") {
		result = operand1 * operand2;
	}
	else if (operation == "/" || operation == "div") {
		if (operand2 != 0) {
			result = operand1 / operand2;
		}
		else {
			cout << "Error: Division by zero!" << "\n";
		}
	} 
	else {
		cout << "Unknown operation!" << "\n";
	}

	//Display the result of operation
	cout << "Result: " << result << "\n";
}