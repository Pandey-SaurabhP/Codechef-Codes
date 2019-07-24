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

int arr[8][8];

void clearArray (){
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            arr[i][j] = 0;
        }
    }
}
int main(){
    // fast();
    int T;
    cin >> T;

    int r, c, l;

    while (T--){
        clearArray();
        cin >> r >> c >> l;

        arr[r - 1][c - 1] = 1;

        int k = 1;
        for (int i = 1; i <= l; i++){

        }
        for (int i = 0; i < 8; i++){
            for (int j = 0; j < 8; j++){
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
