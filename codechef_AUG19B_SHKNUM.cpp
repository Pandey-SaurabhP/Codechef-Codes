/**
 @Author -> saurabh59373
**/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

long int arr[30];

int main(){
    // fast();
    for (int i = 0; i < 30; i++){
        arr[i] = pow(2, i);
    }

    int T;
    cin >> T;

    long int n;

    while(T--){
        // Code here
        cin >> n;
        int ourTarg;

        for (int i = 0; i < 30; i++){
            for (int j = 0; j < i; j++){
                if (arr[i] + arr[j] > n){
                    ourTarg = i;
                }
            }
        }
    }

    return 0;
}
