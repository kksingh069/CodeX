// CPP program to answer queries for count of
// primes in given range.
#include <bits/stdc++.h>
using namespace std;

const int MAX = 10000;

// prefix[i] is going to store count of primes
// till i (including i).
int prefix[MAX + 1];

void buildPrefix()
{
	// Create a boolean array "prime[0..n]". A
	// value in prime[i] will finally be false
	// if i is Not a prime, else true.
	bool prime[MAX + 1];
	memset(prime, true, sizeof(prime));

	for (int p = 2; p * p <= MAX; p++) {

		// If prime[p] is not changed, then
		// it is a prime
		if (prime[p] == true) {

			// Update all multiples of p
			for (int i = p * 2; i <= MAX; i += p)
				prime[i] = false;
		}
	}

	// Build prefix array
	prefix[0] = prefix[1] = 0;
	for (int p = 2; p <= MAX; p++) {
		prefix[p] = prefix[p - 1];
		if (prime[p])
			prefix[p]++;
	}
}

int query(int L, int R)
{
	return prefix[R] - prefix[L - 1];
}

// Driver code
int main()
{
	buildPrefix();

	int L = 5, R = 10;
	cout << query(L, R) << endl;

	L = 1, R = 10;
	cout << query(L, R) << endl;

	return 0;
}
