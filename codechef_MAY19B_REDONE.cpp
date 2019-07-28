/**
 @Author -> saurabhP
**/

#include <iostream>
#include <vector>

typedef long long int lld;
typedef unsigned long long ull;

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

int main(){
    // fast();
    lld T, n, mod = 1000000007;
    cin >> T;

    vector <lld> arr (1000001);
    arr[0] = 1;
    arr[1] = 2;

    for (int i = 3; i < 1000001; i++){
        arr[i - 1] = (arr[i - 2] * i) % mod;
    }

    while(T--){
        // Code here
        cin >> n;

        if (n == 1){
            cout << arr[0];
        }
        else{
            cout << arr[n] - 1;
        }
        cout << "\n";
    }

    return 0;
}
