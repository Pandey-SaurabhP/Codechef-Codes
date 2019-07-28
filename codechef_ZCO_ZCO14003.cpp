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
    int N;
    cin >> N;

    int arr[N + 1];

    for (int i = 1; i < N; i++){
        cin >> arr[i];
    }

    sort(arr, arr + N);

    long long int Max = -1;
    long long int temp;
    int k = 1;

    for (int i = N; i > 0; --i){
        temp = arr[k] * i;

        if (temp > Max){
            Max = temp;
        }

        k++;
    }

    cout << Max;

    return 0;
}
