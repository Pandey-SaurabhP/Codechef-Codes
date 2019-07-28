/**
 @Author -> saurabhP
**/

#include <iostream>
#include <vector>

#define read(arr, n) for(int i = 1; i <= n; i++) arr[i] = i;
#define print(arr, n) for(int i = 1; i <= n; i++) std::cout << arr[i] << " ";

typedef long long int lld;

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

int main(){
    // fast();
    int T, n, q, t, l, r, x, ss, MAX;
    cin >> T;

    while(T--){
        // Code here
        cin >> n >> q;
        int arr[n + 1];

        read (arr, n);
        ss = 0;

        while (q--){
            cin >> t;

            if (t == 1){
                cin >> x;
                arr[x + ss] = 0;
            }
            else{
                cin >> l >> r;
                MAX = -1;
                for (int i = l + ss; i <= r + ss; i++){
                    if (MAX < arr[i]) MAX = arr[i];
                }
                print (arr, n);
                cout << endl << endl;

                cout << MAX << "\n";

                ss = (MAX + ss) % n;
            }
        }

    }

    return 0;
}
