#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int t, n;
    cin >> t;

    for (int  i = 0; i < t; i++)
    {
        int sum = 0;
        cin >> n;

        for (n; n != 0; n = n/10)
        {
            sum = sum + (n % 10);
            temp++;
        }

        cout << sum << endl;
    }

    return 0;
}
