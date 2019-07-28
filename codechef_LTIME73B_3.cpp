/**
 @Author -> saurabhP
**/

#include <iostream>
#include <vector>

#define read(arr, n) for(int i = 0; i < n; i++) std::cin >> arr[i];
#define print(arr, n) for(int i = 0; i < n; i++) std::cout << arr[i] << " ";

typedef long long int lld;

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

bool sorted (int arr[], int n){
    for (int i = 1; i < n; i++){
        if (arr[i] < arr[i - 1]) return false;
    }
    return true;
}

int main(){
    fast();
    long count_, T, n, d;
    cin >> T;

    while(T--){
        // Code here
        cin >> n >> d;
        int arr[n];

        read (arr, n);

        count_ = 0;

        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (i == j) continue;

                if (arr[i] > arr[j]){
                    if (arr[i] - arr[j] == d || arr[j] - arr[i] == d){
                        swap (arr[i], arr[j]);
                        count_++;
                    }
                }


//                print (arr, n);
//                cout << count_ << endl;

                if (sorted(arr, n)){
                    break;
                    break;
                }
            }
        }


        if (sorted(arr, n)) cout << count_ << "\n";
        else cout << -1;
    }

    return 0;
}
