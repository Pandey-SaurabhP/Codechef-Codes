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
    int T, n, cc;
    cin >> T;

    while(T--){
        // Code here
        cin >> n;
        vector <int> vc (n);

        for (int i = 0; i < n; i++){
            cin >> vc[i];
        }

        cc = 0;

        for (int i = 0; i < vc.size() - 1; i++){
            if (vc[i] > vc[i + 1]){
                vc.push_back(vc[i]);
                vc[i] = 0;
                cc++;
            }

            for (int i = 0; i < vc.size(); i++){
                cout << vc[i] << " ";
            }
            cout << "\n";
        }
        cout << cc << "\n";
    }

    return 0;
}
