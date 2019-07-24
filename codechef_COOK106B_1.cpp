/**
 @Author -> saurabhP
**/

#include <iostream>
#include <algorithm>

typedef long long int lld;

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

int main(){
    // fast();
    int T, n;
    cin >> T;

    while(T--){
        // Code here
        cin >> n;
        int arr[n], diff1, diff2;
        int exp1[n], exp2[n];

        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        diff1 = arr[1]- arr[0];
        diff2 = arr[n - 1] - arr[n - 2];

        exp1[0] = arr[0];
        exp2[n - 1] = arr[n - 1];

        for (int i = 1; i < n; i++){
            exp1[i] = exp1[i - 1] + diff1;
        }

        for (int i = n - 2; i >= 0; i--){
            exp2[i] = exp2[i + 1] - diff2;
        }

//        for (int i = 0; i < n; i++){
//            cout << exp1[i] << " ";
//        }
//        cout << "\n";
//
//        for (int i = 0; i < n; i++){
//            cout << exp2[i] << " ";
//        }
//        cout << "\n";

        int c1 = 0, c2 = 0;
        for (int i = 0; i < n; i++){
            if (exp1[i] != arr[i]){
                c1++;
                if (c1 > 1){
                    break;
                }
            }

            if (exp2[i] != arr[i]){
                c2++;
                if (c2 > 1){
                    break;
                }
            }
        }

        if (c1 > 1){
            for (int i = 0; i < n; i++){
                cout << exp2[i] << " ";
            }
            cout << "\n";
            continue;
        }
        else if (c2 > 1){
            for (int i = 0; i < n; i++){
                cout << exp1[i] << " ";
            }
            cout << "\n";
            continue;
        }

        for (int i = 0; i < n; i++){
            cout << exp1[i] << " ";
        }
        cout << "\n";

    }

    return 0;
}
