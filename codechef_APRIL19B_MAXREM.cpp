/**
 @Author -> saurabh59373
**/

#include <iostream>
#include <algorithm>

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

int main(){
    fast();
    int N;
    cin >> N;

    int arr[N];

    for (int i = 0; i < N; i++){
        cin >> arr[i];
    }

    sort (arr, arr + N);
    reverse (arr, arr + N);

    int ans = 0;

    for (int i = 0; i < N - 1; i++){
        if (arr[i + 1] % arr[i] > ans){
            ans = arr[i + 1] % arr[i];
        }
    }

    cout << ans << "\n";

    return 0;
}
