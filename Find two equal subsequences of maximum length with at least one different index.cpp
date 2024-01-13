// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

const int MAX = 26;

// Function to return the required
// length of the subsequences
int maxLength(string str, int len)
{
	// To store the result
	int res = 0;

	// To store the last visited
	// position of lowercase letters
	int lastPos[MAX];

	// Initialisation of frequency array to -1 to
	// indicate no character has previously occurred
	for (int i = 0; i < MAX; i++) {
		lastPos[i] = -1;
	}

	// For every character of the string
	for (int i = 0; i < len; i++) {

		// Get the index of the current character
		int C = str[i] - 'a';

		// If the current character has
		// appeared before in the string
		if (lastPos[C] != -1) {

			// Update the result
			res = max(len - (i - lastPos[C] - 1) - 1, res);
		}

		// Update the last position
		// of the current character
		lastPos[C] = i;
	}

	return res;
}

// Driver code
int main()
{
	string str = "geeksforgeeks";
	int len = str.length();

	cout << maxLength(str, len);

	return 0;
}
