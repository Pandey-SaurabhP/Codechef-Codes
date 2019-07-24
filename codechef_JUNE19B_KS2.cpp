/**
 @Author -> saurabhP
**/

#include <iostream>
#include <vector>

#define read(arr, n) for(int i = 0; i < n; i++) std::cin >> arr[i];
#define print(arr, n) for(int i = 0; i < n; i++) std::cout << arr[i] << " ";

typedef long long int lld;

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

int digitSum(string ss){
    int ans = 0;

    for (int i = 0; i < ss.size(); i++){
        ans += ss[i] - 48;
    }

    return ans % 10;
}

int main(){
    fast();

    int T, kk, tt;
    string str;
    char ttkk;

    cin >> T;

    while(T--){
        cin >> str;

        kk = digitSum(str);

        if (kk == 0){
            ttkk = '0';
        }
        else{
            tt = 10 - kk;
            ttkk = char(tt + 48);
        }

        str += ttkk;
        cout << str << "\n";
    }

    return 0;
}
