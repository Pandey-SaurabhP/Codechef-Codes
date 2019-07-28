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

int main(){
    fast();
    lld T, n, ans;
    cin >> T;

    while(T--){
        // Code here
        cin >> n;
        lld m[n], f[n];

        vector <int> m1, m2, f1, f2;
        ans = 0;

        for (lld i = 0; i < n; i++){
            cin >> m[i];

            if (m[i] % 2 == 0) m1.push_back(m[i]);
            else m2.push_back(m[i]);
        }

        for (lld i = 0; i < n; i++){
            cin >> f[i];

            if (f[i] % 2 == 0) f1.push_back(f[i]);
            else f2.push_back(f[i]);
        }

        for (lld i = 0; i < m2.size(); i++){
            m1.push_back(m2[i]);
        }

        for (lld i = 0; i < f2.size(); i++){
            f1.push_back(f2[i]);
        }

        for (lld i = 0; i < n; i++){
            ans += ((m1[i] + f1[i]) / 2);
        }

        cout << ans << endl;

    }

    return 0;
}
