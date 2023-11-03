// C++ code for Maximum of smallest 
// possible area that can get with 
// exactly k cut of given rectangular
#include <bits/stdc++.h>
using namespace std;

void max_area(int n, int m, int k)
{
	if (k > (n + m - 2))

		cout << "Not possible" << endl;

	else {

		int result;

		// for the 1st case
		if (k < max(m, n) - 1) {

			result = max(m * (n / (k + 1)), n * (m / (k + 1)));
		}

		// for the second case
		else {

			result = max(m / (k - n + 2), n / (k - m + 2));
		}

		// print final result
		cout << result << endl;
	}
}

// driver code
int main()
{

	int n = 3, m = 4, k = 1;
	max_area(n, m, k);
}
