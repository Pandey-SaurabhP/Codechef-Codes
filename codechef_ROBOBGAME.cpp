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

int Dots[111111], numbers[111111];

int countDots (string str){
    int k = 0;

    for (int i = 0; i < str.size(); i++){
        if (str[i] != '.') {
            k++;
        }
        else {
            Dots[k]++;
        }
    }
    return k;
}

int countNumbers (string str) {
    int k = 0;

    for (int i = 0; i < str.size(); i++) {
        if (str[i] != '.'){
            numbers[k] = str[i] - 48;
        }
    }
    return k;
}

int main(){
    fast();
    int T;
    cin >> T;

    string str;

    while(T--){
        // Code here
        cin >> str;

        int k1 = countDots(str);
        int k2 = countNumbers(str);

        for (int i = 0; i <= k1; i++){
            cout << Dots[i] << " ";
        }
        cout << "\n";

        for (int i = 0; i < k2; i++){
            cout << numbers[i] << " ";
        }
        cout << "\n";

    }
    return 0;
}
