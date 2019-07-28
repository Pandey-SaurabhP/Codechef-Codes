#include <iostream>

using namespace std;

int MAX(int a, int b, int c)
{
    if(a > b && a < c)
    {
        return a;
    }
    else if(b > a && b < c)
    {
        return b;
    }
    else if(c > a && c < b)
    {
        return c;
    }
}

int main()
{
    int T, a, b, c;
    cin >> T;
    for(int i = 0; i < T; i++)
    {
        cin >> a >> b >> c;
        cout << MAX(a, b, c) << endl;
    }
    return 0;
}
