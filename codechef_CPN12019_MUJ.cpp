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
    int T;
    cin >> T;

    string str;

    while(T--){
        // Code here
        cin >> str;
        bool targ = false;
        for (int i = str.size() - 1; i >= 2; i--){
            if (str[i] == 'J' && str[i - 1] == 'U' && str[i - 2] == 'M'){
                targ = true;
                break;
            }
        }

        if (targ){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}
