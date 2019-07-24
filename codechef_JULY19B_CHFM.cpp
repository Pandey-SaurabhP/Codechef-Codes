/**
 @Author -> saurabhP
**/

#include <iostream>

#define read(arr, n) for(int i = 0; i < n; i++){ std::cin >> arr[i]; sum += arr[i]; }
#define print(arr, n) for(int i = 0; i < n; i++) std::cout << arr[i] << " ";

typedef long long int lld;

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

int main(){
    fast();
    lld T, n, sum, req;
    bool found;

    cin >> T;

    while(T--){
        // Code here
        cin >> n;
        lld arr[n];

        sum = 0;
        read (arr, n);

        req = sum / n;

        found = false;

        if (sum % n == 0){
            for (int i = 0; i < n; i++){
                if (arr[i] == req){

                    cout << i + 1 << "\n";
                    found = true;
                    break;

                }
            }
            if (!found){
                cout << "Impossible\n";
            }
        }
        else {
            cout << "Impossible\n";
        }


    }

    return 0;
}
