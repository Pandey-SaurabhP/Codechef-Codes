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
    fast();
    lld T, n, m, k;
    cin >> T;

    while(T--){
        // Code here
        cin >> n;
        lld arr[n][n];

        k = 1;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < k; j++){
                cin >> arr[i][j];
            }
            k++;
        }

        for (int i = n - 2; i >= 0; i--){
            k = i;
            for (int j = 0; j <= k; j++){
                arr[i][j] += (arr[i + 1][j] > arr[i + 1][j + 1]? arr[i + 1][j]: arr[i + 1][j + 1]);
            }
        }

        cout << arr[0][0] << "\n";
    }

    return 0;
}
