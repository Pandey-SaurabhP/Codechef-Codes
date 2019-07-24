/**
 @Author -> saurabhP
**/

#include <iostream>

#define read(arr, n) for(int i = 0; i < n; i++) std::cin >> arr[i];
#define print(arr, n) for(int i = 0; i < n; i++) std::cout << arr[i] << " ";

typedef long long int lld;

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

lld mod = 1e9 + 7;

int main(){
    // fast();
    lld T, n, k, st, ed, LCM, ans, form, n2, d;
    cin >> T;


    while(T--){
        // Code here
        cin >> n >> k;
        st = k;
        ed = k + n - 1;

        LCM = st * ed;

        n2 = (LCM - ed) / st;
        ans = (((n2 * n2) + (3 * n2)) / 2) - n2;

        ans %= mod;

        cout << ans << "\n";
    }

    return 0;
}
