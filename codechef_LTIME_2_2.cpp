/*
 *Author - saurabh59373
 *Date - 29 December 2018
*/
#include <iostream>
#include <vector>

using namespace std;

int day, month, year;
int COUNT[2];

int main(){
    int T, n;
    cin >> T;

    while (T--){
        cin >> n;
        int arr[n + 1] ;

        long long totalDays = 0 ;

        for (int i = 1; i <= n; i++){
            cin >> arr[i];
            totalDays += arr[i] ;
        }

        long long days = 0 ;
        //long long Count[2] ;
        for (int i = 0; i < 2; i++){
            cin >> year >> month >> day;
            days += year*totalDays ;

            for(int j = 1 ; j < month ; j++) days += arr[j] ;

            days += (year - 1)/4 ;

            days += day ;

            if(!i) days *= -1 ;
          //  Count[i] = days  ;
        }

        std::cout << days + 1 << "\n" ;
    }
    return 0;
}
