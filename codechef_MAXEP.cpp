#include <iostream>

using namespace std;

int find_temp(int low, int N){
    int temp = 0;

    while (low < N){
        temp++;
        low += temp;
    }
    return temp;
}

int main(){
    int N, c;
    cin >> N >> c;

    int temp = find_temp (1, N);
    int Count_i = 0, reader, i;

    for (i = temp; Count_i <= N; i--){

        Count_i += i;
        cout << 1 << " " << Count_i << endl;
        cin >> reader;

        if (reader == 1){
            cout << 2 << endl;
            break;
        }

        else if (reader == 0){
            continue;
        }
    }

    for (int j = Count_i - i; j <= Count_i; j++){
        cout << 1 << " " << j << endl;
        cin >> reader;

        if (reader == 1){
            cout << "3 " << j << endl;
            break;
        }
    }
    return 0;
}
