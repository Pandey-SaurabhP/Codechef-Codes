/**
 @Author -> saurabhP
**/

#include <iostream>
#include <iomanip>
#include <vector>

typedef long long int lld;

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

int arr[11111];

int main(){
    // fast();
    int T;
    double n, a, b, CountA, CountB;
    double prob;
    cin >> T;

    while(T--){
        // Code here
        CountA = 0, CountB = 0;
        cin >> n >> a >> b;

        for (int i = 0; i < n; i++){
            cin >> arr[i];

            if (arr[i] == a){
                CountA++;
            }
            if (arr[i] == b){
                CountB++;
            }
        }

        prob = (CountA * CountB) / (n * n);

        cout << std::fixed << setprecision(10) << prob << "\n";
    }

    return 0;
}
