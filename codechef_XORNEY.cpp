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
    unsigned long long T, l, r;
    cin >> T;

    while (T--){
        cin >> l >> r;

        int odds = (r - l) % 2 == 0? (l - r) / 2: l - r


        cout << result << "\n";
    }
    return 0;
}
