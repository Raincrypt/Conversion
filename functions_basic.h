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

int hexadecimal_to_binary(string input) {
	int temp{ 0 };
	int binary{ 0 };
	string num{ input };

	//-----Hexadecimal to Binary working-----
	for (int i = 0; i < input.length() ; i++)
	{
		temp = hex_val(num.at(i), "Binary");
		binary = binary + temp * pow(10, i);
	}
	//----------------------------------------

	return binary;
}

int hexadecimal_to_decimal(string input) {
	int temp{ 0 };
	int decimal{ 0 };
	string num{ input };

	//-----Hexadecimal to Decimal working-----
	
	//----------------------------------------

	return decimal;
}


string hex_val(int value, string input_type) {

	//Assigning hex values in 'hex_value()' function
	if (input_type == "Binary") {
		if (value == 1010)
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
		else if (value == 0)
			return "0";
		else if (value == 1)
			return "1";
		else if (value == 10)
			return "2";
		else if (value == 11)
			return "3";
		else if (value == 100)
			return "4";
		else if (value == 101)
			return "5";
		else if (value == 110)
			return "6";
		else if (value == 111)
			return "7";
		else if (value == 1000)
			return "8";
		else
			return "9";
	}
	else{
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
			return to_string(value);
	}
}

int hex_val(string value, string output_type) {
	if (output_type == "Binary") {
		if (value == "A")
			return 1010;
		else if (value == "B")
			return 1011;
		else if (value == "C")
			return 1100;
		else if (value == "D")
			return 1101;
		else if (value == "E")
			return 1110;
		else if (value == "F")
			return 1111;
		else if (value == "0")
			return 0000;
		else if (value == "1")
			return 0001;
		else if (value == "2")
			return 0010;
		else if (value == "3")
			return 0011;
		else if (value == "4")
			return 0100;
		else if (value == "5")
			return 0101;
		else if (value == "6")
			return 0110;
		else if (value == "7")
			return 0111;
		else if (value == "8")
			return 1000;
		else
			return 1001;
	}
	else {
		if (value == "A")
			return 1010;
		else if (value == "B")
			return 1011;
		else if (value == "C")
			return 1100;
		else if (value == "D")
			return 1101;
		else if (value == "E")
			return 1110;
		else if (value == "F")
			return 1111;
		else
			return stoi(value);
	}
}