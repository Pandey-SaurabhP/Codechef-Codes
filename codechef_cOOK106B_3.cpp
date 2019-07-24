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

int main(){
    fast();
    lld T, l, r, g, val;
    cin >> T;

    while(T--){
        // Code here
        cin >> l >> r >> g;
        val = (r - l) / g;

        if (l % g == 0 || r % g == 0){
            val++;
        }

        if (l == r){
            val = 0;
            val += (l % g == 0? 1: 0);
        }
        cout << val << "\n";
    }

    return 0;
}
