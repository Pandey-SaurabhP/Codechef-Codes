/**
 @Author -> saurabhP
**/

#include <iostream>
#include <algorithm>
#include <vector>

// typedef long long int lld;

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

struct problem {
    int score;
    int numSol;
};

struct sol {
    int proNo;
    int Count;
};

bool comparator (problem p1, problem p2){
    if (p1.score < p2.score){
        return true;
    }

    return false;
}

bool comparator2 (sol s1, sol s2){
    if (s1.Count > s2.Count){
        return true;
    }
    else if (s1.Count == s2.Count && s1.proNo > s2.proNo){
        return true;
    }

    return false;
}

int main(){
    // fast();
    int p, s, Count;
    cin >> p >> s;
    problem pp[5];
    sol ss[5];

    for (int j = 0; j < p; j++){
        ss[j].Count = 0;
        ss[j].proNo = j + 1;

        for (int i = 0; i < s; i++){
            cin >> pp[i].score;
        }
        for (int i = 0; i < s; i++){
            cin >> pp[i].numSol;
        }
        sort (pp, pp + s, comparator);

        for (int i = 0; i < s - 1; i++){
            if (pp[i].numSol > pp[i + 1].numSol){
                ss[j].Count++;
            }
        }
    }

    sort (ss, ss + p, comparator2);

    for (int i = p - 1; i >= 0; i--){
        cout << ss[i].proNo << "\n";
    }

    return 0;
}
