#include <iostream>
#include <vector>

using namespace std;

#define read(arr, n) for (int i = 1; i <= n; i++) cin >> arr[i];
#define print(arr, n) for (int i = 1; i <= n; i++) cout << arr[i] << " ";
#define copy_(arr2, arr, n) for (int i = 1; i <= n; i++) arr2[i] = arr[i];

typedef long long int lld;

inline void fast (){
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
}
int main(){
//    fast();

    lld t, n, sum, max_;
    cin >> t;

    while (t--){
        cin >> n;
        int arr[n + 1], inc[n + 1];

        read (arr, n);

        for (int i = 1; i <= n; i++) inc[i] = arr[i] * i;

        print (inc, n);
        cout << "\n";
    }

    return 0;
}

