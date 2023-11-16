// C++ Code to find the Nth number
// with exactly two bits set

#include <bits/stdc++.h>
using namespace std;

// Function to find the Nth number
// with exactly two bits set
void findNthNum(long long int N)
{

	long long int bit_L = 1, last_num = 0;

	// Keep incrementing until
	// we reach the partition of 'N'
	// stored in bit_L
	while (bit_L * (bit_L + 1) / 2 < N) {
		last_num = last_num + bit_L;
		bit_L++;
	}

	// set the rightmost bit
	// based on bit_R
	int bit_R = N - last_num - 1;

	cout << (1 << bit_L) + (1 << bit_R)
		<< endl;
}

// Driver code
int main()
{
	long long int N = 13;

	findNthNum(N);

	return 0;
}
