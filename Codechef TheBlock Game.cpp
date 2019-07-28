#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while(T != 0)
    {
        string INT;
        string c = "NO";
        cin >> INT;

        int m = (INT.size() / 2);
        int j = INT.size() - 1;

        for(auto i = 0; i <= m; i++)
        {
            if(INT[i] == INT[j])
            {
                c = "wins";
                j--;
            }

            else
            {
                c = "losses";
                break;
            }
        }
        cout << c << endl;
        T--;
    }
    return 0;
}
