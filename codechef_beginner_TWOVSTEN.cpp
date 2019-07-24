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
int main(){
    fast();
    int T, Count;
    long long int n;
    cin >> T;
    bool targ = false;
    while(T--){
        // Code here
        targ = false;
        Count = 0;
        cin >> n;
        if (n % 10 == 0){
            targ = true;
            goto yes;
        }
        h = n * 100000;
        for(unsigned long long i = n; i < h; i *= 2){
            Count++;
            if (i % 10 == 0){
                targ = true;
                break;
            }
        }
        yes:
        if (targ == true){
            cout << Count << "\n";
        }
        else{
            cout << -1 << "\n";
        }
    }
    return 0;
}
