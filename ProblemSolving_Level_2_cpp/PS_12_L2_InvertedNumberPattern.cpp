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


void PrintInvertedNumberPattern(int num)
{
	cout << "Inverted Number Pattern For " << num << "\n";
	for (int i = num; i > 0; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i;
		}
		cout << "\n";
	}
}

int main()
{
	PrintInvertedNumberPattern(ReadPostiveNumber());
}
