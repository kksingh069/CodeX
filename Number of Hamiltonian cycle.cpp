// C++ program for implementation of the 
// above program

#include <bits/stdc++.h>
using namespace std;

// Function that calculates
// number of Hamiltonian cycle
int Cycles(int N)
{

	int fact = 1, result = 0;

	result = N - 1;

	// Calculating factorial
	int i = result;
	while (i > 0) {
		fact = fact * i;
		i--;
	}

	return fact / 2;
}

// Driver code
int main()
{
	int N = 5;

	int Number = Cycles(N);

	cout << "Hamiltonian cycles = " << Number;
	return 0;
}
