#include <iostream>
#include <cstdio>

using namespace std;

bool store(int arr[], int arr2[], int n)
{
    int k = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            arr[k] = arr2[i] * arr2[j];
            k++;
        }
    }

    for(int i = 0; i < n * n; i++)
    {
        if(arr[i] == arr2[i])
        {
            return true;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);

    int T, n;
    cin >> T;

    while (T--)
    {
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int arr2[n * n];

        if (store(arr2, arr, n) == true)
        {
            cout << "yes\n";
        }

        else
        {
            cout << "no\n";
        }
    }

    return 0;
}
