#include <iostream>
#include <cstdio>

#define REP(i, count) for (int i = 0; i < count; i++)

using namespace std;

int main()
{
    string str;
    char sign[200];
    int j = 0;

    REP(i, 200)
    {
        sign[i] = ' ';
    }

    cin >> str;
    REP(i, str.size())
    {
        if (str[i] == '+' || str[i] == '*' || str[i] == '/' || str[i] == '-' || str[i] == '^')
        {
            cout << 'Q';
        	sign[j] = str[i];
        	j++;
        }

        else if (str[i] == '(')
        {
            cout << 'W';
            continue;
        }

        else if (str[i] == ')')
        {
            cout << 'E';
        	cout << sign[j];
        	j--;
        }

        else
        {
            cout << 'R';
        	cout << str[i];
        }
    }

	return 0;
}
