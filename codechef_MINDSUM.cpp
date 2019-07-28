#include <iostream>

using namespace std;

int digitRoot (int N){
    if (N % 9 == 0){
        return 9;
    }
    else{
        return N % 9;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    long int M, N, X;
    cin >> T;

    int Count;
    while (T--){
        Count = 0;
        cin >> M >> N >> X;

        Count += (N - M + 1) / 9;

        for (int i = M + (9 * Count); i <= N; i++){
            if (digitRoot(i) == X){
                Count++;
            }
        }
        cout << Count << "\n";
    }
    return 0;
}
