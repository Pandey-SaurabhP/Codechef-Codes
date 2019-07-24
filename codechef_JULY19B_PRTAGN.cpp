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

bool countSetBits (int x){
    int cnt = 0;

    while (x > 0){
        if (x & 1) cnt++;
        x = x >> 1;
    }

    if (cnt % 2 == 0) return true;
    return false;
}

int main(){
    fast();
    lld T, x, q, odd, even, tmp1, tmp2;

    cin >> T;

    while(T--){
        // Code here
        cin >> q;

        odd = even = 0;

        while (q--){
            cin >> x ;

            if (countSetBits(x)){
                even += even;
                odd += odd;
                even++;
            }
            else {
                tmp1 = even;
                tmp2 = odd;

                odd += tmp1;
                even += tmp2;

                odd++;
            }

            cout << even << " " << odd << "\n";
        }
    }

    return 0;
}
