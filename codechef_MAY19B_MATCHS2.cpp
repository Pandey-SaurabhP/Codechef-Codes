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
    fast();
    lld T, n, m, min_, max_;
    double bim;
    cin >> T;

    while(T--){
        // Code here
        cin >> n >> m;
        min_ = min (n, m);
        max_ = max (n, m);

        bim = (max_ - min_) / min_;

        if (max_ % min_ == 0){
            cout << "Ari\n";
        }
        else{
            if (bim >= 0.6){
                cout << "Ari\n";
            }
            else{
                cout << "Rich\n";
            }
        }
    }

    return 0;
}
