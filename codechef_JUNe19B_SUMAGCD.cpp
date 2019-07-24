/**
 @Author -> saurabhP
**/

#include <iostream>
#include <vector>
#include <algorithm>

#define read(arr, n) for(int i = 0; i < n; i++) std::cin >> arr[i];
#define print(arr, n) for(int i = 0; i < n; i++) std::cout << arr[i] << " ";

typedef long long int lld;

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

int gcd (int a, int b){
    if (a == 0) return b;
    return gcd(b % a, a);
}

vector <int> vc;

int main(){
    fast();
    lld T, n, MAX, scMAX, nn;
    lld midx, scidx, gcd1, gcd2;
    bool allSame;

    cin >> T;

    while(T--){
        // Code here
        vc.clear();

        cin >> n;
        int arr[n];

        read (arr, n);
        sort (arr, arr + n);

        allSame = true;
        for (int i = 1; i < n; i++){
            if (arr[i] != arr[0]){
                allSame = false;
                break;
            }
        }

        if (allSame){
            vc.reserve(n);
            for (int i = 0; i < n; i++){
                vc.push_back(arr[i]);
            }
        }
        else {
            vc.push_back(arr[0]);
            for (int i = 1; i < n; i++){
                if (arr[i] != arr[i - 1]){
                    vc.push_back(arr[i]);
                }
            }
        }

        nn = vc.size();

        MAX = -1;
        for (int i = 0; i < nn; i++){
            if (MAX <= vc[i]){
                MAX = vc[i];
                midx = i;
            }
        }

        gcd1 = vc[0];
        for (int i = 1; i < nn; i++){
            if (i == midx) continue;
            gcd1 = gcd(gcd1, vc[i]);
        }

        scMAX = -1;
        for (int i = nn - 1; i >= 0; i--){
            if (vc[i] != MAX){
                scMAX = vc[i];
                scidx = i;
                break;
            }
        }

        gcd2 = vc[0];
        for (int i = 1; i < nn; i++){
            if (i == scidx) continue;
            gcd2 = gcd(gcd2, vc[i]);
        }

//        cout << "MAX -> " << MAX << " :: ";
//        cout << "Second MAX -> " << scMAX << "\n";
//        cout << "GCD1 -> " << gcd1 << " :: ";
//        cout << "GCD2 -> " << gcd2 << "\n";

        gcd1 += MAX;
        gcd2 += scMAX;

        cout << max(gcd1, gcd2) << "\n";
    }

    return 0;
}
