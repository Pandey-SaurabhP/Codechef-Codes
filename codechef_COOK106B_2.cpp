/**
 @Author -> saurabhP
**/

#include <iostream>
#include <vector>

typedef long long int lld;

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

int main(){
    // fast();

    int T, r, c;
    string ans = "Stable";
    cin >> T;

    while(T--){
        // Code here
        cin >> r >> c;
        int arr[r][c];
        int rc[r][c];
        ans = "Stable\n";

        for (int i = 0; i < r; i++){
            for (int j = 0; j < c; j++){
                rc[i][j] = 4;
            }
        }

        for (int i = 1; i < r - 1; i++){
            rc[i][0] = 3;
            rc[i][c - 1] = 3;
        }

        for (int i = 1; i < c - 1; i++){
            rc[0][i] =  3;
            rc[r - 1][i] = 3;
        }

        rc[0][0] = 2;
        rc[r - 1][c - 1] = 2;
        rc[0][c - 1] = 2;
        rc[r - 1][0] = 2;

        for (int i = 0; i < r; i++){
            for (int j = 0; j < c; j++){
                cin >> arr[i][j];
            }
        }

//        for (int i = 0; i < r; i++){
//            for (int j = 0; j < c; j++){
//                cout << rc[i][j] << " ";
//            }
//            cout << "\n";
//        }

        for (int i = 0; i < r; i++){
            for (int j = 0; j < c; j++){
                if (arr[i][j] >= rc[i][j]){
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
