/**
 @Author -> saurabh59373
**/

#include <iostream>
#include <vector>

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

int main(){
    fast();
    int T, n, k, v;
    cin >> T;

    while(T--){
        // Code here
        cin >> n >> k >> v;
        int arr[n];

        double targMean = 0;
        for (int i = 0; i < n; i++){
            cin >> arr[i];
            targMean += arr[i];
        }

        int ans = ((v * (n + k)) - targMean) / k;
        int v2 = (targMean + (k * ans)) / (n + k);

        if (v2 == v && ans > 0){
            cout << ans;
        }
        else{
            cout << -1;
        }

        cout << "\n";
    }
    return 0;
}
