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
    int T, n, cnt;
    cin >> T;

    while(T--){
        // Code here
        cin >> n;
        int arr[n];
        cnt = 1;

        for (int i = 0; i < n; i++) cin >> arr[i];

        for (int i = 1; i < n; i++){
            if (arr[i] > arr[i - 1]){
                arr[i] = arr[i - 1];
            }
            else cnt++;
        }

        cout << cnt << "\n";

    }

    return 0;
}
