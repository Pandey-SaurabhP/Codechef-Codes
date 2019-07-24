/**
 @Author -> saurabh59373
**/

#include <iostream>
#include <climits>
#include <vector>

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

string removeDupl(string source){
    for (int i = 0; i < source.size(); i++){
        for (int j = 0; j < i; j++){
            if (source[i] == source[j]){
                source[i] = '.';
                break;
            }
        }
    }
    return source;
}

string findUnmatched (string str, string source){
    bool targ = false;

    for (int i = 0; i < source.size(); i++){
        for (int j = 0; j < str.size(); j++){
            if (str[j] == source[i]){
                targ = true;
                break;
            }
        }

        if (!targ){
            source[i] = '.';
        }
        targ = false;
    }
    return source;
}

int main(){
    // fast();
    int T, n;
    cin >> T;

    int MIN, Index;

    while(T--){
        // Code here
        cin >> n;
        string arr[n];

        MIN = INT_MAX;
        for (int i = 0; i < n; i++){
            cin >> arr[i];

            if (arr[i].size() < MIN){
                MIN = arr[i].size();
                Index = i;
            }
        }

        arr[Index] = removeDupl(arr[Index]);

        for (int i = 0; i < n; i++){
            arr[Index] = findUnmatched(arr[i], arr[Index]);
        }

        int Count = 0;

        for (int i = 0; i < arr[Index].size(); i++){
            if (arr[Index][i] != '.'){
                Count++;
            }
        }
        cout << Count << "\n";
    }
    return 0;
}
