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



void FrequencyDigit(int digit, int num)
{
	int count = 0;
	cout << "Frequency for the Digit " << digit << " in the number  num " << num << " time(s)\n";
	while (num != 0)
	{
		if (num % 10 == digit)
			count++;
		num = num / 10;
	}
	cout << count << "\n";
}

void PrintDigitFrequencyForAllDigits(int num_in)
{
	int num = num_in;
	int n = 0;
	vector<int> digits;
	// turn number to array of digits
	while (num > 0) {
		digits.insert(digits.begin(), num % 10); 
		num /= 10; 
	}
	// extract uniqe numbers from th array  || or || you can this problem through itrating from 0 to 9
	int j, i = 0;
	for (; i < digits.size(); i++)
	{
		for(j = 0; j < i; j++)
		{
			if (digits[i] == digits[j])
				break;
		}
		if(i == j)
			FrequencyDigit(digits[i], num_in);
	}
}

int main()
{
	PrintDigitFrequencyForAllDigits(ReadPostiveNumber("Enter the Number "));
}
