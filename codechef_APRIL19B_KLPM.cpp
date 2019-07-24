/**
 @Author -> saurabhP
**/

#include <iostream>
#include <vector>

typedef long long int lld;

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

vector <string> vc;

bool isPalindrome (string str){
    int low = 0;
    int high = str.size() - 1;

    while (high > low){
        if (str[low++] != str[high--]){
            return false;
        }
    }

    return true;
}

int main(){
    fast();

    string str;
    cin >> str;

    for (int idx = 0; idx < str.size(); idx++){
        for (int size_ = 1; size_ < str.size() - idx; size_++){
            for (int targVal = idx + 1; targVal <= str.size() - size_; targVal++){
                vc.push_back(str[idx] + str.substr(targVal, size_));
            }
        }
    }

    lld Count = 0;

    for (int i = 0; i < vc.size(); i++){
        cout << vc[i];
        if (isPalindrome(vc[i])){
            Count += vc[i].size();
            Count--;

            cout << " " << Count;
        }
        cout << "\n";
    }

    cout << Count;

    return 0;
}
