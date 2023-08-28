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

void PrintInReversedOrder(int num)
{
	cout << "Number in reversed order \n";
	while (num != 0)
	{
		cout << num % 10 << "\n";
		num = num / 10;
	}
}

int main()
{
	PrintInReversedOrder(ReadPostiveNumber());
}

