/*
 *
 *  @AUTHOR      saurabh59373
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N, M;
    cin >> N >> M;

    int setOne[N], setTwo[M];

    int ans[N * M];
    int arr[N + M - 1][2];

    for (int i = 0; i < N; i++){
        cin >> setOne[i];
    }
    for (int i = 0; i < M; i++){
        cin >> setTwo[i];
    }

    if (N >= M){
        for (int i = 0; i < N; i++){

            arr[i][0] = i;
            arr[i][1] = 0;
            ans[i] = setOne[i] + setTwo[0];

            cout << arr[i][0] << " " << arr[i][1] << "\n";
        }
    }
    else {
        for (int i = 0; i < M; i++){

            arr[i][0] = 0;
            arr[i][1] = i;
            ans[i] = setOne[0] + setTwo[i];

            cout << arr[i][0] << " " << arr[i][1] << "\n";
        }
    }

    for (int i = 0; i < )

    int k = 1, l = max(N, M);

    if (N >= M){
        for (int i = N; l <= N + M - 1; i++){
            ans[l] = setOne[i - N] + setTwo[k];
            arr[l][0] = i - N;
            arr[l][1] = k;
//            cout << " " << l << "->" << ans[l] << " " << i << "\n";

            for (int j = 0; j < l; j++){
                if (ans[l] == ans[j]){
                    l--;
                    break;
                }
            }
            l++;

            if (i >= (2 * N) - 1){
                i = N;
                k++;
            }
        }
    }
    else {
        for (int i = M; l <= N + M - 1; i++){
            ans[l] = setOne[k] + setTwo[i - M];
            arr[l][0] = k;
            arr[l][1] = i - M;

//            cout << " " << l << "->" << ans[l] << " " << i << "\n";

            for (int j = 0; j < l; j++){
                if (ans[l] == ans[j]){
                    l--;
                    break;
                }
            }
            l++;

            if (i >= (2 * M) - 1){
                i = M;
                k++;
            }
        }
    }

    for (int i = max(N, M); i < N + M - 1; i++){
        cout << arr[i][0] << " " << arr[i][1] << "\n";
    }
    return 0;
}
