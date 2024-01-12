// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// Function to return the LCM of a and b
int lcm(int a, int b)
{
	return (a / __gcd(a, b) * b);
}

// Function to find and print the two numbers
void findNums(int x)
{

	int ans;

	// To find the factors
	for (int i = 1; i <= sqrt(x); i++) {

		// To check if i is a factor of x and
		// the minimum possible number
		// satisfying the given conditions
		if (x % i == 0 && lcm(i, x / i) == x) {

			ans = i;
		}
	}
	cout << ans << " " << (x / ans);
}

// Driver code
int main()
{
	int x = 12;

	findNums(x);

	return 0;
}
