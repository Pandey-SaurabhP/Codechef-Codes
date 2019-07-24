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

int main(){
    // fast();
    int T, n, k, avg, sum, ans, sec;
    cin >> T;

    while(T--){
        // Code here
        cin >> n >> k >> avg;
        int arr[n];

        read(arr, n);

        sum = 0;

        for (int i = 0; i < n; i++){
            sum += arr[i];
        }

        ans = ((avg * (n + k)) - sum) / (k);
        sec = (sum + (k * ans)) / n + k;

        if (ans >= 0 && sec == avg) cout << ans << endl;
        else cout << -1 << endl;

    }

    return 0;
}
