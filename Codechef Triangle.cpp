#include <iostream>

using namespace std;

int main()
{
    int T;
    int a, b, c;

    cin >> T;

    while(T != 0)
    {
        cin >> a >> b >> c;
        if (a + b + c == 180 && a != 0 && b != 0 && c != 0)
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }

        T--;

    }


    return 0;
}
