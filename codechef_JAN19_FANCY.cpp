/*
 *
 *  @AUTHOR      saurabh59373
*/

#include <iostream>
#include <deque>

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0) ; std::cout.tie(0);
}

int main(){
    fast();
    int T;

    cin >> T;
    cin.ignore();

    while (T--){
        string stree;
        getline (cin, stree);

        deque <char> str;

        for (int i = 0; i < stree.size(); i++){
            str.push_back(stree[i]);
        }

        str.push_back(' ');
        str.push_front(' ');

        string status = "regularly fancy";

        for (int i = 0; i < str.size() - 4; i++){
            if (str[i] == ' ' && str[i + 1] == 'n' && str[i + 2] == 'o' && str[i + 3] == 't' && str[i + 4] == ' '){
                    status = "Real Fancy";
                    break;
            }
        }

        cout << status << "\n";
    }
    return 0;
}
