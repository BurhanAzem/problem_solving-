// PS_1_L2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void PrintTableHeader() 
{
	cout << "\t\t\t\t\t ---------------------------------------               \n";
	cout << "\t\t\t\t\t|Multiplication Table 1 * 1  To  10 * 10|               \n";
	cout << "\t\t\t\t\t ---------------------------------------               \n\n\n";

	cout << "          ";
	for (int i = 1; i < 11; i++)
		cout << i << "\t";
	cout << "\n" << "---------------------------------------------------------------------------------------------------------------------";
}

string ColunSperator(int i)
{
	if (i < 10)
		return "    |    ";
	else
		return "   |    ";
}

void PrintMultiplicationTable() 
{
	PrintTableHeader();
	for (int i = 1; i < 11; i++) {
		cout << "\n" << i << ColunSperator(i);
		for (int j = 1; j < 11; j++) {
			cout << i * j << "\t";
		}
	}
}

int main()
{
	PrintMultiplicationTable();
}

