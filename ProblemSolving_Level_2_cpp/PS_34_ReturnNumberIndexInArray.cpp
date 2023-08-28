
#include <iostream>
using namespace std;


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

int FindNumberIndexInArray(int arr[100], int& arrLength, int targetNumber)
{
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] == targetNumber)
            return i;
    }
    return -1;
}

int main()
{
    srand((unsigned)time(NULL));
    int arr[100], arrLength, targetNumber;
    FillArrayWithRandomNumbers(arr, arrLength);
    PrintArray(arr, arrLength);
    targetNumber = ReadPositiveNumber("\nEnter Target Number... \n");
    int positionNumber = FindNumberIndexInArray(arr, arrLength, targetNumber);
    if (positionNumber == -1)
    {
        cout << "Your Target Number is Not Found :-( !!";
    }
    else
    {
        cout << "\nTarget Number is: " << targetNumber << endl;
        cout << "Position Number in Array is: " << positionNumber << endl;
        cout << "Order Number is: " << positionNumber << endl;
    }
}

