
#include <iostream>
using namespace std;

bool CheckPrimeNumber(int num)
{
	int flag = 1;
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
			flag = 0;
	}
	if (flag == 0)
		return false;
	else
		return true;
}

void PrintAllPrimeNumberFrom1ToN(int num)
{
	cout << "All prime numbers from 1 to num \n";
	for (int i = 1; i <= num; i++)
	{
		if (CheckPrimeNumber(i))
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
	PrintAllPrimeNumberFrom1ToN(ReadPostiveNumber());
}

