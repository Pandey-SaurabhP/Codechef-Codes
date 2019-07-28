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
    // fast();
    int T, n, numZ, numN, numP;
    cin >> T;

    while(T--){
        // Code here
        cin >> n;
        int arr[n];

        numZ = 0, numN = 0;

        for (int i = 0; i < n; i++){
            cin >> arr[i];

            if (arr[i] < 0) numN++;
            else if (arr[i] > 0) numP++;
            else numZ++;
        }

        cout << numN + numZ << " " << numN << "\n";
    }

    return 0;
}
