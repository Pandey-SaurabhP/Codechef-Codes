#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int n, t, a[200], index, temp;
	cin >> t;
	while (t--)
	{
		a[0] = 1;
		index = 0;
		//printf("Enter the number\n");
		cin >> n;
		for (n; n >= 2; n--)
		{
		    temp = 0;

			for (int i = 0; i <= index; i++)
			{
				temp = (a[i] * n) + temp;
				a[i] = temp % 10;
				temp = temp / 10;
			}

			while (temp > 0)
			{
			a[++index] = temp % 10;
			temp = temp / 10;
			}
		}
		for (int i = index; i >= 0; i--)
		{
			printf ("%d", a[i]);
			printf ("\n");
		}	3
	}
	return 0;
}