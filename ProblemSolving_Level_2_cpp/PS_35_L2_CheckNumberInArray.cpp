
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

bool CheckNumberInArray(int arr[100], int& arrLength, int targetNumber)
{
    int foundFlag = 0;
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] == targetNumber)
        {
            foundFlag = 1;
            break;
        }
    }
    if (foundFlag)
        return 1;
    else
        return 0;
}

int main()
{
    srand((unsigned)time(NULL));
    int arr[100], arrLength, targetNumber;
    FillArrayWithRandomNumbers(arr, arrLength);
    PrintArray(arr, arrLength);
    targetNumber = ReadPositiveNumber("\nEnter Target Number... \n");
    if (!CheckNumberInArray(arr, arrLength, targetNumber))
        cout << "Your Target Number is Not Found :-( !!";
    else
        cout << "\nYour Target Number is Found: " << targetNumber << endl;
}

