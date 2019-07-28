/**
 @Author -> saurabhP
**/

#include <iostream>
#include <vector>

typedef long long int lld;

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

int gcd(int a, int b){
    if (a == 0) return b;
    return gcd(b % a, a);
}

int main(){
    // fast();
    lld T, n, m, k, ans, min_, max_;
    cin >> T;

    while(T--){
        // Code here
        cin >> n >> m >> k;

        min_ = min(n, k);
        max_ = max(n, k);
        if (gcd(min_, max_) > 1){
            cout << -1 << "\n";
            continue;
        }

        min_ = min(m, k);
        max_ = max(m, k);
        if (gcd(min_, max_) > 1){
            cout << -1 << "\n";
            continue;
        }

        ans = n * m;
        cout << ans << "\n";
    }

    return 0;
}
