/**
 @Author -> saurabhP
**/

#include <iostream>
#include <cmath>

#define read(arr, n) for(int i = 0; i < n; i++) std::cin >> arr[i];
#define print(arr, n) for(int i = 0; i < n; i++) std::cout << arr[i] << " ";

typedef long long int lld;

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

lld mod = 1e9 + 7;

lld modExp (lld n){
    int base = 2;
    lld ans;

    if (n == 0) return 1;

    if (n % 2 == 0){
        ans = modExp(n / 2);
        return (ans * ans) % mod;
    }
    else {
        return (base * modExp(n - 1)) % mod;
    }
}

int main(){
    // fast();
    lld T, n, ans;
    cin >> T;

    while(T--){
        // Code here
        cin >> n;
        ans = modExp(n - 1);
        ans = (ans * 10) % mod;

        cout << ans << "\n";
    }

    return 0;
}
