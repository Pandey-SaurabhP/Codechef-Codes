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

int isSubstring(string s1, string s2)
{
    int M = s1.length();
    int N = s2.length();

    for (int i = 0; i <= N - M; i++) {
        int j;

        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;

        if (j == M)
            return 1;
    }

    return 0;
}

int main(){
    // fast();
    string str;
    int T, n;
    cin >> T;

    while(T--){
        // Code here
        cin >> n >> str;
        string newStr = "";
        vector <string> arr;

        int CC[n] = {0};
        for (int i = 0; i < n; i++){
            newStr.push_back(str[i]);
            arr.push_back(newStr);

            CC[i] += isSubstring(newStr, str);
            cout << CC[i] << " ";
        }

    }
    return 0;
}
