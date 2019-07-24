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
    // fast();
    int primeNumbers[50000];
    int numbers[306545] = {1}, numbers2[306545] = {1};

    for (int i = 2; i <= 306545; i += 2){
        numbers[i] = 0;
    }
    for (int i = 2; i <= 306545; i += 2){
        numbers2[i] = 0;
    }

    for (int i = 3; i <= 783; i++){
        if (i % 2 == 0 || numbers[i] == 0){continue;}

        for (int j = i; j <= 306545; j += i){
            numbers[j] = 0;
            numbers2[j] = 0;
        }
    }
    return 0;
}
