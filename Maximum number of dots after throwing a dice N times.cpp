// CPP program for above implementation
#include <bits/stdc++.h>
using namespace std;

// Function find the maximum expectation
double expect(double m, double n)
{
	double ans = 0.0, i;

	
	for (i = m; i; i--)
		// formula to find the maximum number and
		// sum of maximum numbers
		ans += (pow(i / m, n) - pow((i - 1) / m, n)) * i;

	return ans;
}

// Driver code
int main()
{
	double m = 6, n = 3;
	cout << expect(m, n);

return 0;
}
