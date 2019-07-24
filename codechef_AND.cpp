/**
 @Author -> saurabhP
**/

#include <iostream>
#include <cmath>

typedef long long int lld;

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

lld CountBit[35] = {0};

void countBit(int n){
    lld k = 0, m = 0;
    bool bit[35] = {0};

    while (n > 0){
        bit[k] = n % 2;
        n /= 2;

        if (bit[k] == 1){
            CountBit[k]++;
        }
        k++;
    }
}

int main(){
    fast();
    lld n, ans = 0;
    cin >> n;

    lld arr[n];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
        countBit(arr[i]);
    }

    for (int i = 0; i < 35; i++){
        ans += (pow(2, i) * ((CountBit[i] * (CountBit[i] - 1)) / 2));
    }

    cout << ans;

    return 0;
}
