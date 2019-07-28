/**
 @Author -> saurabh59373
**/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

int main(){
    fast();
    int T, n;
    cin >> T;

    while(T--){
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        sort(arr, arr + n);
        reverse(arr, arr + n);

        vector <int> Size(2, 0);
        for (int i = 0; i < n; i++){
            if (arr[i] < 0){
                break;
            }
            Size[0]++;
        }
        Size[1] = n - Size[0];

        if (Size[0] != 0 && Size[1] != 0){
            cout << Size[0] << " " << Size[1];
        }
        else if (Size[0] != 0 && Size[1] == 0){
            cout << Size[0] << " " << Size[0];
        }
        else{
            cout << Size[1] << " " << Size[1];
        }

        cout << "\n";
        // Code here
    }
    return 0;
}
