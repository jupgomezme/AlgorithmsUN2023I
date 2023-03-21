#include <iostream>
#include <string>
using namespace std;

bool checkSquareWord(string &s)
{
    int length = s.length();
    int halfLength = length / 2;
    if (length % 2 == 1)
    {
        return false;
    }
    for (int i = 0; i < halfLength; i++)
    {
        if (s[i] != s[i + halfLength])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n = 0;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;
        if (checkSquareWord(s))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
