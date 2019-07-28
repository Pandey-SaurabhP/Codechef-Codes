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
    int T, n, k;
    cin >> T;

    while(T--){
        // Code here
        cin >> n >> k;
        int arr[n];
        vector <int> ndarr(300000, 0);

        int max_ = -1;
        for (int i = 0; i < n; i++){
            cin >> arr[i];
            ndarr[arr[i]]++;

            if (max_ < arr[i]){
                max_= arr[i];
            }
        }

        int minChance[9999] = {0}, o = 0;

        for (int i = 0; i < max_; i++){
            if (ndarr[i] > k){

                int elems[ndarr[i] - 1] = {0};
                int m = 0, start;
                for (int j = 0; j < n; j++){
                    if (arr[j] == i){
                        start = j;
                        break;
                    }
                }

                for (int j = start + 1; j < n; j++){
                    if (arr[j] != i){
                        elems[m]++;
                    }
                    else{
                        m++;
                    }
                }

                int sum[m] = {0};
                if (m - 1 > k){
                    for (int j = 0; j < m - k; j++){
                        start = 0;
                        for (int l = start; l < start + k; l++){
                            sum[start] += l;
                        }
                        start++;
                    }
                }

                int min_ = 100000000;
                for (int j = 0; j < start; j++){
                    if (sum[j] < min_){
                        min_ = sum[j];
                    }
                }

                minChance[o] = min_;
                o++;
            }
        }

        cout << o << " <- O ";
        int min_ = 100000000;
        for (int i = 0; i < o; i++){
            cout << minChance[i] << " ";
            if (minChance[i] < min_){
                min_ = minChance[i];
            }
        }

        cout << min_ << "\n";
    }
    return 0;
}
