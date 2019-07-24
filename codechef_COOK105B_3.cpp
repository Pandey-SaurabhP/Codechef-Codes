/**
 @Author -> saurabhP
**/

#include <iostream>
#include <algorithm>
#include <cmath>
#include <queue>

typedef long long int lld;

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

int main(){
    fast();
    lld T, n, a, b, x, y, z, t1, t2, pt1, pt2, Count, temp;
    cin >> T;

    while(T--){
        // Code here
        cin >> n >> a >> b >> x >> y >> z;
        priority_queue <int> pq;

        for (int i = 0; i < n; i++){
            cin >> temp;
            pq.push(temp);
        }

        t1 = std::ceil((long double)(z - a) / x);
        t2 = std::ceil((long double)(z - b) / y);

        pt1 = (a + (x * t2));
        pt2 = (b + (y * t2));

        bool targ = true;
        Count = 0;

        if (t1 < t2){
            cout << 0;
            continue;
        }

        else {
            for (int i = 0; (pt1 <= z); i++){
                pt1 += pq.top();
                temp = pq.top() / 2;
                pq.pop();
                pq.push(temp);
                Count++;

                if (temp == 0){
                    targ = false;
                    break;
                }
            }
        }

        if (targ == true){
            cout << Count;
        }
        else{
            cout << "RIP";
        }
        cout << "\n";
    }

    return 0;
}
