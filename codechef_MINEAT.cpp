#include <iostream>

using namespace std;

int main(){
    int t, n, h, took;
    int lo, mid, hi, ans;
    cin >> t;

    while (t--){
        cin >> n >> h;
        int arr[n];

        for (int i = 0; i < n; i++) cin >> arr[i];

        lo = 0;
        hi = 1e9 + 5;
        ans = 1e9 + 5;

        while (lo <= hi){

            mid = (lo + hi) / 2;
            took = 0;

            cout << lo << " " << mid << " " << hi << "\n";

            for (int i = 0; i < n; i++){
                if (arr[i] % mid == 0) took += (arr[i] / mid);
                else took += (arr[i] / mid) + 1;
            }

            cout << "Took - > " << took << "\n";

            if (took > h){
                lo = mid + 1;
            }
            else {
                ans = min(mid, ans);
                hi = mid - 1;
            }

        }

        cout << ans << "\n";
    }
    return 0;
}
