/**
 @Author -> saurabhP
**/

#include <iostream>
#include <algorithm>
#include <vector>

typedef long long int lld;

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

int main(){
    fast();
    int T;
    cin >> T;

    int arr[4];

    while(T--){
        // Code here
        for (int i = 0; i < 4; i++) cin >> arr[i];

        sort (arr, arr + 4);

        if ((arr[0] == arr[1]) && (arr[2] == arr[3])){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }

    }

    return 0;
}
