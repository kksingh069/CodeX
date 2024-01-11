// C++ implrmrntation of the approach

#include <iostream>
using namespace std;

// Function to return the frequency of x
// in the subarray arr[low...high]
int count(int arr[], int low, int high, int x)
{

	// If the subarray is invalid or the
	// element is not found
	if ((low > high)
		|| (low == high && arr[low] != x))
		return 0;

	// If there's only a single element
	// which is equal to x
	if (low == high && arr[low] == x)
		return 1;

	// Divide the array into two parts and
	// then find the count of occurrences
	// of x in both the parts
	return count(arr, low,
				(low + high) / 2, x)
		+ count(arr, 1 + (low + high) / 2,
				high, x);
}

// Driver code
int main()
{
	int arr[] = { 30, 1, 42, 5, 56, 3, 56, 9 };
	int n = sizeof(arr) / sizeof(int);
	int x = 56;

	cout << count(arr, 0, n - 1, x);

	return 0;
}
