/**
 @Author -> saurabh59373
**/

#include <iostream>
#include <algorithm>

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

int main(){
    // fast();
    int T, n, c, d;
    cin >> T;

    while(T--){
        // Code here
        cin >> n;
        long long int ent[n], end_[n];
        long long int arr[n * 2];

        for (int i = 0; i < n; i++){
            cin >> ent[n] >> end_[n];
        }

        sort(ent, ent + n);
        sort(end_, end_ + n);

        int Count = 2;

        for (int i = 1; i < n; i++){
            if (ent[i] - end_[i - 1]  > 0){
                Count++;
            }
        }

        cout << Count << "\n";
    }
    return 0;
}
