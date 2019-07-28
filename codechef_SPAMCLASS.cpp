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

int weight[11111], bias[11111];

int spamClass (int w[], int b[], int x, int N){
    int ans = (w[0] * x) + b[0];

    for (int i = 1; i < N; i++){
        ans = w[i] * ans + b[i];
    }
    return ans;
}

int main(){
    fast();

    int T;
    cin >> T;

    while (T-- > 0){
        int N, minX, maxX;
        cin >> N >> minX >> maxX;

        for (int i = 0; i < N; i++) {
            cin >> weight[i] >> bias[i];
        }

        int Spammers = 0, nonSpammers = 0;
        for (int i = minX; i <= maxX; i++){
            if (spamClass(weight, bias, i, N) % 2 != 0){
                Spammers++;
            }
            else{
                nonSpammers++;
            }
        }

        cout << nonSpammers << " " << Spammers << "\n";
    }
    return 0;
}

