/**
 @Author -> saurabhP
**/

#include <iostream>
#include <algorithm>
#include <vector>

typedef long long int lld;

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

struct seq {
    int idx, val;
};

bool comp (seq s1, seq s2){
    if (s1.val < s2.val){
        return true;
    }
    return false;
}

int main(){
    fast();
    int n, m;
    // Code here
    cin >> n >> m;
    seq arr1[n];
    seq arr2[m];

    for (int i = 0; i < n; i++){
        cin >> arr1[i].val;
        arr1[i].idx = i;
    }

    for (int i = 0; i < m; i++){
        cin >> arr2[i].val;
        arr2[i].idx = i;
    }

    sort (arr1, arr1 + n, comp);
    sort (arr2, arr2 + n, comp);

    for (int i = 0; i < m; i++){
        cout << arr1[0].idx << " " << arr2[i].idx << "\n";
    }

    for (int j = n - 1; j > 0; j--){
        cout << arr1[j].idx << " " << arr2[m - 1].idx << "\n";
    }

    return 0;
}
