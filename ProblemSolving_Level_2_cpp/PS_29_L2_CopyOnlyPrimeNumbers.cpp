
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
    cout << "\nArray Elements: ";
    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << ' ';
    }
}


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

void FindAllPrimeNumbersInArray(int arr[100], int arrCopy[100], int &arrLength)
{
    int sum, j = 0;
    for (int i = 0; i < arrLength; i++)
    {
        if (CheckPrimeNumber(arr[i]))
        {
            arrCopy[j] = arr[i];
            j++;
        }
    }
    arrLength = j;
}



int main()
{
    srand((unsigned)time(NULL));
    int arr[100], arrLength;
    FillArrayWithRandomNumbers(arr, arrLength);
    PrintArray(arr, arrLength);
    int arrOfPrimeNumbers[100];
    FindAllPrimeNumbersInArray(arr, arrOfPrimeNumbers, arrLength);
    PrintArray(arrOfPrimeNumbers, arrLength);
}

