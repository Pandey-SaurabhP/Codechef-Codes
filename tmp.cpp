
#include <iostream>
#include <numeric>

using namespace std;

#define read(arr, n) for (int i = 0; i < n; i++) cin >> arr[i];
#define print(arr, n) for (int i = 0; i < n; i++) cout << arr[i] << " ";

typedef long long int lld;

inline void fast (){
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
}

bool test (lld arr[], lld n, lld testVal, lld maxHour){
    lld curHour = 0;
    lld tmp;

    for (lld i = 0; i < n; i++){
        tmp = arr[i] / testVal;
        if (arr[i] % testVal == 0){
            curHour += tmp;
        }
        else curHour += tmp + 1;
    }

    if (curHour <= maxHour) return 1;
    return 0;
}

lld search_ (lld arr[], lld n, lld maxHour){
    lld l, m, h, ans = -1;

    for (lld i = 0; i < n; i++){
        if (ans < arr[i]) ans = arr[i];
    }

    l = 1;
    h = accumulate(arr, arr + n, 0);

    while (l <= h){
        m = (l + h) / 2;
//        cout << l << " " << m << " " << h << "  ";

        if (test(arr, n, m, maxHour)){
            h = m - 1;
            ans = min(m, ans);
//            cout << "True\n";
        }
        else {
            l = m + 1;
//            cout << "False\n";
        }
    }


    return ans;
}

int main(){
    fast();

    lld t, n, h;
    cin >> t;

    while (t--){
        cin >> n >> h;
        lld arr[n];

        read (arr, n);

        cout << search_(arr, n, h) << "\n";
    }

    return 0;
}
