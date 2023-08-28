#include <iostream>
#include <vector>
using namespace std;

int ReadPostiveNumber(string st)
{
	int num;
	do
	{
		cout << st << "\n";
		cin >> num;
	} while (num < 0);
	return num;
}



void PrintDigitInOrder(int num_in)
{
	int num = num_in;
	int n = 0;
	vector<int> digits;
	// turn number to array of digits
	while (num > 0) {
		digits.insert(digits.begin(), num % 10);
		num /= 10;
	}
	for (int i = 0; i < digits.size(); i++)
	{
		cout << digits[i] << " \n";
	}
}

int main()
{
	PrintDigitInOrder(ReadPostiveNumber("Enter the Number "));
}
