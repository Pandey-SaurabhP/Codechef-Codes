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

    int T, n;
    cin >> T;

    string days[7] = {"mon", "tues", "wed", "thurs", "fri", "sat", "sun"};
    string firstDay;

    while (T--){
        int arr[7] = {4, 4, 4, 4, 4, 4, 4};
        cin >> n >> firstDay;

        int temp = n % 28, i = 0;

        for (; i < 7; i++){
            if (days[i] == firstDay){
                break;
            }
        }

        temp += i;
        for (; i < temp; i++){
            arr[i % 7]++;
        }

        for (int i = 0; i < 7; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
