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
    int T, b, o;
    bool targ;
    cin >> T;

    string top, bot, ans;

    while(T--){
        // Code here
        b = 0; o = 0;
        cin >> top >> bot;
        ans = "no\n";

        if (top[0] == 'b' || bot[0] == 'b'){
            b++;
        }
        else if (top[0] == 'o' || bot[0] == 'o'){
            o++;
        }

        if (top[1] == 'b' || bot[1] == 'b'){
            b++;
        }
        else if (top[1] == 'o' || bot[1] == 'o'){
            o++;
        }

        if (top[2] == 'b' || bot[2] == 'b'){
            b++;
        }
        else if (top[2] == 'o' || bot[2] == 'o'){
            o++;
        }

//        cout << o << " " << b << "\n";

        if (b > 2){
            for (int i = 0; i < 3; i++){
                if (top[i] == 'o' || bot[i] == 'o'){
                    ans = "yes\n";
                    break;
                }
            }
        }

        if (b == 2 && o == 1){
            ans = "yes\n";
        }

        cout << ans;
    }

    return 0;
}
