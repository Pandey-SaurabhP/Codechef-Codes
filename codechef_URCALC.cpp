/**
 @Author -> saurabh59373
**/

#include <iostream>
#include <iomanip>

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

int main(){
    fast();
    double A, B;
    cin >> A >> B;

    char c;
    cin >> c;

    double res;
    switch (c){
        case '+': res = A + B; break;
        case '-': res = A - B; break;
        case '*': res = A * B; break;
        case '/': res = A / B; break;
    }

    cout << fixed;
    cout << setprecision(8) << res << "\n";
    return 0;
}
