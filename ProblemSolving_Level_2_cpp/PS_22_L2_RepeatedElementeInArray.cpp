// PS_22_L2_RepetedElementeInArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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

void PrintArray(int arr[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\t" << arr[i] << "\t";
    }
    cout << endl;
}

void ReadArray(int arr[100], int & arrLength)
{
    cout << "Enter Number Of Elements ..." << "\n";
    cin >> arrLength;
    cout << "\nEnter Elements Array ..." << "\n";
    for (int i = 0; i < arrLength; i++)
    {
        cout << "Array[" << i << "]: ";
        cin >> arr[i];
        cout << endl;
    }
}

int RepeatedTimes(int arr[100], int num, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
            count++;
    }
    return count;
}

int main()
{
    int arr[100], arrLength, numberToCheck;

    ReadArray(arr, arrLength);

    cout << "Original Elements";
    PrintArray(arr, arrLength);

    numberToCheck = ReadPositiveNumber("Enter The Number You Want To Check");

    cout << "Reapeated Times For  " << numberToCheck << " is \n";
    cout << RepeatedTimes(arr, numberToCheck, arrLength);

}

