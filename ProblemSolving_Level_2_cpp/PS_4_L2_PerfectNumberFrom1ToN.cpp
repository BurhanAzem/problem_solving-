#include <iostream>
using namespace std;

bool CheckPerfectNumber(int num)
{
	int sum = 0;
	for (int i = 1; i < num; i++)
	{
		if (num % i == 0)
			sum += i;
	}
	if (sum == num)
		return true;
	else
		return false;
}

void PerfectNumberFrom1ToN(int num)
{
	cout << "All perfect number from 1 to " << num << "\n";
	for (int i = 1; i < num; i++)
	{
		if(CheckPerfectNumber(i))
			cout << i << "\n";

	}
}

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

int main()
{
	PerfectNumberFrom1ToN(ReadPostiveNumber());
}









