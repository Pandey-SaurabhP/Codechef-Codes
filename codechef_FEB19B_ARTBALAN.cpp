/**
 @Author -> saurabh59373
**/

#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

int findTurns(int factor, int arr[], int var, int Size){
    int sum = 0;
    int arr2[26];

    for (int i = 0; i < 26; i++){
        arr2[i] = arr[i];
    }

    if (factor < var){
        for (int i = factor; i < 26; i++){
            sum += arr2[i];
            arr2[i] = 0;
        }

        int reqTerm = Size / factor;

        for (int i = 0; i < factor; i++){
            if (arr2[i] > reqTerm){
                sum += arr2[i] - reqTerm;
            }
        }
        return sum;
    }

    int reqTerm = Size / factor;

    for (int i = 0; i < 26; i++){
        if (arr2[i] > reqTerm){
            sum += arr2[i] - reqTerm;
        }
    }

    return sum;
}

int main(){
//    fast();

    int T, Count;
    cin >> T;

    string S;

    while(T--){
// Code here
        cin >> S;
        int arr[26] = {0};

        for (int i = 0; i < S.size(); i++){
            arr[int(S[i]) - 65]++;
        }

        Count = 0;
        for (int i = 0; i < 26; i++){
            if (arr[i] != 0){
                Count++;
            }
        }
// Sorting in descending order
        for (int i = 0; i < 26; i++){
            for (int j = 0; j < 26; j++){
                if (arr[j] < arr[i]){
                    swap (arr[i], arr[j]);
                }
            }
        }

        vector <int> turns;

        for (int i = 1; i <= min(int(S.size()), 26); i++){
            if (S.size() % i == 0){
                turns.push_back(findTurns(i, arr, Count, S.size()));
            }
        }

        int Min = INT_MAX;
        for (int i = 0; i < turns.size(); i++){
            if (Min > turns[i]){
                Min = turns[i];
            }
        }

        cout << Min << "\n";
    }
    return 0;
}
