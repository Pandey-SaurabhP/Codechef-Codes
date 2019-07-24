/**
 @Author -> saurabhP
**/

#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>

typedef long long int lld;

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

int kad (int arr[], int n){
    int cur, glob;
    cur = glob = arr[0];

    for (int i = 1; i < n; i++){
        cur = max (arr[i], arr[i] + cur);

        if (cur > glob){
            glob = cur;
        }
    }

    return glob;
}

int main(){
    fast();
    lld T, n, k, lm, ans;
    float ans2;
    cin >> T;

    while(T--){
        // Code here
        cin >> n >> k;
        int arr[n + n];

        ans = 0;

        for (int i = 0; i < n; i++){
            cin >> arr[i];
            arr[n + i] = arr[i];
        }

        ans = kad(arr, n + n);

        if (k % 2 == 0) ans *= (k / 2);
        else {
            ans2 = ans / 2;
            ans = ans2 * k;
        }

        cout <<  ans << "\n";
    }

    return 0;
}
