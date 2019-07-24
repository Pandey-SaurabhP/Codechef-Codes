#include <iostream>
#include <climits>

using namespace std;

inline int MAX (int arr[], int n)
{
    int max_ = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max_ < arr[i])
        {
            max_ = arr[i];
        }
    }
    return max_;
}

int main()
{
    int n, si, ti;
    cin >> n;
    int scores[n];

    for (int i = 0; i < n; i++)
    {
        cin >> si >> ti;

        if (si > ti)
        {
            scores[i] = si - ti;
        }

        else
        {
            scores[i] = ti - si;
        }

    }
    cout << MAX (scores, n);

    return 0;
}
