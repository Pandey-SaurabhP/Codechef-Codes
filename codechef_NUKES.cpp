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
    int a, n, k;
    cin >> a >> n >> k;
    int arr[k] = {0};

    for (int i = 0; a > 0; i++){
        arr[i] += (n < a? n: a);
        a -= arr[i];
        if (arr[i] + 1 >= n && a - 1 >= 0){
            arr[i] = 0;
            a -= 1;
            continue;
        }
        if (arr[i - 1] == 0){
            arr[i] -= (n < a? n: a);
            arr[i - 1] += (n < a? n: a);
        }
        for (int i = 0; i < k; i++){
        cout << arr[i] << " ";
        }cout << "\n";
    }

    for (int i = 0; i < k; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
