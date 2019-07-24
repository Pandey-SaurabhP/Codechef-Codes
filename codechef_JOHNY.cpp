/**
 @Author -> saurabhP
**/

#include <iostream>

typedef long long int lld;

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

int main(){
    fast();
    int T, n, k, ll, small;
    cin >> T;

    while(T--){
        // Code here
        cin >> n;
        int arr[n];
        small = 0;

        for (int i = 1; i <= n; i++){
            cin >> arr[i];
        }

        cin >> k;
        ll = arr[k];

        for (int i = 1; i <= n; i++){
            if (arr[i] < ll) small++;
        }

        cout << small + 1 << "\n";
    }

    return 0;
}
