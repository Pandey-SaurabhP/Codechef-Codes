#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int withd;
    float bal;
    cin >> withd >> bal;

    if ((withd + 0.5) <= bal)
    {
        if (withd % 5 != 0)
        {
            cout << fixed << setprecision(2) << bal;
        }

        else
        {
            bal = bal - withd - 0.5;
            cout << fixed << setprecision(2) << bal;
        }
    }
    else
    {
        cout << fixed << setprecision(2) << bal;
    }

    return 0;
}
