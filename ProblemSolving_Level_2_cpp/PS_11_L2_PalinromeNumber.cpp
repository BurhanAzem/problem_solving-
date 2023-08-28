#include <iostream>
using namespace std;

int ReadPostiveNumber()
{
	int num;
	do
	{
		cout << "Enter postive number ...\n";
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

void PrintIsPalindromeNumber(int num)
{
	cout << "The Number entered ";
	if (ReverseNumber(num) == num)
		cout << "palindrome number ";
	else
		cout << "not palindrome number ";
}

int main()
{
	PrintIsPalindromeNumber(ReadPostiveNumber());
}
