/**
 @Author -> saurabh59373
**/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Location{
    int row, col;
};

bool comparator (Location l1, Location l2){
    if (l1.row < l2.row){
        return true;
    }
    if (l1.row == l2.row && l1.col < l2.col){
        return true;
    }
    return false;
}

bool comparator2 (Location l1, Location l2){
    if (l1.col < l2.col){
        return true;
    }
    if (l1.col == l2.col && l1.row < l2.row){
        return true;
    }
    return false;
}

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

int main(){
    fast();
    int T, n, m, k;
    cin >> T;

    long long int Count;

    while(T--){
        // Code here
        cin >> n >> m >> k;

        if (n > 1000 && m > 1000){
            Location arr[k], arr2[k];

            for (int i = 0; i < k; i++){
                cin >> arr[i].row >> arr[i].col;

                arr2[i].row = arr[i].row;
                arr2[i].col = arr[i].col;
            }

            sort (arr, arr + k, comparator);
            sort (arr, arr + k, comparator2);

            Count = k * 4;

            for (int i = 0; i < k - 1; i++){
                if (arr[i].col == arr[i + 1].col && arr[i + 1].row - arr[i].row == 1){
                    Count -= 2;
                }

                if ((arr2[i].row == arr2[i + 1].row) && (arr2[i + 1].col - arr2[i].col == 1)){
                    Count -= 2;
                }
            }

            cout << Count << "\n";
        }

    }
    return 0;
}
