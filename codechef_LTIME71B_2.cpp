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

    int T, n;
    cin >> T;

    for (int lk = 0; lk < T; lk++){
        // Code here
        cout << "Enter n: ";
        cin >> n;

        int arrA[n + 1], arrB[n + 1];
        lld cumA[n + 1], cumB[n + 1];
        lld moreThanA[n + 1], moreThanB[n + 1];

        for (int i = 1; i <= n; i++){
            cin >> arrA[i];
        }
        cout << "SS1";
        for (int i = 1; i <= n; i++){
            cin >> arrB[i];
        }
        cout << "SS1";

        cumA[0] = 0, cumB[0] = 0;
        cumA[1] = arrA[1], cumB[1] = arrB[1];

        for (int i = 2; i <= n; i++){
            cumA[i] = cumA[i - 1] + arrA[i];
            cumB[i] = cumB[i - 1] + arrB[i];
        }

        moreThanA[n] = arrA[n], moreThanB[n] = arrB[n];

        for (int i = n - 1; i > 0; i--){
            moreThanA[i] = moreThanA[i + 1] + arrA[i];
            moreThanB[i] = moreThanB[i + 1] + arrB[i];
        }

//        for (int i = 1; i <= n; i++){
//            cout << cumA[i] << " ";
//        }
//        cout << "\n";
//        for (int i = 1; i <= n; i++){
//            cout << cumB[i] << " ";
//        }
//        cout << "\n";
//        for (int i = 1; i <= n; i++){
//            cout << moreThanA[i] << " ";
//        }
//        cout << "\n";
//        for (int i = 1; i <= n; i++){
//            cout << moreThanB[i] << " ";
//        }
//        cout << "\n";

        lld ans;

        if (moreThanA[1] >= moreThanB[1]){
            ans = moreThanA[1];
            cout << ans << "\n";
            break;
        }

        for (int i = 1; i <= n; i++){
            if (moreThanA[i] < moreThanB[i]){
                ans = cumA[i - 1] + moreThanB[i];
                break;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
