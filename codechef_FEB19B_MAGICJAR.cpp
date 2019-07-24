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
    fast();

    int T, n;
    cin >> T;

    unsigned long long Sum;

    while(T--){
        // Code here
        cin >> n;
        int arr[n];

        Sum = 0;
        for (int i = 0; i < n; i++){
            cin >> arr[i];
            Sum += arr[i] - 1;
        }

        cout << Sum + 1 << "\n";
    }
    return 0;
}
