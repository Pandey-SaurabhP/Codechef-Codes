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
    int T, mist, k;
    string str, ans;
    cin >> T;

    while(T--){
        // Code here
        cin >> str;

        ans = "!DPS\n";
        int alph[26] = {0};

        for (int i = 0; i < str.size(); i++){
            k = int(str[i] - 97);
            alph[k]++;
        }

        mist = 0;
        if (str.size() % 2 == 0){
            for (int i = 0; i < 26; i++){
                if (alph[i] % 2 != 0){
                    mist++;
                }
                if (mist == 2){
                    ans = "DPS\n";
                }
                if (mist > 2){
                    ans = "!DPS\n";
                }
            }
        }
        else {
            for (int i = 0; i < 26; i++){
                if (alph[i] % 2 != 0){
                    mist++;
                }
                if (mist == 3 || mist == 1){
                    ans = "DPS\n";
                }
                if (mist == 2 || mist > 3){
                    ans = "!DPS\n";
                }
            }
        }

        cout << ans;
    }

    return 0;
}
