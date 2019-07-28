#include <iostream>

using namespace std;

int main(){
    int T, N;
    cin >> T;

    while (T--){
        int k = 1;
        cin >> N;

        int arr[N * N] = {0};

        arr[0] = 1;
        for (int i = 1; i < N; i++){
            arr[i] = arr[i - 1] + k;
            k++;
        }

        k = 0;
        for (int i = N; i < N * N; i++){
            arr[i] = arr[i - N] + 1;
        }

        for (int i = 0; i < N * N; i++){
            cout << arr[i] << " ";
            if (i % N == (N - 1)){
                cout << endl;
            }
        }
    }
    return 0;
}
