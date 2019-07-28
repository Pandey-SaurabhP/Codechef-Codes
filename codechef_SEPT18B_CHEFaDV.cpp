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
    int T, a, b, x, y;
    cin >> T;

    while(T--){
        // Code here
        cin >> a >> b >> x >> y;

        if (((a - 1) % x == 0) && ((b - 1) % y) == 0 && a - 1 >= 0 && b - 1 >= 0){
            cout << "Chefirnemo\n";
            continue;
        }
        else if (((a - 2) % x == 0) && ((b - 2) % y == 0) && a - 2 >= 0 && b - 2 >= 0){
            cout << "Chefirnemo\n";
            continue;
        }

        cout << "Pofik\n";
    }

    return 0;
}
