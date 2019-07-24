/**
 @Author -> saurabhP
**/

#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <cmath>

typedef long long int lld;

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

int findMinDiff (int n, vector <lld> vc){
    lld MINDIFF = INT_MAX;

    for (int i = 0; i < vc.size(); i++){
        if (MINDIFF > (((vc[i] - n) > 0)? (vc[i] - n): -(vc[i] - n))){
            MINDIFF = (((vc[i] - n) > 0)? (vc[i] - n): -(vc[i] - n));
        }
    }
    return MINDIFF;
}

vector <lld> sum;

int main(){
    fast();
    for (int i = 0; i <= 30; i++){
        for (int j = i; j <= 30; j++){
            if (i == j){
                continue;
            }
            sum.push_back(pow(2, i) + pow(2, j));
        }
    }

    sort (sum.begin(), sum.end());
    lld T, n;
    cin >> T;

    while(T--){
        // Code here
        cin >> n;
        cout << findMinDiff(n, sum) << "\n";

    }

    return 0;
}
