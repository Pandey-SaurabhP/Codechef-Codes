//  *AUTHOR      saurabh59373

#include <iostream>
#include <vector>

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0) ; std::cout.tie(0);
}

int main(){
    fast();
    float T, chefPos, kefaPos, recipePos;
    float chefSpeed, kefaSpeed;

    cin >> T;

    while (T--){
        float chefTime, kefaTime;
        cin >> chefPos >> kefaPos >> recipePos;
        cin >> chefSpeed >> kefaSpeed;

        chefTime = (recipePos - chefPos) / chefSpeed;
        kefaTime = (kefaPos - recipePos) / kefaSpeed;

        if (chefTime < kefaTime){
            cout << "Chef\n";
        }
        else if (kefaTime < chefTime){
            cout << "Kefa\n";
        }
        else {
            cout << "Draw\n";
        }
    }
    return 0;
}
