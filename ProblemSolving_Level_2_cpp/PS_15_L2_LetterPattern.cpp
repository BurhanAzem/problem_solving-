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


void PrintLetterPattern(int num)
{
	cout << "Letter Pattern For " << num << "\n";
	for(int i = 65; i < 65 + num; i ++)
	{
		for (int j = 0; j <= i - 65; j++)
		{
			cout << char(i);
		}
		cout << "\n";
	}
}

int main()
{
	PrintLetterPattern(ReadPostiveNumber());
}
