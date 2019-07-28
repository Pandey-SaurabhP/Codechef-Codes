#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--){
        int final_push = -1;
        string exp;
        cin >> exp;

        vector <char> pot;

        for (int i = 0; i < exp.size(); i++){
            if (exp[i] == '+' || exp[i] == '-' ||
                exp[i] == '/' || exp[i] == '*' ||
                exp[i] == '^'){
                    pot.push_back(exp[i]);
                    final_push++;
                }
            else if (exp[i] == ')'){
                cout << pot[final_push];
                pot.pop_back();
                final_push--;
            }
            else if (exp[i] == '('){
                continue;
            }
            else{
                cout << exp[i];
            }
        }
        cout << endl;
    }

    return 0;
}
