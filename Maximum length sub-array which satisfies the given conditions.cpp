// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// Function to return the largest
// required sub-array
int largestSubArr(int arr[], int n)
{

	// incEnding[i] will store the length
	// of the largest increasing subarray
	// ending at arr[i]
	int incEnding[n] = { 0 };
	incEnding[0] = 1;
	for (int i = 1; i < n; i++) {

		// If current element is greater than
		// the previous element then it
		// can be a part of the previous
		// increasing subarray
		if (arr[i - 1] < arr[i])
			incEnding[i] = incEnding[i - 1] + 1;
		else
			incEnding[i] = 1;
	}

	// decStarting[i] will store the length
	// of the largest decreasing subarray
	// starting at arr[i]
	int decStarting[n] = { 0 };
	decStarting[n - 1] = 1;
	for (int i = n - 2; i >= 0; i--) {

		// If current element is greater than
		// the next element then it can be a part
		// of the decreasing subarray
		// with the next element
		if (arr[i + 1] < arr[i])
			decStarting[i] = decStarting[i + 1] + 1;
		else
			decStarting[i] = 1;
	}

	// To store the length of the
	// maximum required subarray
	int maxSubArr = 0;

	// Assume every element to be the mid
	// point of the required array
	for (int i = 0; i < n; i++) {

		// 1 has to be subtracted because the
		// current element will be counted for
		// both the increasing and
		// the decreasing subarray
		maxSubArr = max(maxSubArr, incEnding[i]
									+ decStarting[i] - 1);
	}

	return maxSubArr;
}

// Driver code
int main()
{

	int arr[] = { 1, 2, 2, 1, 3 };
	int n = sizeof(arr) / sizeof(int);

	cout << largestSubArr(arr, n);

	return 0;
}
