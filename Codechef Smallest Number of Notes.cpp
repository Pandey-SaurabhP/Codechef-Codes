#include <iostream>

using namespace std;

int main()
{
    int notes[6] = {1, 2, 5, 10, 50, 100};
    int N, T;

    cin >> T;

    while(T != 0)
    {
        int count = 0, i = 5;
        cin >> N;

        while(N != 0)
        {
            if(N >= notes[i])
            {
                N -= notes[i];
                count++;
            }

            else
            {
                i--;
            }
        }

        cout << count << endl;
        T--;
    }

    return 0;
}
