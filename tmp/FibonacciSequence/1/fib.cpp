#include<iostream>
using namespace std;

int main()
{
	unsigned long long n, t1 = 0, t2 = 1, sum = 0;
	cout << "Max Iteration: -> ";
    cin >> n;
	for (unsigned long long i = 1; i <= n; i++)
	{
		if (i == 1)
			cout << t1 << " ";
		else if (i == 2)
			cout << t2 << " ";
		else
		{
			sum = t1 + t2;
			cout << sum << " Iter: " << i << endl;
			t1 = t2;
			t2 = sum;
		}
        if (sum > 9000000000000000000) {
            int desuka=0;
            cout << "AAAAAAAAAAAAA";
            cin >> desuka;
        }
	}
	return 0;
}
