/**
 @Author -> saurabhP
**/

#include <iostream>
#include <algorithm>

#define read(arr, n) for(int i = 0; i < n; i++) std::cin >> arr[i];
#define print(arr, n) for(int i = 0; i < n; i++) std::cout << arr[i] << " ";

typedef long long int lld;

using namespace std;

struct dish{
    int d;
    int v;
};

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

bool compare (dish a, dish b){
    if (a.v > b.v){
        return true;
    }
    return false;
}

int main(){
    fast();
    lld T, n, m, MAX, day, ans;
    cin >> T;

    while(T--){
        // Code here
        cin >> n >> m;
        dish arr[n];
        ans = 0;

        for (int i = 0; i < n; i++){
            cin >> arr[i].d >> arr[i].v;
        }

        sort (arr, arr + n, compare);

        ans += arr[0].v;

        MAX = -1;
        day = arr[0].d;
        for (int i = 1; i < n; i++){
            if (arr[i].v > MAX){

                if (day == arr[i].d) continue;
                else{
                    MAX = arr[i].v;
                    day = arr[i].d;
                }
            }
        }

        ans += MAX;

        cout << ans << "\n";

    }

    return 0;
}
