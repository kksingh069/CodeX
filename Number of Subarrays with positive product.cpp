// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// Function to return the count of
// subarrays with negative product
int negProdSubArr(int arr[], int n)
{
	int positive = 1, negative = 0;
	for (int i = 0; i < n; i++) {

		// Replace current element with 1
		// if it is positive else replace
		// it with -1 instead
		if (arr[i] > 0)
			arr[i] = 1;
		else
			arr[i] = -1;

		// Take product with previous element
		// to form the prefix product
		if (i > 0)
			arr[i] *= arr[i - 1];

		// Count positive and negative elements
		// in the prefix product array
		if (arr[i] == 1)
			positive++;
		else
			negative++;
	}

	// Return the required count of subarrays
	return (positive * negative);
}

// Function to return the count of
// subarrays with positive product
int posProdSubArr(int arr[], int n)
{

	// Total subarrays possible
	int total = (n * (n + 1)) / 2;

	// Count to subarrays with negative product
	int cntNeg = negProdSubArr(arr, n);

	// Return the count of subarrays
	// with positive product
	return (total - cntNeg);
}

// Driver code
int main()
{
	int arr[] = { 5, -4, -3, 2, -5 };
	int n = sizeof(arr) / sizeof(arr[0]);

	cout << posProdSubArr(arr, n);

	return 0;
}
