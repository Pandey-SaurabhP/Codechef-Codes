/**
 @Author -> saurabhP
**/

#include <iostream>
#include <algorithm>
#include <map>
#include <vector>

typedef long long int lld;

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

struct dish {
    string name;
    bool A, E, I, O, U;
};

dish arr[111111];

inline void FALSE (dish d){
    d.A = false;
    d.E = false;
    d.I = false;
    d.O = false;
    d.U = false;
}

int main(){
    fast();
    lld T, n, Count;
    string tmp = "     ";
    cin >> T;

    map <string, int> mp;
    while(T--){
        mp.clear();
        cin >> n;
        Count = 0;

        for (int i = 1; i <= n; i++){
            cin >> arr[i].name;
            FALSE(arr[i]);
            tmp = "     ";

            for (int j = 0; j < arr[i].name.size(); j++){
                switch (arr[i].name[j]){
                    case 'a': arr[i].A = true; tmp[0] = 1; break;
                    case 'e': arr[i].E = true; tmp[1] = 1; break;
                    case 'i': arr[i].I = true; tmp[2] = 1; break;
                    case 'o': arr[i].O = true; tmp[3] = 1; break;
                    case 'u': arr[i].U = true; tmp[4] = 1; break;
                }

                if (arr[i].A && arr[i].E && arr[i].I &&
                    arr[i].O && arr[i].U) break;
            }

            if (mp.find(tmp) != mp.end()){
                mp.find(tmp) -> second += 1;
            }
            else {
                mp.insert(pair<string, int> (tmp, 1));
            }
        }
    }

    return 0;
}
