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
    // fast();

    int t, n, k, P;
    cin >> t;

    while(t--){
        P = 0;
        cin >> n >> k;
        int row[n + 1] = {0}, col[n + 1] = {0};

        int t1, t2;

        for (int i = 0; i < k; i++){
            cin >> t1 >> t2;

            row[t1] = 2;
            col[t2] = 2;
        }

        cout << n - k << " ";

        int rowAns[n - k], colAns[n - k];

        int m = 0;

        for (int i = 1; i <= n; i++){
            if (row[i] == 0){
                row[i] = 1;

                rowAns[m] = i;
                m++;
            }
        }

        m = 0;

        for (int i = 1; i <= n; i++){
            if (col[i] == 0){
                col[i] = 1;

                colAns[m] = i;
                m++;
            }
        }

        for (int i = 0; i < n - k; i++){
            cout << rowAns[i] << " " << colAns[i] << " ";
        }

        cout << "\n";
    }
    return 0;
}
