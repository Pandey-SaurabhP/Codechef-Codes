#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int j = 0;
    char a[200] = {0};
    cin >> s;

    for (int i = 0; i != s.size(); i++)
    {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            a[j] = s[i];
            j++;
            continue;
        }
        else
        {
            if (s[i] == ')')
            {
                cout << a[j];
                a[j] = '0';
                j--;
                continue;
            }
            if (s[i] == '(')
            {
                continue;
            }
            else
            {
                cout << s[i];
            }
        }
    }

    return 0;
}
