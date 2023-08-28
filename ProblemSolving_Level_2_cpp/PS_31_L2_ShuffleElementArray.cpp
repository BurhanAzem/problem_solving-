
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

void FillArrayFromNumber1ToN(int arr[100], int& arrLength)
{
    arrLength = ReadPositiveNumber("Enter Number of Array Elements... \n");
    for (int i = 0; i < arrLength; i++)
    {
        arr[i] = i + 1;
    }
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << ' ';
    }
}

void Swap(int& A, int& B)
{
    int temp = A;
    A = B;
    B = temp;
}


void ShuffleArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        Swap(arr[RandomNumber(0, arrLength) - 1], arr[RandomNumber(0, arrLength) - 1]);
    }
}




int main()
{
    srand((unsigned)time(NULL));
    int arr[100], arrLength;
    FillArrayFromNumber1ToN(arr, arrLength);
    cout << "Elements Of Array Befor Shuffle: ";
    PrintArray(arr, arrLength);
    ShuffleArray(arr, arrLength);
    cout << "\nElements Of Array After Shuffle: ";
    PrintArray(arr, arrLength);

}

