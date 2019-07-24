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

    int primeNumbers[3500];
    primeNumbers[0] = 2;
    primeNumbers[1] = 3;
//
    int k = 2;
//
//    bool target;

    int low = 5, high = 31000, i, flag;
    unsigned long long numbers[3500];

    numbers[1] = primeNumbers[0] * primeNumbers[1];

    while (low < high){
        flag = 0;

        for(i = 2; i <= (low / 3) + 1; ++i){
            if(low % i == 0){
                flag = 1;
                break;
            }
        }

        if (flag == 0){
            primeNumbers[k] = low;
            numbers[k] = primeNumbers[k] * primeNumbers[k - 1];
            k++;
        }

        low += 2;
    }

//    for (int i = 1; i < k; i++){
//        cout << numbers[i] << " ";
//    }
//    cout << k;

    int T, N;
    cin >> T;

    while (T--){
        cin >> N;

        numbers[N] *= 2;
        numbers[N] /= primeNumbers[N];
        for (int i = 1; i <= N; i++){
            cout << numbers[i] << " ";
        }
        cout << endl;
        numbers[N] /= 2;
        numbers[N] *= primeNumbers[N];
    }
    return 0;
}
