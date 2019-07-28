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
    // fast();
    int T, n, k;
    cin >> T;

    while(T--){
        // Code here
        cin >> n >> k;
        int arr[n], arr2[n] = {0};
        vector <int> vc;

        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        for (int i = n - 1; i >= 0; i--){
            arr2[i % k] += arr[i];
            vc.push_back(arr2[i % k]);
        }

        sort(vc.begin(), vc.end());
        cout << vc[vc.size() - 1] << "\n";
    }
    return 0;
}
