/**
 @Author -> saurabh59373
**/

#include <iostream>
#include <vector>

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

int main(){
    fast();
    int T, x, y;
    cin >> T;

    while(T--){
        // Code here
        cin >> x >> y;
        if (x % 2 == 0){
            cout << x / 2;
        }
        else{
            cout << (x - 1) / 2;
        }

        cout << "\n";
    }
    return 0;
}
