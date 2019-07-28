#include <bits/stdc++.h>
using namespace std;

int arr[1000][1000];
void printDiagonal(int n)
{
    int badhao = 1;
    for (int k = 0; k < n; k++) {
        int row = 0, col = k;
        while (row < n && col >= 0) {
            arr[row][col] = badhao;
            row++, col--;
            badhao++;
        }
    }

    for (int j = 1; j < n; j++) {
        int col = n - 1, row = j;
        while (row < n && col >= 0) {
            arr[row][col] = badhao;
            badhao++;
            row++, col--;
        }
    }
}

int main()
{
    int T, N;
    cin >> T;

    while (T--){
        cin >> N;
        printDiagonal (N);

        for (int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
