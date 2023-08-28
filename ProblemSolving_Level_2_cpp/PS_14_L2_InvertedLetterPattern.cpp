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


void PrintInvertedLetterPattern(int num)
{
	cout << "Inverted Letter Pattern For " << num << "\n";
	for (int i = 65 + num - 1; i >= 65; i--)
	{
		for (int j = 0; j < i - 65 + 1; j++)
		{
			cout << char(i);
		}
		cout << "\n";
	}
}

int main()
{
	PrintInvertedLetterPattern(ReadPostiveNumber());
}
