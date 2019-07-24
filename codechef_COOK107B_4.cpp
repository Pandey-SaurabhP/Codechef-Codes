/**
 @Author -> saurabhP
**/

#include <iostream>
#include <vector>

#define read(arr, n) for(int i = 0; i < n; i++) std::cin >> arr[i];
#define print(arr, n) for(int i = 0; i < n; i++) std::cout << arr[i] << " ";

typedef long long int lld;

using namespace std;

struct user {
    int fav, buyF, buyO;
    bool served;
};

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

int main(){
    // fast();
    lld T, n, m, ans;
    cin >> T;

    while(T--){
        // Code here
        ans = 0;

        cin >> n >> m;

        lld stock[m + 1] = {0};

        for (int i = 1; i <= m; i++){
            cin >> stock[i];
        }

        user arr[n];

        for (int i = 0; i < n; i++){
            cin >> arr[i].fav >> arr[i].buyF >> arr[i].buyO;
            arr[i].served = false;
        }

        for (int i = 0; i < n; i++){
            if (stock[arr[i].fav] > 0){

                arr[i].served = true;
                ans += arr[i].buyF;
                stock[arr[i].fav]--;

            }
            else {
                ans += arr[i].buyO;
            }
        }

        cout << ans << "\n";

        int j = 0;
        for (int i = 0; i < n; i++){
            if (arr[i].served){
                cout << arr[i].fav << " ";
            }
            else {
                j = 0;

                while (stock[j] == 0){
                    j++;
                }

                stock[j]--;
                cout << j << " ";
            }

        }
    }

    return 0;
}
