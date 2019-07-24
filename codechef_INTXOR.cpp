#include <iostream>

using namespace std;

int main(){
    int T, N;
    cin >> T;

    int a, b, c, d, temp;
    while (T--){
        cin >> N;
        int arr[N + 1];
        cout << 1 << " " << 1 << " " << 2 << " " << 3 << "\n";
        cin >> a;
        cout << 1 << " " << 1 << " " << 2 << " " << 4 << "\n";
        cin >> b;
        cout << 1 << " " << 3 << " " << 4 << " " << 5 << "\n";
        cin >> c;
        cout << 1 << " " << 3 << " " << 4 << " " << 6 << "\n";
        cin >> d;
        arr[5] = a ^ b ^ c;
        arr[6] = a ^ b ^ d;

        for (int i = 5; i <= N - 2; i++){
            cout << 1 << " " << i << " " << i + 1 << " " << i + 2 << endl;
            cin >> temp;
            arr[i + 2] = temp ^ arr[i] ^ arr[i + 1];
        }

        cout << 1 << " " << N - 1 << " " << N << " " <<  1 << endl;
        cin >> temp;
        arr[1] = arr[N] ^ arr[N - 1] ^ temp;
        // a => 1 2 3
        // b => 1 2 4

        // c => 3 4 5
        // d => 3 4 6

        cout << 1 << " " << 2 << " " << 5 << " " << N << endl;
        cin >> temp;
        arr[2] = temp ^ arr[5] ^ arr[N];
        arr[4] = b ^ arr[1] ^ arr[2];
        arr[3] = a ^ arr[1] ^ arr[2];


        cout << "2 ";
        for (int i = 1; i <= N; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
        cin >> temp;
    }
    return 0;
}
