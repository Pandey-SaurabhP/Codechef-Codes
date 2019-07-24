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

#define check(number, value) if(number == 0){number = value; continue;};


int main(){
    // fast();

    int T, n, p;
    cin >> T;

    while (T--){
        cin >> n >> p;
        int mod, temp;
        int Count[100] = {0};

        for (int i = 2; i <= p; i++){
            mod = n % i;
            if(mod == 0){continue;}

            for (int j = 2; j <= p; j++){
                temp = mod;
                mod = mod % j;

                check(mod, temp);

                for (int k = 2; k <= p; k++){
                    temp = mod;
                    mod = mod % k;

                    check(mod, temp);
                    cout << mod << " ";

                    if (mod % n != 0){
                        Count[mod % n]++;
                        mod = temp;
                    }
                }
            }
        }

        int Max = -1;
        for (int i = 1; i <= n / 2; i++){
            if (Count[i] != 0){
                Max = Count[i];
            }

            cout << Count[i] << " ";
        }
        cout << "\nMAX -> " << Max << "\n";
    }
    return 0;
}
