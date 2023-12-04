// C++ implementation of above approach
#include <bits/stdc++.h>
using namespace std;

// Function to return the count of valid pairs
int countPairs(int a[], int n)
{
	// Storing occurrences of each element
	unordered_map<int, int> mp;
	for (int i = 0; i < n; i++)
		mp[a[i]]++;

	// Sort the array in decreasing order
	sort(a, a + n, greater<int>());

	// Start taking largest element each time
	int count = 0;
	for (int i = 0; i < n; i++) {

		// If element has already been paired
		if (mp[a[i]] < 1)
			continue;

		// Find the number which is greater than
		// a[i] and power of two
		int cur = 1;
		while (cur <= a[i])
			cur <<= 1;

		// If there is a number which adds up with a[i]
		// to form a power of two
		if (mp[cur - a[i]]) {

			// Edge case when a[i] and crr - a[i] is same
			// and we have only one occurrence of a[i] then
			// it cannot be paired
			if (cur - a[i] == a[i] and mp[a[i]] == 1)
				continue;

			count++;

			// Remove already paired elements
			mp[cur - a[i]]--;
			mp[a[i]]--;
		}
	}

	// Return the count
	return count;
}

// Driver code
int main()
{
	int a[] = { 3, 11, 14, 5, 13 };
	int n = sizeof(a) / sizeof(a[0]);
	cout << countPairs(a, n);
	return 0;
}
