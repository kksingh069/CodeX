// CPP program to increment an unsigned
// int using bitwise operators.
#include <bits/stdc++.h>
using namespace std;

// function that increment the value.
int increment(unsigned int i)
{
	// Invert bits and apply negative sign
	i = -(~i);

	return i;
}

// Driver code
int main()
{
	int n = 3;
	cout << increment(n);
	return 0;
}
