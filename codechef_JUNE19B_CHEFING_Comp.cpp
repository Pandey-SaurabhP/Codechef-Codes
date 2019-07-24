/**
 @Author -> saurabhP
**/

#include <iostream>
#include <vector>

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
    lld T, n, k, d, a, nn, Sn;
    const lld an = 0;
    cin >> T;

    while(T--){
        // Code here
        cin >> n >> k;

        a = k - 1;
        d = -(n - 1);

        nn = (an - a + d) / d;

        Sn = (nn * ((2 * a) + ((nn - 1) * d)));
        Sn /= 2;
//        cout << "A, D -> " << a << " " << d << "\n";
//        cout << "N -> " << nn << "\n";

        cout << Sn % mod << "\n";
    }

    return 0;
}
