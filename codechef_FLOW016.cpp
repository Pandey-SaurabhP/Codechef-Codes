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

lld hcf, lcm;

lld gcd (int a, int b){
    if (a == 0){
        return b;
    }
    return gcd (b % a, a);
}

int main(){
    // fast();
    lld T, a, b, k, l;
    cin >> T;

    while(T--){
        // Code here
        cin >> a >> b;
        k = min(a, b);
        l = max(a, b);


        hcf = gcd (k, l);
        lcm = (a * b) / hcf;

        cout << hcf << " " << lcm << "\n";
    }

    return 0;
}
