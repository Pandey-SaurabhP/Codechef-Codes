/**
 @Author -> saurabhP
**/

#include <iostream>
#include <algorithm>
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
        cin >> n;

        string temp;
        str.clear();

        for (int i = 0; i < n; i++){
            cin >> temp;
            str += temp;
        }

        int C = 0, O = 0, D = 0, E = 0, H = 0, F = 0;
        int codechef[6] = {0};

        for (int i = 0; i < str.size(); i++){
            if (str[i] == 'c'){
                codechef[0]++;
            }
            else if (str[i] == 'o'){
                codechef[1]++;
            }
            else if (str[i] == 'd'){
                codechef[2]++;
            }
            else if (str[i] == 'e'){
                codechef[3]++;
            }
            else if (str[i] == 'h'){
                codechef[4]++;
            }
            else if (str[i] == 'f'){
                codechef[5]++;
            }
        }

        codechef[0] /= 2;
        codechef[3] /= 2;

        sort (codechef, codechef + 6);
        cout << codechef[0] << "\n";
    }

    return 0;
}
