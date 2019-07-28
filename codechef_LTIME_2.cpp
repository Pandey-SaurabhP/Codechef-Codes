#include <iostream>

using namespace std;

int main(){
    int T, N;
    cin >> T;

    while (T--){
        cin >> N;
        int arr[N];
        int yb, mb, db;
        int yc, mc, dc;

        for (int i = 0; i < N; i++){
            cin >> arr[i];
        }

        cin >> yb >> mb >> db;
        cin >> yc >> mc >> dc;

        int Count = 0, Count_2 = 0;
        while (yc != 0){
            dc--;
            if (dc = 0){
                mc--;
                dc = arr[mc - 1];
            }
            if (mc = 0){
                mc = N;
                yc--;
            }
            Count++;
            cout << dc << " " << mc << " " << yc << endl;
        }

        while (yb != 0){
            db--;
            if (db = 0){
                mb--;
                db = arr[mb - 1];
            }
            if (mb = 0){
                mb = N;
                yb--;
            }
            Count_2++;
            cout << db << " " << mb << " " << yb << endl;
        }

        cout << Count << Count_2 << endl;
    }
    return 0;
}
