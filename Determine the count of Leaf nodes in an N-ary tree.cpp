// CPP program to find number
// of leaf nodes

#include <bits/stdc++.h>
using namespace std;

// Function to calculate
// leaf nodes in n-ary tree
int calcNodes(int N, int I)
{
	int result = 0;

	result = I * (N - 1) + 1;

	return result;
}

// Driver code
int main()
{
	int N = 5, I = 2;

	cout << "Leaf nodes = " << calcNodes(N, I);

	return 0;
}
