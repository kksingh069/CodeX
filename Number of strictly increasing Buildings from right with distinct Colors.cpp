// C++ implementation of above approach

#include <bits/stdc++.h>
using namespace std;

// Function to return the number of
// colors visible
int colourVisible(int height[], int colour[], int K)
{
	int arr[K + 1] = { 0 }, visible = 0;

	int max = height[K - 1];
	arr[colour[K - 1]] = 1;

	for (int i = K - 2; i >= 0; i--) {
		if (height[i] > max) {
			max = height[i];
			arr[colour[i]] = 1;
		}
	}

	// Count the Number of 1's
	for (int i = 1; i <= K; i++) {
		if (arr[i] == 1)
			visible++;
	}

	return visible;
}

// Driver code
int main()
{
	int height[] = { 3, 5, 1, 2, 3 };
	int colour[] = { 1, 2, 3, 4, 3 };
	int K = sizeof(colour) / sizeof(colour[0]);

	cout << colourVisible(height, colour, K);

	return 0;
}
