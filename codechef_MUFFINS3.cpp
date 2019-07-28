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
    lld ans, T, n;
    cin >> T;

    while(T--){
        // Code here
        cin >> n;
        ans = (n / 2) + 1;

        cout << ans << "\n";
    }

    return 0;
}
