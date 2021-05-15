#include <iostream>
#include <string>

using namespace std;

#include "index.h"
#include "functions_basic.h"

int main()
{
	int choice{ 0 };
	int value{ 0 }; string VALUE{ "" };
	int result{ 0 }; string RESULT{ "" };
	do {
		menu();
		cout << "Enter your choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			value = input("Decimal");
			result = decimal_to_binary(value);
			output(value, result, "Decimal", "Binary");
			break;
		case 2:
			VALUE = input();
			result = hexadecimal_to_binary(VALUE);
			output(VALUE, result, "Hexadecimal", "Binary");
			break;
		case 3:
			value = input("Binary");
			result = binary_to_decimal(value);
			output(value, result, "Binary", "Decimal");
			break;
		case 4:
			VALUE = input();
			result = hexadecimal_to_decimal(VALUE);
			output(VALUE, result, "Hexadecimal", "Decimal");
			break;
		case 5:
			value = input("Binary");
			RESULT = binary_to_hexadecimal(value);
			output(value, RESULT, "Binary", "Hexadecimal");
			break;
		case 6:
			value = input("Decimal");
			RESULT = decimal_to_hexadecimal(value);
			output(value, result, "Decimal", "Hexadecimal");
			break;
		case 7:
			exit();
			break;
		default:
			error();
		}
	} while (choice != 7);
	
	return 0;
}