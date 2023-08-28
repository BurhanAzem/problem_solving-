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

void PrintSumDigits(int num)
{
	int sum = 0;
	cout << "Sum Digits \n";
	while (num != 0)
	{
		sum +=  num % 10;
		num = num / 10;
	}
	cout << sum;
}

int main()
{
	PrintSumDigits(ReadPostiveNumber());
}
