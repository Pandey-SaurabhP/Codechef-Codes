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
    int T, n, x;
    cin >> T;

    while(T--){
        // Code here
        cin >> n >> x;
        vector <int> arr(5000000, 0);

        int limit = 2500000 + x;
        arr[limit] = 1;

        string str;
        cin >> str;

        int MAX = INT_MIN;
        for (int i = 0; i < str.size(); i++){
            if (MAX < limit){
                MAX = limit;
            }

            if (str[i] == 'R'){
                limit++;
                arr[limit] = 1;
            }

            else if(str[i] == 'L'){
                limit--;
                arr[limit] = 1;
            }
        }

        int Count = 0;
        for (int i = 0; i <= MAX; i++){
            if (arr[i] == 1){
                Count++;
            }
        }
        cout << Count << "\n";
    }
    return 0;
}
