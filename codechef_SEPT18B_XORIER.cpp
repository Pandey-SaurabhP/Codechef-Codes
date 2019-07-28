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
    // fast();
    int T, n;
    cin >> T;

    fillPrime();

    while(T--){
        // Code here
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++){

        }
    }

    return 0;
}
