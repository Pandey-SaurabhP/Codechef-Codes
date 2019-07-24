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

void printA (int arr[], int n){
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\n";
}

int main(){
    fast();

    int T, n, d1, d2, c1, c2;
    cin >> T;

    while(T--){
        c1 = 0, c2 = 0;

        cin >> n;
        int arr[n], expF[n], expB[n];

        for (int i = 0; i < n; i++) cin >> arr[i];

        d1 = arr[1] - arr[0], d2 = arr[n - 1] - arr[n - 2];
        expF[0] = arr[0], expB[n - 1] = arr[n - 1];

        for (int i = 1; i < n; i++){
            expF[i] = expF[i - 1] + d1;
            expB[n - i - 1] = expB[n - i] - d2;
        }

        for (int i = 0; i < n; i++){
            if (expF[i] != arr[i]) c1++;
            if (c1 > 1) break;

            if (expB[i] != arr[i]) c2++;
            if (c2 > 1) break;
        }

        if (c1 > 1) { printA(expB, n); continue; }
        else if (c2 > 1) { printA(expF, n); continue; }

        printA(expF, n);
    }

    return 0;
}
