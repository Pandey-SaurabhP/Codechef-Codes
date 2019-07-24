#include <iostream>

using namespace std;

int main()
{
    int num1, num2, tests;
    cin >> tests;

    for (int i = 0; i < tests; i++)
    {
        cin >> num1 >> num2;
        cout << num1 + num2 << endl;
    }

    return 0;
}

