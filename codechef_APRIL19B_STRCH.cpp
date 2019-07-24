/**
 @Author -> saurabh59373
**/

#include <iostream>
#include <vector>

using namespace std;

inline void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

int main(){
    fast();
    long long int T, n, Count, pre, post, it, mn;
    cin >> T;

    char k;
    string str;

    while(T--){
        // Code here
        cin >> n;
        cin >> str >> k;

        Count = 0;
        vector <int> vc;
        it = -1;

        for (mn = 0; mn < n; mn++){
            if (str[mn] == k){
                break;
            }
        }

        for (int i = mn; i < n; i++){
            if (str[i] == k){
                vc.push_back(0);
                it++;
            }
            else{
                vc[it]++;
            }
        }

        it = 0;
        for (long long int i = 0; i < n; i++){
            if (str[i] == k){
                pre = i;
                post = vc[it];

                Count += 1;
                Count += pre;
                Count += post;
                Count += pre * post;

                it++;
            }
        }

        cout << Count << "\n";
    }
    return 0;
}
