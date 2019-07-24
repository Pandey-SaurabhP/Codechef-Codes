/**
 @Author -> saurabh59373
**/
#include <iostream>
using namespace std;
void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}
int main(){
    fast();
    long long int N, Q;
    cin >> N >> Q;
    long long int arr[N], arr2[N];
    for (long long int i = 0; i < N; i++){
        cin >> arr[i];
    }
    for (long long int i = 0; i < N; i++){
        cin >> arr2[i];
    }
    long long int L, R, Count = 0;
    for (long long int i = 0; i < Q; i++){
        cin >> L >> R;
        Count = 0;
        for (long long int j = L - 1; j < R; j++){
            Count += arr[j] * arr2[j];
        }
        cout << Count << "\n";
    }
    return 0;
}
