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

int GCD (int a, int b){
    if (a == 0){
        return b;
    }

    return GCD(b % a, a);
}

int main(){
    fast();
    int T;
    cin >> T;

    unsigned long long N, a, b, k;
    long int factorsA, factorsB, lcm, factorsLCM, Count;

    while(T--){
        // Code here
        cin >> N;
        cin >> a >> b >> k;

        factorsA = N / a;
        factorsB = N / b;

        lcm = (a * b) / GCD(a, b);
        factorsLCM = N / lcm;
        Count = (factorsA + factorsB) - 2 * (factorsLCM);

        // cout << factorsA << " " << factorsB << " " << Count << "\n";

        if (Count >= k){
            cout << "Win\n";
        }
        else {
            cout << "Lose\n";
        }
    }
    return 0;
}
