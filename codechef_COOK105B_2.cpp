/**
 @Author -> saurabhP
**/

#include <iostream>
#include <algorithm>
#include <vector>

typedef long long int lld;

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

int main(){
    fast();
    int T, n;
    cin >> T;

    while(T--){
        // Code here
        cin >> n;
        int arr[n][n];

        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                cin >> arr[i][j];
            }
        }

        bool row[n] = {false}, col[n] = {false};
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (arr[i][j] == 0){
                    row[i] = true;
                    break;
                }
            }
        }

        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (arr[j][i] == 0){
                    col[i] = true;
                    break;
                }
            }
        }

        sort (row, row + n);
        sort (col, col + n);

        if (row[0] == 0 || col[0] == 0){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }

    }

    return 0;
}
