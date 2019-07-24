
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
    // fast();

    int R, N, K;
    cin >> N >> K >> R;

    int k = 1, Count = 0;
    for (int i = R; i <= K; i += (R * k)){
        Count++;
        k++;
    }

    if (Count < N){
        cout << N - Count<< "\n";
    }
    else {
        cout << 0 << "\n";
    }

    return 0;
}
