// CPP program to find XOR of pair
// sums.
#include <bits/stdc++.h>

using namespace std;

int xorPairSum(int ar[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++) 
		for (int j = 0; j < n; j++) 
			sum = sum ^ (ar[i] + ar[j]);
	return sum;
}

// Driver code
int main()
{
	int arr[] = { 1, 2, 3 };
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << xorPairSum(arr, n);
	return 0;
}
