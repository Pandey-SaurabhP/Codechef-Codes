/**
 @Author -> saurabhP
**/

#include <iostream>
#include <vector>

#define read(arr, n) for(int i = 0; i < n; i++) std::cin >> arr[i];
#define print(arr, n) for(int i = 0; i < n; i++) std::cout << arr[i] << " ";

typedef long long int lld;

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

int main(){
    fast();
    int T, n, ans;
    cin >> T;

    string s, u;

    while(T--){
        // Code here
        ans = 0;

        cin >> n;
        cin >> s >> u;

        for (int i = 0; i < n; i++){
            if (u[i] == 'N') continue;
            else if (s[i] == u[i]){
                ans++;
            }
            else if (s[i] != u[i]){
                i++;
            }
        }

        cout << ans << "\n";

    }

    return 0;
}
