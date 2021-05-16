#pragma once
#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <math.h>

using namespace std;

string hex_val(int, string);
int hex_val(string, string);

int decimal_to_binary(int input) {
	int temp{ 0 };
	int binary{ 0 };
	int num{ input };

	//-----Decimal to Binary working-----
	for (int i = 0; num > 0; i++)
	{
		int temp = num % 2;
		num = num / 2;
		binary += temp * pow(10, i);
	}
	//-----------------------------------

	return binary;
}

int binary_to_decimal(int input) {
	int temp{ 0 };
	int decimal{ 0 };
	int num{ input };

	//-----Binary to Decimal working-----
	for (int i = 0; num > 0; i++)
	{
		int temp = num % 10;
		num = num / 10;
		decimal += temp * pow(2, i);
	}
	//-----------------------------------

	return decimal;
}

string decimal_to_hexadecimal(int input) {
	int temp{ 0 };
	string hexadecimal{ "" };
	int num{ input };

	//-----Decimal to Hexadecimal working-----
	for (int i = 0; num > 0; i++)
	{
		int temp = num % 16;
		num = num / 16;
		hexadecimal += hex_val(temp, "Decimal"); //concatinating strings
	}
	reverse(hexadecimal.begin(), hexadecimal.end()); //reversing string [reverse() function is included in bits/stdc++.h library]
	//----------------------------------------

	return hexadecimal;
}
string binary_to_hexadecimal(int input) {
	int temp{ 0 };
	string hexadecimal{ "" };
	int num{ input };

	//-----Binary to Hexadecimal working-----
	for (int i = 0; num > 0; i++)
	{
		int temp = num % 10000;
		num = num / 10000;
		hexadecimal += hex_val(temp, "Binary");
	}
	reverse(hexadecimal.begin(), hexadecimal.end());
	//---------------------------------------

	return hexadecimal;
}
int hexadecimal_to_decimal(string input) {
	int temp{ 0 };
	int decimal{ 0 };
	string num{ input };

	//-----Hexadecimal to Decimal working-----

	//----------------------------------------

	return decimal;
}
int hexadecimal_to_binary(string input) {
	int temp{ 0 };
	int binary{ 0 };
	string num{ input };

	//-----Hexadecimal to Binary working-----

	//----------------------------------------

	return binary;
}

string hex_val(int value, string input_type) {
	string val = to_string(value);
	string error{ "Error Occured...\n Check hex_val function..." };

	int n{ 0 };
	if (input_type == "Binary")
		n = 1;
	else
		n = 2;

	//Assigning hex values in 'hex_value()' function
	switch (n)
	{
	case 1:
		if (value == 10 || value == 1010)
			return "A";
		else if (value == 1011)
			return "B";
		else if (value == 1100)
			return "C";
		else if (value == 1101)
			return "D";
		else if (value == 1110)
			return "E";
		else if (value == 1111)
			return "F";
		else if (value = 0000)
			return "0";
		else if (value > 0000 && value <= 0001)
			return "1";
		else if (value > 0001 && value <= 0010)
			return "2";
		else if (value > 0010 && value <= 0011)
			return "3";
		else if (value > 0011 && value <= 0100)
			return "4";
		else if (value > 0100 && value <= 0101)
			return "5";
		else if (value > 0101 && value <= 0110)
			return "6";
		else if (value > 0110 && value <= 0111)
			return "7";
		else if (value > 0111 && value <= 1000)
			return "8";
		else if (value > 1000 && value <= 1001)
			return "9";
		break;
	case 2:
		if (value == 10)
			return "A";
		else if (value == 11)
			return "B";
		else if (value == 12)
			return "C";
		else if (value == 13)
			return "D";
		else if (value == 14)
			return "E";
		else if (value == 15)
			return "F";
		else
			return val;
		break;
	default:
		return error;
	}
	return error;
}

int hex_val(string value, string output_type) {
	int n{ 0 };
	if (output_type == "Binary")
		n = 1;
	else
		n = 2;

	switch (n)
	{
	case 1:

		break;
	case 2:

		break;
	default:
		return 0;
	}
	return 0;
}