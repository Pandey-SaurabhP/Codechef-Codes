/**
 @Author -> saurabhP
**/

// Using Brute Force

#include <iostream>
#include <vector>

typedef long long int lld;

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

int main(){
    fast();
    int T, g, n, i, q, ans;
    cin >> T;

    while(T--){
        // Code here
        cin >> g;

        while (g--){
            cin >> i >> n >> q;

            if (n % 2 != 0){
                if (q == 1){
                    if (i == 1) ans = n / 2;
                    else ans = (n / 2) + 1;
                }
                else {
                    if (i == 2) ans = n / 2;
                    else ans = (n / 2) + 1;
                }
            }
            else ans = n / 2;

            cout << ans << "\n";
        }
    }

    return 0;
}
