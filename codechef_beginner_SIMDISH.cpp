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

    while(T--){
        // Code here
        string arr1[4], arr2[4];
        int Count = 0;

        for (int i = 0; i < 4; i++){
            cin >> arr1[i];
        }

        for (int i = 0; i < 4; i++){
            cin >> arr2[i];

            for (int j = 0; j < 4; j++){
                if (arr1[j] == arr2[i]){
                    Count++;
                }
            }
        }

        if (Count > 1){
            cout << "similar\n";
        }
        else{
            cout << "dissimilar\n";
        }
    }
    return 0;
}
