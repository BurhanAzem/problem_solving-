
#include <iostream>
using namespace std;

string ReadPassword()
{
    string password;
    cout << "Please Enter Your Password ...\n";
    cin >> password;
    return password;
}

bool GussePassword(string password)
{
    int count = 0;
    string in_password = "";
    for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <= 90; j++)
        {
            for (int k = 65; k <= 90; k++)
            {
                in_password = in_password + char(i);
                in_password = in_password + char(j);
                in_password = in_password + char(k);
                cout << "Trail number [" << count << "]:" << in_password << "\n";
                if (password == in_password)
                {
                    cout << "Your password -> " << password << "\n";
                    cout << "Founded after " << count << " trail";
                    return true;
                }
                count++;
                in_password = "";
            }
        }
    }
}
int main()
{
    GussePassword(ReadPassword());
    return 0;
}

