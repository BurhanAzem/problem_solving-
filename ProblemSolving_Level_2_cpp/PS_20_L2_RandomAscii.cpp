
#include <iostream>
#include "PS_20_L2_RandomAscii.h"
using namespace std;

enum enAscii {
    SMALL_LETTER,
    CAPITAL_LETTER,
    SPECIAL_LETTER,
    DIGIT
};

int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

char RandomAscii(enAscii ascii)
{
    char ch;
    switch (ascii)
    {
    case SMALL_LETTER:
        ch = char(RandomNumber(97, 122));
        break;
    case CAPITAL_LETTER:
        ch = char(RandomNumber(65, 90));
        break;
    case SPECIAL_LETTER:
        ch = char(RandomNumber(32, 47));
        break;
    case DIGIT:
        ch = char(RandomNumber(48, 57));
        break;
    }
    return ch;
}

int main()
{
    srand((unsigned)time(NULL));

    cout<< RandomAscii(enAscii::SMALL_LETTER) << endl;
    cout<< RandomAscii(enAscii::CAPITAL_LETTER) << endl;
    cout<< RandomAscii(enAscii::SPECIAL_LETTER) << endl;
    cout<< RandomAscii(enAscii::DIGIT) << endl;

}

