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

struct assc {
    bool as;
    int cnt;
};

int main(){
    // fast();
    int n, q, k, kk = 0;
    cin >> n >> q >> k;

    int arr[n + n];
    string qr;

    for (int i = 0; i < n; i++){
        cin >> arr[i];
        arr[n + i] = arr[i];
    }
//
//    for (int i = 0; i < vc.size(); i++){
//        cout << "Association -> " << vc[i].as << "\nSize -> " << vc[i].cnt;
//        cout << "\n";
//    }

    int st = 0, ed = n - 1, MAX;
    vector <int> vc;
    for (; ed < n + n; st++; ed++){
        vector <assc> vc (1);
        vc[kk].as = arr[st];
        vc[kk].cnt = 1;

        for (int i = st + 1; i <= ed; i++){
            if (arr[i] != arr[i - 1]){
                vc.push_back(assc());
                kk++;
                vc[kk].as = arr[i];
                vc[kk].cnt = 1;
            }
            else vc[kk].cnt++;
        }

        MAX = -1;
        for ()
    }




    return 0;
}
