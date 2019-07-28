/**
 @Author -> saurabh59373
**/

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

int main(){
    // fast();
    int T, a;
    cin >> T;

    long long int arr[40];
    long long int cummpow[40];

    arr[0] = 1;
    cummpow[0] = 1;

    for (int i = 1; i < 40; i++){

        arr[i] = pow(2, i);
        cummpow[i] = cummpow[i - 1] + arr[i];
    }

    while(T--){
        // Code here
        cin >> a;

        int k = 0;
        long long int max_ = -1, index;

        for (long long int i = a; true; i += a){
            if (i < cummpow[k]){
                break;
            }

            if (max_ < i - cummpow[k]){
                max_ = i - cummpow[k];
                index = k;
            }
            k++;
        }

        int d1 = k;
        int d2 = index + 1;

        cout << d1 << " " << d2 << "\n";
    }
    return 0;
}
