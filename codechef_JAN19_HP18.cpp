/*
 *
 *  @AUTHOR      saurabh59373
*/

#include <iostream>
#include <vector>

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0) ; std::cout.tie(0);
}

int main(){
    fast();
    int T, N, a, b;
    cin >> T;

    while (T--){
        cin >> N >> a >> b;
        int arr[N];

        int multiplesA = 0, multiplesB = 0, multiplesBoth = 0;

        for (int i = 0; i < N; i++){
            cin >> arr[i];

            if (arr[i] % a == 0 && arr[i] % b == 0){
                multiplesBoth++;
            }
            else {
                if (arr[i] % a == 0){
                    multiplesA++;
                }

                if(arr[i] % b == 0){
                    multiplesB++;
                }
            }
        }

        multiplesB -= multiplesBoth;

        string winner = (multiplesA > multiplesB? "BOB": "ALICE");

        if (a == b){
            winner = "BOB";
        }

        cout << winner << "\n";
    }

    return 0;
}
