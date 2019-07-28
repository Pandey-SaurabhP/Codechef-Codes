#include <iostream>
using namespace std;

int main()
{
    int rounds, si, ti;
    int winner = 0, lead_score = 0;

    cin >> rounds;

    for (int i = 0; i < rounds; i++)
    {
        cin >> si >> ti;

        if (si > ti)
        {
            if (lead_score < (si - ti))
            {
                lead_score = si - ti;
                winner = 1;
            }
        }

        if (ti > si)
        {
            if (lead_score < (ti - si))
            {
                lead_score = ti - si;
                winner = 2;
            }
        }
    }

    cout << winner << " " << lead_score;
    return 0;
}
