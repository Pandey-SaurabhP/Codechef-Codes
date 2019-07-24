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
    int T, n, k;
    cin >> T;
    while(T--){
        cin >> n >> k;
        int time[n], data[n];
        for (int i = 0; i < n; i++){
            cin >> time[i] >> data[i];
        }
        int i = 0;
        for (; i < n; i++){
            if (k - time[i] < 0){
                break;
            }
            k -= time[i];
        }
        time[i] -= k;
        int Countdata = 0;
        for (; i < n; i++){
            Countdata += time[i] * data[i];
        }
        cout << Countdata << "\n";
    }
    return 0;
}
