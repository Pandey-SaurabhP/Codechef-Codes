#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    int n, k, num = 0;
    cin >> n >> k;

    int t;

    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t % k == 0)
        {
            num++;
        }
    }

    cout << num;

    return 0;
}
