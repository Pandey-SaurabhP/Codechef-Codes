/**
 @Author -> saurabhP
**/

#include <iostream>
#include <unordered_set>
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
    lld T, n, q, s, cc, l, r, x, MAX;
    cin >> T;

    unordered_set <lld> um;

    while(T--){
        // Code here
        cin >> n >> q;
        um.clear();

        s = 0;
        while (q--){
            cin >> cc;

            if (cc == 2){
                cin >> l >> r;
                l += s;
                r += s;

                MAX = 0;
                while (r >= l){
                    if (um.find(r) == um.end()){
                        MAX = r;
                        break;
                    }
                    r--;
                }

                s = (s + MAX) % n;
                cout << MAX << "\n";
            }
            else {
                cin >> x;
                um.insert(s + x);
            }

//            cout << "S -> " << s << endl;
        }
    }

    return 0;
}
