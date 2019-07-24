/**
 @Author -> saurabhP
**/

#include <bits/stdc++.h>

#define read(arr, n) for(int i = 0; i < n; i++) std::cin >> arr[i];
#define print(arr, n) for(int i = 0; i < n; i++) std::cout << arr[i] << " ";

typedef long long int lld;

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

int reqNum(int d){
    double n, div;
    n = d * 0.75;

    div = fmod(n, 1.0);

    if (div == 0){
        return int(n);
    }
    return int(n + 1);
}

int main(){
    fast();
    int T, n, req, alr, cnt;
    cin >> T;

    double per;
    string str;

    while(T--){
        // Code here
        cin >> n;
        cin >> str;
        alr = 0, cnt = 0;

        for (int i = 0; i < n; i++){
            if (str[i] == 'P') alr++;
        }

        req = reqNum(n) - alr;

        for (int i = 2; i < n - 2; i++){
            if (str[i] == 'A'){
                if ((str[i - 1] == 'P' || str[i - 2] == 'P') &&
                    (str[i + 1] == 'P' || str[i + 2] == 'P')) cnt++;
            }
        }

        if (cnt < req) cout << -1 << "\n";
        else cout << req << "\n";
    }

    return 0;
}
