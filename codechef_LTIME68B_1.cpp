/**
 @Author -> saurabh59373
**/

#include <iostream>
#include <vector>

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

    while (T--){
        int Count = 0;

        cin >> n;
        cin >> str;

        if (str [0] == '0' && str[1] == '0'){
            str[0] = '1';
            Count++;
        }

        for (int i = 2; i < n - 1; i++){
            if (str[i - 1] == '0' && str[i] == '0' && str[i + 1] == '0'){
                str[i] = '1';
                Count++;
            }
        }

        if (str [n - 2] == '0' && str[n - 1] == '0'){
            str[n - 1] = '1';
            Count++;
        }

        // cout << str << "\n";

        bool sta = true;
        for (int i = 0; i < n; i++){
            if (str[i] == '1'){
                sta = false;
            }
        }

        if(sta == true){
            if (n % 2 == 0){
                cout << n / 2 << "\n";
            }
            else{
                cout << (n / 2) + 1 << "\n";
            }
            continue;
        }

        cout << Count << "\n";
    }

    return 0;
}
