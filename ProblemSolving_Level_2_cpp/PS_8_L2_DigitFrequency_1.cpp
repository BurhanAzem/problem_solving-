#include <iostream>
using namespace std;

int ReadPostiveNumber(string st)
{
	int num;
	do
	{
		cout << st <<"\n";
		cin >> num;
	} while (num < 0);
	return num;
}

int ReverseNumber(int num) {
	int digit, res = 0;
	int i = 0;
	while (num != 0)
	{
		digit = num % 10;
		res = res * 10 + digit;
		num = num / 10;
	}
	return res;
}

void PrintDigitFrequency(int num, int digit)
{
	int count = 0;
	cout << "Frequency for the Digit "<< digit <<  "in the number  num "<< num <<"\n";
	while (num != 0)
	{
		if (num % 10 == digit)
			count++;
		num = num / 10;
	}
	cout << ReverseNumber(count);
}

int main()
{
	PrintDigitFrequency(ReadPostiveNumber("Enter the Number "), ReadPostiveNumber("Enter the Digit "));
}
