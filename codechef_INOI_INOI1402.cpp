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
    // fast();
    int N, c;
    cin >> N >> c;

    int conn[C + 1][2];
    int price[C + 1];

    for (int i = 1; i < C + 1; i++){
        cin >> conn[i][0] >> conn[i][1] >> price[i];
    }

    int bookM[(C * (C - 1)) + 1][2];
    for (int i = 1; i <= C; i++){

        for (int j = 1; j <= C; j++){
            if (i == j){
                continue;
            }
        }

    }
    return 0;
}
