/**
 @Author -> saurabhP
**/

#include <iostream>
#include <cmath>
#include <algorithm>

typedef long long int lld;

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

int main(){
    fast();
    int T, n, m, end_, ans;
    string posb;
    cin >> T;

    while(T--){
        // Code here
        cin >> n >> m;
        int arr[n];

        for (int i = 0; i < n; i++) cin >> arr[i];

        sort (arr, arr + n);

        for (int i = 0; i < n; i++){
            end_ = i;
            if (arr[i] > m) break;
        }

        posb = "No\n";
        unsigned int opsize = pow(2, n);

        /* Run from counter 000..1 to 111..1*/
        for (int counter = 1; counter < opsize; counter++)
        {
            ans = 0;
            for (int j = 0; j <= end_; j++)
            {
                /* Check if jth bit in the counter is set
                    If set then print jth element from arr[] */
                if (counter & (1 << j)) ans += arr[j];
            }
            if (ans == m){
                posb = "Yes\n";
                break;
            }
        }

        cout << posb;
    }

    return 0;
}
