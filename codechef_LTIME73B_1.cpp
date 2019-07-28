/**
 @Author -> saurabhP
**/

#include <iostream>
#include <vector>

#define read(arr, n) for(int i = 0; i < n; i++) std::cin >> arr[i];
#define print(arr, n) for(int i = 0; i < n; i++) std::cout << arr[i] << " ";

typedef long long int lld;

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

int main(){
    // fast();
    long T, x, y, k;
    cin >> T;

    while(T--){
        // Code here
        cin >> x >> y >> k;

        if (((x + y) % (2 * k)) < (k)){
            cout << "Chef\n";
        }
        else cout << "Paja\n";

    }

    return 0;
}
