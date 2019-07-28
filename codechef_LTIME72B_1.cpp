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
    int T, n;
    cin >> T;

    string str;

    while(T--){
        // Code here
        int Cnt = 0;
        cin >> n >> str;

        for (int i = 1; i < n; i++){
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
                str[i] == 'u' || str[i] == 'o'){
                    if (str[i - 1] != 'a' && str[i - 1] != 'e' && str[i - 1] != 'i' &&
                        str[i - 1] != 'u' && str[i - 1] != 'o') Cnt++;
                }
        }
        cout << Cnt << "\n";
    }

    return 0;
}
