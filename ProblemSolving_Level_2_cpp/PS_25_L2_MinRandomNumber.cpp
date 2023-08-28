
#include <iostream>
using namespace std;
#include <limits.h>

int ReadPositiveNumber(string ms)
{
    int n;
    cout << ms << "\n";
    do {
        cin >> n;
    } while (n < 0);
    cout << "\n";
    return n;
}

int RandomNumber(int From, int To)
{
    return (rand() % (To - From + 1) + From);
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
    arrLength = ReadPositiveNumber("Enter Number of Array Elements... \n");
    for (int i = 0; i < arrLength; i++)
    {
        arr[i] = RandomNumber(1, 100);
    }
}

void PrintArray(int arr[100], int arrLength)
{
    cout << "Array Elements: ";
    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << ' ';
    }
}

void PrintMin(int arr[100], int arrLength)
{
    int min = INT_MAX;
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    cout << "\nMax Number is: " << min;
}

int main()
{
    srand((unsigned)time(NULL));
    int arr[100], arrLength;
    FillArrayWithRandomNumbers(arr, arrLength);
    PrintArray(arr, arrLength);
    PrintMin(arr, arrLength);
}

