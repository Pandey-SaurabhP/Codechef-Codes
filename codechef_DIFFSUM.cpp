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

    float n1, n2;
    cin >> n1 >> n2;

    if (n1 > n2){
        cout << n1 - n2 << "\n";
    }
    else{
        cout << n1 + n2 << "\n";
    }
    return 0;
}
