/**
 @Author -> saurabh59373
**/

#include <iostream>
#include <vector>

#define lld long long int

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

int main(){
    // fast();
    int T;
    cin >> T;

    int temp;

    int x1, y1, x2, y2;
    lld v1, v2, v3, v4, mid;

    int limit = 1000000000;

    while(T--){
        // Code here
        cout << "Q " << 0 << " " << 0 << endl;
        cin >> v1;

        cout << "Q " << limit << " " << 0 << endl;
        cin >> v2;

        cout << "Q " << limit << " " << limit << endl;
        cin >> v3;

        cout << "Q " << 0 << " " << limit << endl;
        cin >> v4;

        mid = (v1 - v4 + limit) / 2;

        cout << "Q " << 0 << " " << mid << "\n";
        cin >> x1;

        y1 = v1 - x1;

        y2 = -v4 + limit + x1;
        x2 = -v3 + (2 * limit) - y2;

        cout << "A " << x1 << " " << y1 << " " << x2 << " " << y2 << endl;
        cin >> temp;
    }
    return 0;
}
