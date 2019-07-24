/**
 @Author -> saurabh59373
**/

#include <iostream>
#include <algorithm>
#include <vector>

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
        int arr[n];

        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        sort (arr, arr + n);

        int Count = 0, k = 0;

        for (int i = 0; i < n; i++){
            if (arr[i] <= k){
                Count++;
                k++;
            }
        }

        cout << Count << "\n";
    }
    return 0;
}
