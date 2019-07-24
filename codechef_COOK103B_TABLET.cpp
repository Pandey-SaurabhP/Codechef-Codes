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
    int T, n, b;
    cin >> T;

    while(T--){
        // Code here
        cin >> n >> b;
        int wid[n], hei[n], pri[n];
        vector <int> ar;

        for (int i = 0; i < n; i++){
            cin >> wid[i] >> hei[i] >> pri[i];

            if (pri[i] <= b){
                ar.push_back(wid[i] * hei[i]);
            }
        }

        int Max = -1;
        for (int i = 0; i < ar.size(); i++){
            if (ar[i] > Max){
                Max = ar[i];
            }
        }

        if (ar.size() == 0){
            cout << "no tablet\n";
        }
        else {
            cout << Max<< "\n";
        }
    }
    return 0;
}
