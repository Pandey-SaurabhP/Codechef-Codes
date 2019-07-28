#include <iostream>

using namespace std;

int jump(int N){
    int temp = 0, count_temp = 0 ;

    while (count_temp < N){
        temp++;
        count_temp += temp;
    }

    return temp;
}

int main(){
    int N, c;
    cin >> N >> c;

    int temp = jump(N) ;
    int right = N, tutaha ;
    int left = 1;


    int x = 0;

    for (int i = temp; i <= N; i += temp){
        cout << "1 " << i << endl;
        cin >> tutaha;

        if (tutaha == 1){
            cout << 2 << endl;
            right = i - 1 ;
            break;
        }

        else if (tutaha == 0){
            left = i ;
            x = i ;
            temp-- ;
        }

        else {
            //pass
            break ;
        }
    }

    for (int j = left; j <= right; j++){
        cout << "1 " << j << endl;
        cin >> tutaha;

        if(tutaha == 0){
            x = j;
        }
        else{
            break ;
        }
    }

    cout << "3 " << x + 1 << endl;
    return 0;
}
