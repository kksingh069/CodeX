// CPP program to find the Nth term of
// the series 14, 28, 20, 40, …..

#include <iostream>
using namespace std;

// Function to find the N-th term
int findNth(int N)
{
	// initializing the 1st number
	int b = 14;

	int i;

	// loop from 2nd term to nth term
	for (i = 2; i <= N; i++) {
		// if i is even, double the
		// previous number
		if (i % 2 == 0)
			b = b * 2;
		// if i is odd, subtract 8 from
		// previous number
		else
			b = b - 8;
	}

	return b;
}

// Driver Code
int main()
{
	int N = 6;

	cout << findNth(N);

	return 0;
}
