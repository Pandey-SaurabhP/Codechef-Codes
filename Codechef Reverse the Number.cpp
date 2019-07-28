#include <iostream>

using namespace std;

void store(int n, int arr[])
{
    for(int i = 0; i < 6; i++)
    {
        arr[i] = 11;
    }

    int i = 0;

    while(n >= 1)
    {
        arr[i] = n % 10;
        n /= 10;
        i++;
    }
}

void print(int arr[])
{
    int i;
    for (i = 0; i < 6; i++)
    {
        if(arr[i] == 0)
        {
            continue;
        }

        else
        {
            break;
        }
    }

    for (i; i < 6; i++)
    {
        if (arr[i] == 11)
        {
            continue;
        }

        cout << arr[i];
    }
    cout << endl;
}

int main()
{
    int T;
    cin >> T;

    while(T--)
    {
        int n, arr[6];
        cin >> n;

        store(n, arr);
        print(arr);
    }

    return 0;
}
