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
    int T, n;
    cin >> T;

    while(T--){
        // Code here
        cin >> n;
        string name[n][2];

        for (int i = 0; i < n; i++){
            cin >> name[i][0] >> name[i][1];
        }

        int arr[1111]= {0};

        for (int i = 0; i < n; i++){
            for (int j = 0; j < i; j++){
                if (name[i][0] == name[j][0]){
                    arr[j] = 1;
                    arr[i] = 1;
                }
            }
        }

        for (int i = 0; i < n; i++){
            if (arr[i] == 1){
                cout << name[i][0] << " " << name[i][1];
            }
            else{
                cout << name[i][0];
            }
            cout << "\n";
        }

    }

    return 0;
}
