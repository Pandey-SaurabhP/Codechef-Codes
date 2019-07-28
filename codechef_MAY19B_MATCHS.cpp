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

vector <lld> vc;

int main(){
    fast();
    lld T, n, m, k, l, pb;
    bool targ;
    cin >> T;

    while(T--){
        // Code here
        vc.clear();
        cin >> n >> m;

        k = min (n, m);
        l = max (n, m);

        while (k > 0){
            vc.push_back(l / k);
            l -= (l / k) * k;
            swap (l, k);
        }

        if (max(n, m) % min(n, m) == 0){
            cout << "Ari\n";
            continue;
        }

        targ = true;

        for (int i = 0; i < vc.size(); i++){
            if (vc[i] > 1){
                cout << (i % 2 == 0? "Ari\n": "Rich\n");
                targ = false;
                break;
            }
        }
        if (targ){
            cout << (vc.size() % 2 == 0? "Rich\n": "Ari\n");
        }

    }

    return 0;
}
