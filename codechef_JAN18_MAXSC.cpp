/**
 @Author -> saurabhP
**/

#include <iostream>
#include <algorithm>
#include <vector>

typedef long long int lld;

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

int main(){
    // fast();
    lld T, n, ans, sel, k;
    bool pos;
    cin >> T;

    while(T--){
        // Code here
        cin >> n;
        int arr[n][n];

        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                cin >> arr[i][j];
            }
            sort (arr[i], arr[i] + n);
        }

        ans = arr[n - 1][n - 1];
        sel = ans;

        for (int i = n - 2; i >= 0; i--){
            k = n - 1;
            pos = true;
            while (k >= 0){
                if (arr[i][k] < sel){
                    ans += arr[i][k];
                    sel = arr[i][k];
                    pos = true;
                    break;
                }
                else{
                    pos = false;
                }
                k--;
            }
            if (!pos) break;
        }

        if (!pos) cout << "-1\n";
        else cout << ans << "\n";
    }

    return 0;
}
