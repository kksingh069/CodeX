// C++ code to implement the above approach.

#include <bits/stdc++.h>
using namespace std;

// Function to check if it is possible
// to make the array elements consecutive
bool ispossible(int arr[], int n)
{

	// If the first element left unchanged
	// The valid sequence should look like
	// arr[0], arr[0]+1, arr[0]+2 ...
	int possibility1[n];
	for (int i = 0; i < n; i++)
		possibility1[i] = i + arr[0];

	// If incremented the first element
	// The valid sequence should look like
	// arr[0]+1, arr[0]+2, arr[0]+3 ...
	int possibility2[n];
	for (int i = 0; i < n; i++)
		possibility2[i] = i + arr[0] + 1;

	// If decremented the first element
	// The valid sequence should look like
	// arr[0]-1, arr[0]-2, arr[0]-3 ...
	int possibility3[n];
	for (int i = 0; i < n; i++)
		possibility3[i] = i + arr[0] - 1;

	// Now check if it is possible to convert
	// array in any of the above mentioned
	// three possibilities, which were,
	// either increment, decrement or
	// left unchanged. So the gap between
	// current and desired should not be
	// greater than 2
	bool canposs1 = true, canposs2 = true;
	bool canposs3 = true;

	// Is it possible to convert array
	// in possibility 1
	for (int i = 0; i < n; i++) {
		if (abs(possibility1[i] - arr[i]) > 1) {
			canposs1 = false;
			break;
		}
	}

	// Is it possible to convert array
	// in possibility 2
	for (int i = 0; i < n; i++) {
		if (abs(possibility2[i] - arr[i]) > 1) {
			canposs2 = false;
			break;
		}
	}

	// Is it possible to convert array
	// in possibility 3
	for (int i = 0; i < n; i++) {
		if (abs(possibility3[i] - arr[i]) > 1) {
			canposs3 = false;
			break;
		}
	}

	// If any one is possible
	// then "YES" else "NO"
	if (canposs1 || canposs2 || canposs3) {
		return true;
	}
	return false;
}

// Drivers code
int main()
{
	int N = 4;
	int arr[N] = { 1, 2, 3, 7 };

	// Function call
	if (ispossible(arr, N)) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}
