
#include <iostream>
using namespace std;


int ReadPositiveNumber(string ms)
{
    int n;
    cout << ms <<"\n";
    do {
        cin >> n;
    } while (n < 0);
    cout << "\n";
    return n;
}

int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

char RandomCapitalLetter()
{
    return char(RandomNumber(65, 90));
}


string GenerateWord()
{
    string word = "";
    for (int j = 0; j < 4; j++)
    {
        word += RandomCapitalLetter();
    }
    return word;
}

string GenerateKey()
{
    string st = "";
    for (int i = 0; i < 4; i++)
    {
        st += GenerateWord();
        if(i != 3)
            st += '-';
    }
    return st;
}

void GenerateSetOfKeys(int n, string arr[100])
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = GenerateKey();
    }
}

void PrintArray(int arrLength, string arr[100])
{
    for (int i = 0; i < arrLength; i++)
    {
        cout << "Key [" << i + 1 << "]: " << arr[i] << "\n";
    }
}

int main()
{
    string arr[100];
    int arrLength = ReadPositiveNumber("Enter Number Of Keys You Want ..");
    GenerateSetOfKeys(arrLength, arr);
    PrintArray(arrLength, arr);
}

