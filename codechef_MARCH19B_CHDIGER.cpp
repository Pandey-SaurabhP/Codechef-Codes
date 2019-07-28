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

string str, newstr;
char d, MIN;

int main(){
    fast();
    int T, n;
    cin >> T;

    while(T--){
        newstr.clear();
        cin >> str;
        cin >> d;

        n = str.size();

        for (int i = 0; i < n; i++){
            str += d;
        }

        for (int j = 0; j <= n; j++){
            MIN = '9';
            for (int i = j; i <= n; i++){
                if (str[i] < MIN){
                    MIN = str[i];
                }
            }

            for (int i = j; str[i] != MIN; i++){
                str[i] = ' ';
            }
        }

        for (int i = 0; i < (n + n); i++){
            if (str[i] != ' '){
                newstr += str[i];
            }
        }

        for (int i = 0; i < n; i++){
            cout << newstr[i];
        }
        cout << "\n";
    }

    return 0;
}
