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
    int n, C = 0;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (i == j) continue;
            if (arr[i] > arr[j]){
                swap (arr[i], arr[j]);
                C++;
            }
        }
    }

    for (int i = 0; i < n; i++) cout << arr[i];
    cout << C;

    return 0;
}
