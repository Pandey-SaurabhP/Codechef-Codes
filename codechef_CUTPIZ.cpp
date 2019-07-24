/**
 @Author -> saurabhP
**/

#include <iostream>
#include <vector>

#define read(arr, n) for(int i = 0; i < n; i++) std::cin >> arr[i];

typedef long long int lld;

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

int main(){
    // fast();
    int T, n, d1, d2;
    cin >> T;

    while(T--){
        // Code here
        cin >> n;
        int arr[n], diff[n - 1];
        vector <int> fr, bk;

        read(arr, n);

        for (int i = 1; i < n - 1; i++){
            diff[i - 1] = arr[i] - arr[i - 1];
        }



    }

    return 0;
}
