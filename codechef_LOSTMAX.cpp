/*
 *
 *  *AUTHOR      saurabh59373
*/

#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0) ; std::cout.tie(0);
}

string exp;
int MAX;

int findMAX(vector <int> v){
    MAX = 0;
    bool cond = true;

    for (int i = 0; i < v.size(); i++){
        if (v[i] == v.size() - 1 && cond == true){
            v[i] = 0;
            cond = false;
        }

        if (v[i] > MAX){
            MAX = v[i];
        }
    }
    return MAX;
}

int main(){
    // fast();
    int T;
    cin >> T;

    cin.ignore();

    while (T--){

        getline (cin, exp);
        stringstream num(exp);
        vector <int> arr;

        for (int i = 0; num >> i;){
            arr.push_back(i);
        }

        cout << findMAX(arr) << "\n";
    }

    return 0;
}
