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
        // Code here
        cin >> n;
        vector <int> v1;

        v1.push_back(1);

        for (int i = 1; i <= n; i++){
            for (int j = 0; j < v1.size(); j++){
                v1[j] = v1[j] * i;
            }

            for (int j = 0; j < v1.size(); j++){
                if (v1[j] >= 10){
                    if (j == v1.size() - 1){
                        v1.push_back(0);
                    }
                }

                v1[j + 1] += v1[j] / 10;
                v1[j] = v1[j] % 10;
            }
        }

        reverse (v1.begin(), v1.end());

        for (int i = 0; i < v1.size(); i++){
            cout << v1[i];
        }
        cout << endl;
    }
    return 0;
}
