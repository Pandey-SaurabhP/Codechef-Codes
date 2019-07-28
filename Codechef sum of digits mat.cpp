#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int num = 123456;
    int brr[6];
    int arr[6], j = 100, k = 10;

    arr[0] = num % 10;
    brr[0] = num % 10;

    for (int i = 1; i < 6; i++)
    {
        brr[i] = (num % j);
        arr[i] = (num % j) - brr[i - 1];
        arr[i] = arr[i] / k;
        k *= 10;
        j *= 10;
    }

    for (int i = 5; i > -1; i--)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

