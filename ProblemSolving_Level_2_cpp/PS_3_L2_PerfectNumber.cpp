
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

void PrintResult(int num)
{
	if (CheckPerfectNumber(num))
		cout << num << " is perfect\n";	
	else
		cout << num << " is not perfect\n";
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
	PrintResult(ReadPostiveNumber());
}









