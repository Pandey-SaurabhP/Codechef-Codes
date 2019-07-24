/**
 @Author -> saurabh59373
**/

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

int main(){
    // fast();
    int T, n;
    cin >> T;

    while(T--){
        // Code here
        cin >> n;
        int att[n], def[n];
        vector <int> Count;

        for (int i = 0; i < n; i++){
            cin >> att[i];
        }

        for (int i = 0; i < n; i++){
            cin >> def[i];
        }

        if (att[n - 1] + att[1] < def[0]){
            Count.push_back(def[0]);
        }

        for (int i = 1; i < n - 1; i++){
            if (att[i - 1] + att[i + 1] < def[i]){
                Count.push_back(def[i]);
            }
        }

        if (att[n - 2] + att[0] < def[n - 1]){
            Count.push_back(def[n - 1]);
        }

        int Max = INT_MIN;

        for (int i = 0; i < Count.size(); i++){
            if (Max < Count[i]){
                Max = Count[i];
            }
        }

        if (Count.size() == 0){
            cout << -1 << "\n";
        }
        else {
            cout << Max << "\n";
        }
    }
    return 0;
}
