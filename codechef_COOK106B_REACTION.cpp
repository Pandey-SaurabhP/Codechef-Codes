/**
 @Author -> saurabhP
**/

#include <iostream>
#include <vector>
typedef long long int lld;
#define fast(k) std::ios_base::sync_with_stdio(k); std::cin.tie(k); std::cout.tie(k);
#
using namespace std;
void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

string ans;

int main(){
    fast();
    int T, r, c;
    cin >> T;

    while(T--){
        ans = "Stable\n";
        cin >> r >> c;
        int arr[r][c], adj[r][c];

        for (int i = 0; i < r; i++){
            for (int j = 0; j < c; j++){
                cin >> arr[i][j];
                adj[i][j] = 4;
            }
        }

        for (int i = 1; i < r - 1; i++){
            adj[i][0] = 3;
            adj[i][c - 1] = 3;
        }
        for (int i = 1; i < c - 1; i++){
            adj[0][i] = 3;
            adj[r - 1][i] = 3;
        }
        adj[0][0] = 2, adj[r - 1][c - 1] = 2;
        adj[0][c - 1] = 2, adj[r - 1][0] = 2;

        for (int i = 0; i < r; i++){
            for (int j = 0; j < c; j++){
                if (adj[i][j] <= arr[i][j]){
                    ans = "Unstable\n";
                    break;
                    break;
                }
            }
        }

        cout << ans;
    }

    return 0;
}
