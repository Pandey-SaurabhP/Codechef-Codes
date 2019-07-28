/**
 @Author -> saurabhP
**/

#include <iostream>
#include <vector>

typedef long long int lld;

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

int main(){
    // fast();
    int T, n, z, k;
    cin >> T;

    while(T--){
        // Code here
        cin >> n >> z;

        int arr[n];
        vector <int> cc;
        vector <int> val;
        k = 0;

        cin >> arr[0];
        cc.push_back(1);
        val.push_back((arr[0] == 0)? 0: 1);

        for (int i = 1; i < n; i++){
            cin >> arr[i];

            if (arr[i - 1] == arr[i]){
                cc[k]++;
            }
            else{
                cc.push_back(1);
                val.push_back(arr[i]);
                k++;
            }
        }

        for (int i = 0; i < )

    }

    return 0;
}
