/**
 @Author -> saurabhP
**/

#include <iostream>
#include <string>

#define read(arr, n) for(int i = 0; i < n; i++) std::cin >> arr[i];
#define print(arr, n) for(int i = 0; i < n; i++) std::cout << arr[i] << " ";

typedef long long int lld;

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

int Mod(string n, int divisor)
{
    int mod = 0;
    string q;

    int i = 0;
    int temp = n[i] - '0';
4
    while (temp < divisor){
       temp = temp * 10 + (n[++i] - '0');
    }

    while (n.size() > i){
        q += (temp / divisor) + '0';
        mod = (temp % divisor);
        temp = mod * 10 + n[++i] - '0';

//        cout << "mod -> " << mod << "\n";
    }

    if (q.length() == 0) return 0;

    temp /= 10;
//    cout << temp << "\n";
    return mod;
}


int main(){
    // fast();
    int T, n, l, m, MIN, MAX;
    string k;

    cin >> T;

    while(T--){
        // Code here
        cin >> n >> k;

        if (k.size() < 7){
            if (stoi(k) < n){
                int t = stoi(k);
                l = t % n;
                m = n - l;
            }
            else {
                l = Mod(k, n);
                m = n - l;
            }

        }
        else {
            l = Mod(k, n);
            m = n - l;
        }

        MIN = min (l, m);
        MAX = max (l, m);

//        cout << l << " " << m << "\n";

        if (MAX == MIN){
            cout << MAX + MIN - 1;
        }
        else cout << MIN * 2;

        cout << "\n";

    }

    return 0;
}

/*
5
2 6
2 3
3 2
13 5
3 6
*/
