/**
 @Author -> saurabhP
**/

#include <iostream>
#include <climits>

typedef long long int lld;

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

int main(){
    fast();
    int T, n, min_, k;
    cin >> T;

    while(T--){
        // Code here
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++) cin >> arr[i];

        min_ = INT_MAX;

        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (i == j) continue;
                k = (arr[i] - arr[j]) > 0? (arr[i] - arr[j]): -(arr[i] - arr[j]);
                if (k < min_) min_ = k;
            }
        }

        cout << min_ << "\n";
    }

    return 0;
}
