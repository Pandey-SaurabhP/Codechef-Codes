#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, D, Q, dead, req;
    cin >> T;

    while (T--){
        cin >> D;
        int P[D], day[D], cumArr[D];

        cin >> day[0] >> P[0];
        for (int i = 1; i < D; i++){
            cin >> day[i] >> P[i];
        }

        for (int i = 0; i < D; i++){
            for (int j = 0; j < D; j++){
                if (day[i] < day[j]){
                    swap (P[i], P[j]);
                    swap(day[i], day[j]);

                }
            }
        }

        cumArr[0] = P[0];
        for (int i = 1; i < D; i++){
            cumArr[i] = cumArr[i - 1] + P[i];
        }

        int target_day;
        cin >> Q;
        while (Q--){
            target_day = -1;

            cin >> dead >> req;
            for (int i = 0; i < D; i++){
                if (day[i] > dead){
                    break;
                }
                else{
                    target_day = i;
                }
            }

            if (req > cumArr[target_day] || target_day == -1){
                cout << "Go Sleep\n";
            }
            else{
                cout << "Go Camp\n";
            }
        }
    }

    return 0;
}
