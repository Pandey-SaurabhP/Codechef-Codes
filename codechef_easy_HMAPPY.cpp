/**
 @Author -> saurabh59373
**/

#include <iostream>
#include <utility>
#include <algorithm>

using namespace std;

void fast(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0); std::cout.tie(0);
}

int main(){
    fast();

    long long int N, M;
    cin >> N >> M;

    long long int A[N], B[N], C[N];
    pair <long long int, long long int> pairs[N];

    for (int i = 0; i < N; i++){
        cin >> A[i];
    }

    for (int i = 0; i < N; i++){
        cin >> B[i];
        C[i] = A[i] * B[i];

        pairs[i] = make_pair(C[i], B[i]);
    }

    sort (pairs, pairs + N);

    int k;

    for (long long int i = 0; i < M; i++){

    }

    cout << pairs[N - 1].first;

    return 0;
}
