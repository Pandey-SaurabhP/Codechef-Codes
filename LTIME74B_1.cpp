#include <iostream>
#include <vector>

using namespace std;

#define read(arr, n) for (int i = 0; i < n; i++) cin >> arr[i];
#define print(arr, n) for (int i = 0; i < n; i++) cout << arr[i] << " ";

typedef long long int lld;

inline void fast (){
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
}

int cntSum (int x){
    int ans = 0;
//    cout << "x -> " << x << "\n";
    while (x > 0){
        ans += (x % 10);
//        cout << "Ans -> " << ans << "\n";
        x = x / 10;
//        cout << "x -> " << x << "\n";
    }



    return ans;
}

int main(){
    fast();

    int t, n, k, ans, r;
    cin >> t;

    while (t--){
        cin >> n;
        int arr[n];

        read (arr, n);
        ans = 0;

        for (int i = 0; i < n - 1; i++){
            for (int j = i + 1; j < n; j++){
                k = arr[i] * arr[j];
//                cout << "k -> " << k << "\n";
                r = cntSum(k);
                if (r > ans) ans = r;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}

