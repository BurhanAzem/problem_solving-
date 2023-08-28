
#include <iostream>
#include <cstdlib>

using namespace std;

int RandomNumber(int From, int To)
{
    return (rand() % (To - From + 1) + From);
}


int main()
{
    srand((unsigned)time(NULL));
    cout << RandomNumber(50, 100) << endl;
    cout << RandomNumber(50, 100) << endl;
    cout << RandomNumber(50, 100) << endl;
}
