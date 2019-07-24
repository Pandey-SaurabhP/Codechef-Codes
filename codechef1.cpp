#include <bits/stdc++.h>
using namespace std ;

int Max(int k, int l)
{
    if(k > l)
        {
            return 1;
        }
        if(k < l)
        {
            return 2;
        }
        else if(k == l)
        {
            return 0;
        }
}
int main()
{
    int t, a, b, n, k, l;
    cin >> t;
    for(int i = 0 ; i < t; i++)
    {
        cin >> a >> b >> n;
        k = pow(a, n);
        l = pow(b, n);
        cout << Max(k, l);
    }
    return 0 ;
}
