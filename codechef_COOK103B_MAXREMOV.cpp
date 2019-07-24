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
    int T, N, K;
    cin >> T;

    while(T--){
        // Code here
        int arr[111111] = {0};
        cin >> N >> K;

        int left[N], right[N];
        int MaxF = -1;

        for (int i = 0; i < N; i++){
            cin >> left[i] >> right[i];

            for (int j = left[i]; j <= right[i]; j++){
                arr[j]++;
            }

            if (MaxF < right[i]){
                MaxF = right[i];
            }
        }

//        for (int i = 1; i < 10; i++){
//            cout << arr[i] << " ";
//        }
//        cout << endl;

        int Count[N] = {0};

        for (int i = 0; i < N; i++){
            for (int j = 1; j < left[i]; j++){
                if (arr[j] == K){
                    Count[i]++;
                }
            }
            for (int j = left[i]; j <= right[i]; j++){
                if (arr[j] - 1 == K){
                    Count[i]++;
                }
            }
            for (int j = right[i] + 1; j <= MaxF; j++){
                if (arr[j] == K){
                    Count[i]++;
                }
            }
        }

        int Max = -1;
        for (int i = 0; i < N; i++){
            if (Count[i] > Max){
                Max = Count[i];
            }
        }
        cout << Max << "\n";
    }
    return 0;
}
