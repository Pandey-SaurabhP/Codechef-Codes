/*
 *
 *  *AUTHOR      saurabh59373
*/

#include <iostream>
#include <vector>

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0) ; std::cout.tie(0);
}

int main(){
    // fast();
    int T;
    cin >> T;

    string top, bot;

    while (T--){
        cin >> top >> bot;
        string sta = "no\n";

        for (int i = 0; i < 3; i++){
            if (top[i] == 'o' || bot[i] == 'o'){
                swap(top[i], top[1]);
                swap(bot[i], bot[1]);

                sta = "yes\n";
                break;
            }
        }

        if (sta == "yes\n"){
            if (top[0] == 'b' || bot[0] == 'b'){
                sta = "yes\n";
            }
            else{
                sta = "no\n";
            }

            if (top[2] == 'b' || bot[2] == 'b'){
                sta = "yes\n";
            }
            else{
                sta = "no\n";
            }
        }

        cout << sta;
    }
    return 0;
}
