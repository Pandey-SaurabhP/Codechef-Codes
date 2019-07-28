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
    // fast();
    int N, Box;
    cin >> N >> Box;

    int arr[N + 1];

    for (int i = 1; i <= N; i++){
        cin >> arr[i];
    }

    int inp;
    int targ = 1;
    bool carry = false;

    cin >> inp;

    while(inp){
        if (inp == 1 && targ > 0){
            targ--;
        }
        else if (inp == 2 && targ < N){
            targ++;
        }
        else if (inp == 3 && arr[targ] > 0 && !carry){
            arr[targ]--;
            carry = true;
        }
        else if (inp == 4 && arr[targ] < Box && carry){
            arr[targ]++;
            carry = false;
        }
        cin >> inp;
    }

    for (int i = 1; i <= N; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
