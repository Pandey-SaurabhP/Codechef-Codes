#include <iostream>
#include <cmath>

using namespace std;

int find_distance (int x1, int x2, int y1, int y2)
{
    return ((x2 - x1) * (x2 - x1) +
            (y2 - y1) * (y2 - y1));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, R;
    int C1, C2, H1, H2, sC1, sC2;

    cin >> T;

    while (T--)
    {
        cin >> R;

        cin >> C1 >> C2;
        cin >> H1 >> H2;
        cin >> sC1 >> sC2;

        if ((find_distance(C1, C2, H1, H2) <= R * R &&
            find_distance(H1, H2, sH1, sH2) <= R * R) ||
            (find_distance(sH1, sH2, C1, C2) <= R * R&&
            find_distance(H1, H2, sH1, sH2) <= R * R))
    }
    return 0;
}
