/**
 @Author -> saurabhP
**/

#include <vector>
#include <cmath>
#include <iostream>
#include <algorithm>

#define read(arr, n) for(int i = 0; i < n; i++) std::cin >> arr[i];
#define print(arr, n) for(int i = 0; i < n; i++) std::cout << arr[i] << " ";

typedef long long int lld;

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

string covertBinary (int i, int n){
    string tmp;

    while (i > 0){
        tmp += char((i % 2) + 48);
        i /= 2;
    }

    while (tmp.size() != n) tmp += '0';

    reverse (tmp.begin(), tmp.end());
    return tmp;
}

bool checkTimes(string str, int k){
    int cnt = 0;

    for (int i = 0; i < str.size(); i++){
        if (str[i] == '1'){
            cnt++;
        }
    }

    if (cnt == k) return true;
    return false;
}

lld sum (int arr[], int n){
    lld SS = 0;
    for (int i = 0; i < n; i++) SS += arr[i];
    return SS;
}


vector <int> vc;

int main(){
    fast();
    lld T, n, k, x, till, MAX;
    string tmp;

    cin >> T;

    vc.reserve(100);

    while(T--){
        // Code here
        vc.clear();
        cin >> n;
        int arr[n];

        read(arr, n);

        cin >> k >> x;
        vc.push_back(sum(arr, n));

        till = pow(2, n);

        for (int i = 0; i < till; i++){
            tmp = covertBinary(i, n);

            if (checkTimes(tmp, k)){
                for (int i = 0; i < n; i++){
                    if (tmp[i] == '1') arr[i] = arr[i] ^ x;
                }
                vc.push_back(sum(arr, n));
            }
        }

        MAX = -1111;

        for (int i = 0; i < vc.size(); i++){
            if (vc[i] > MAX) MAX = vc[i];
        }
        cout << MAX << "\n";
    }

    return 0;
}
