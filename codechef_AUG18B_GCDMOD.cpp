/**
 @Author -> saurabhP
**/

#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>
#include <vector>

typedef long long int lld;
typedef int128_t el;

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

int GCD (lld a, lld b){
    if (a == 0){
        return b;
    }

    return GCD (b % a, a);
}

lld mod = 1e9 + 7;

int power(lld x, lld y)
{
    lld res = 1;
    x = x % mod;

    while (y > 0)
    {
        if (y & 1){
            res = (res * x) % mod;
        }

        y = y >> 1;
        x = (x * x) % mod;
    }
    return res;
}

int main(){
    // fast();
    lld T, a, b, n, dif, res, gcd, k, l;
    cin >> T;

    while(T--){
        // Code here
        cin >> a >> b >> n;
        k = a;
        l = b;

        dif = a - b > 0? a - b: b - a;

        k = power (a, n);
        l = power (b, n);

        res = (k + l) % mod;

        if (a == b){
            cout << res << "\n";
            continue;
        }

        k = min(res, dif);
        l = max (res, dif);

        gcd = GCD(k, l);
        cout << gcd << "\n";
    }

    return 0;
}
