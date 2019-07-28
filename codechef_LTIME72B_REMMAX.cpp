/**
 @Author -> saurabhP
**/

#include <iostream>
#include <algorithm>

typedef long long int lld;

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

bool allNine (string str, int start, int n){
    for (int i = start; i < n; i++) if (str[i] != '9') return false;
    return true;
}

bool allZero (string str, int n){
    for (int i = 1; i < n; i++) if (str[i] != '0') return false;
    return true;
}

int reverse_(int n){
    int revNum = 0, rem;

    while(n != 0)
    {
        rem = n % 10;
        revNum = (revNum * 10) + rem;
        n /= 10;
    }

    return revNum;
}

string convertItoSt(int n){
    string str;

    while (n != 0){
        str += char((n % 10) + 48);
        n /= 10;
    }
    reverse(str.begin(), str.end());
    return str;
}

int main(){
    // fast();
    int T, n, i, n2, mm;
    T = 10000;

    string str, ans, ans2;

    while(T--){
        // Code here
        mm = T;
        str = convertItoSt(mm);
        n = str.size();
// Using fastest method
        ans.clear();

        if (str[0] > '1'){
            if (allNine(str, 1, n)){
                ans = str;
            }
            else{
                for(i = 0; i < n; i++) ans += '9';
                ans[0] = str[0] - 1;
            }
        }
        else if (str[0] == '1' && allZero(str, n)){
            for (int i = 1; i < n; i++){
                ans += '9';
            }
        }
        else {
            for (int i = 1; i < n; i++){
                if (str[i] != '0'){
                    if (allNine(str, i + 1, n)){
                        ans = str;
                        break;
                    };

                    str[i]--;
                    for (i = i + 1; i < n; i++){
                        str[i] = '9';
                    }
                    ans = str;
                    break;
                }
            }
        }

// Using Second Method
        int MAX = INT_MIN, k;
        for (int i = mm; i >= 0; i--){
            k = reverse_(i);
            if (k > MAX){
                MAX = k;
            }
        }

        ans2 = convertItoSt(reverse_(MAX));

        if (ans != ans2){
            cout << str << "\n";
        }
    }

    return 0;
}
