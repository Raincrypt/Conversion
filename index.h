#pragma once
#include <iostream>
#include <string>

using namespace std;

string input() {
	string value{ "" };
	cout << "Enter the value to be converted ( Hexadecimal ) : ";
	cin >> value;
	return value;
}
int input(string input_type) {
	int value{ 0 };
	cout << "Enter the value to be converted (" << input_type << ") : ";
	cin >> value;
	return value;
}

void output(const int value, const int result, const string input_type, const string output_type) {
	cout << "-----------------------RESULT----------------------------" << endl;
	cout << input_type << " Value entered: " << value << endl;
	cout << "Value converted to " << output_type << " : " << result << endl;
	cout << "---------------------------------------------------------\n" << endl;
}
void output(const string value, const int result, const string input_type, const string output_type) {
	cout << "-----------------------RESULT----------------------------" << endl;
	cout << input_type << " Value entered: " << value << endl;
	cout << "Value converted to " << output_type << " : " << result << endl;
	cout << "---------------------------------------------------------\n" << endl;
}
void output(const int value, const string result, const string input_type, const string output_type) {
	cout << "-----------------------RESULT----------------------------" << endl;
	cout << input_type << " Value entered: " << value << endl;
	cout << "Value converted to " << output_type << " : " << result << endl;
	cout << "---------------------------------------------------------\n" << endl;
}
void output(const string value, const string result, const string input_type, const string output_type) {
	cout << "-----------------------RESULT----------------------------" << endl;
	cout << input_type << " Value entered: " << value << endl;
	cout << "Value converted to " << output_type << " : " << result << endl;
	cout << "---------------------------------------------------------\n" << endl;
}

void exit() {
	cout << "Exiting...\n" << endl;
}

void error() {
	cerr << "Choice entered is invalid." << endl;
	cerr << "Please try again.\n" << endl;
}

void menu() {
	cout << "-----------------Number Conversion Menu-----------------" << endl;
	cout << "1. Decimal to Binary" << endl;
	cout << "2. Hexadecimal to Binary" << endl;
	cout << "3. Binary to Decimal" << endl;
	cout << "4. Hexadecimal to Decimal" << endl;
	cout << "5. Binary to Hexadecimal" << endl;
	cout << "6. Decimal to Hexadecimal" << endl;
	cout << "7. Exit" << endl;
}