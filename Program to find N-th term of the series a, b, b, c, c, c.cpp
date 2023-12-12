// CPP program to find nth term of the
// given series
#include <bits/stdc++.h>
using namespace std;

// Function to find nth term of the
// given series
void findNthTerm(int n)
{
	// Let us find roots of equation x * (x + 1)/2 = n
	n = n * 2;
	int a = 1, b = 1, c = -1 * n;
	int d = b * b - 4 * a * c;
	double sqrt_val = sqrt(abs(d));
	int x1 = (double)(-b + sqrt_val) / (2 * a);
	int x2 = (double)(-b - sqrt_val) / (2 * a);

	if (x1 >= 1)
		cout << (char)('a' + x1) << endl;
	else if (x2 >= 1)
		cout << (char)('a' + x2) << endl;
}

// Driver program
int main()
{
	int n = 12;
	findNthTerm(n);

	n = 288;
	findNthTerm(n);

	return 0;
}
