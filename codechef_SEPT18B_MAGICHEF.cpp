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
    int T, n, s, x, a, b;
    cin >> T;

    while(T--){
        // Code here
        cin >> n >> x >> s;

        while(s--){
            cin >> a >> b;
            if (x == a){
                x = b;
            }
            else if (x == b){
                x = a;
            }
            else {
                continue;
            }
        }

        cout << x << "\n";
    }

    return 0;
}
