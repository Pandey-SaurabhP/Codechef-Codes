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
    int a, b, ans, arr[11], i = 0;
    cin >> a >> b;
    ans = a - b;

    while (ans > 0){
        arr[i] = ans % 10;
        ans /= 10;
        i++;
    }

    for (int j = 1; j <= 9; j++){
        if (arr[0] != j){
            arr[0] = j;
            break;
        }
    }

    for (int j = i - 1; j >= 0; j--){
        cout << arr[j];
    }
    return 0;
}
