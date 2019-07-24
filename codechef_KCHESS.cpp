#include <iostream>

using namespace std;

int main(){
    int T, n;
    cin >> T;

    int A, B;
    while (T--){
        cin >> n;
        int arr[n][2];
        int chance[n * 8][2];

        int j = 0;
        for (int i = 0; i < n; i++){
            cin >> arr[i][0] >> arr[i][1];
            chance[j][0] = arr[i][0] - 2; chance[j][1] = arr[i][1] - 1; j++;
            chance[j][0] = arr[i][0] - 2; chance[j][1] = arr[i][1] + 1; j++;
            chance[j][0] = arr[i][0] - 1; chance[j][1] = arr[i][1] - 2; j++;
            chance[j][0] = arr[i][0] - 1; chance[j][1] = arr[i][1] + 2; j++;
            chance[j][0] = arr[i][0] + 2; chance[j][1] = arr[i][1] - 1; j++;
            chance[j][0] = arr[i][0] + 2; chance[j][1] = arr[i][1] + 1; j++;
            chance[j][0] = arr[i][0] + 1; chance[j][1] = arr[i][1] - 2; j++;
            chance[j][0] = arr[i][0] + 1; chance[j][1] = arr[i][1] + 2; j++;
        }

        cin >> A >> B;

        bool cut[8] = {true};
        int k = 0;

        for (int i = 0; i < n * 8; i++){
            if (A + 1 == chance[i][0] && B == chance[i][1]){
                cut[k] = false;
                k++;
            }
            if (A - 1 == chance[i][0] && B == chance[i][1]){
                cut[k] = false;
                k++;
            }
            if (A + 1 == chance[i][0] && B - 1 == chance[i][1]){
                cut[k] = false;
                    k++;
            }
            if (A - 1 == chance[i][0] && B - 1 == chance[i][1]){
                cut[k] = false;
                    k++;
            }
            if (A + 1 == chance[i][0] && B + 1 == chance[i][1]){
                cut[k] = false;
                    k++;
            }
            if (A - 1 == chance[i][0] && B - 1 == chance[i][1]){
                cut[k] = false;
                k++;
            }
            if (A == chance[i][0] && B - 1 == chance[i][1]){
                cut[k] = false;
                k++;
            }
            if (A == chance[i][0] && B + 1 == chance[i][1]){
                cut[k] = false;
                k++;
            }
        }

        string sta = "YES";
        for (int i = 0; i < 8; i++){
            if (cut[i] == true){
                sta = "NO";
                break;
            }
        }

        cout << sta << "\n";
    }
    return 0;
}
