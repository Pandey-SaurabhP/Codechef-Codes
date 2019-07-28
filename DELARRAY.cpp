#include <iostream>
#include <vector>

using namespace std;

#define read(arr, n) for (int i = 0; i < n; i++) cin >> arr[i];
#define print(arr, n) for (int i = 0; i < n; i++) cout << arr[i] << " ";

typedef long long int lld;

inline void fast (){
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
}

bool inc (vector <int> vc){
    if (vc.size() == 1) return true;

    for (int i = 1; i < vc.size(); i++){
        if (vc[i - 1] >= vc[i]) return false;
    }
    return true;
}

int main(){
    // fast();

    lld t, n, c;
    cin >> t;

    vector <int> vc;

    while (t--){
        cin >> n;
        int arr[n];

        c = 0;

        read(arr, n);

        for (int s = 0; s < n; s++){
            for (int e = s; e < n; e++){
                vc.clear();

                for (int i = 0; i < n; i++){
                    if (i >= s && i <= e) continue;
                    else vc.push_back(arr[i]);
                }

                if (vc.size() == 0) continue;
//
//                print (vc, vc.size());
//                cout << "\n";

                if (inc(vc)){
                    c++;
//                    cout << "Yes!\n";
                }
            }
        }

        cout << c << "\n";
    }

    return 0;
}

