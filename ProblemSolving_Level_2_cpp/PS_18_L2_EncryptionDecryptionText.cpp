// PS_18_L2_EncryptionDecryptionName.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "PS_18_L2_EncryptionDecryptionText.h"
using namespace std;

string ReadText()
{
    cout << "Please Enter Text ...\n";
    string text;
    cin >> text;
    return text;
}

string EncryptionText(string text, int encryptionKey)
{
    for (int i = 0; i < text.size(); i++)
    {
        text[i] = char(text[i] + encryptionKey);
    }
    return text;
}


string DecryptionText(string text, int encryptionKey)
{
    for (int i = 0; i < text.size(); i++)
    {
        text[i] = char(text[i] - encryptionKey);
    }
    return text;
}

int main()
{
    const short EncryptionKey = 5;
    string Text = ReadText();
    string TextAfterEncryption = EncryptionText(Text, EncryptionKey);
    string TextAfterDecryption = DecryptionText(TextAfterEncryption, EncryptionKey);
    cout << "Text Befor Encryption " << Text << "\n";
    cout << "Text After Encryption " << TextAfterEncryption << "\n";
    cout << "Text After Decryption " << TextAfterDecryption << "\n";
}

