// C++ Program to find maximum
// product path from (0, 0) to
// (N-1, M-1)
#include <bits/stdc++.h>
using namespace std;
#define N 3
#define M 3

// Function to find maximum product
int maxProductPath(int arr[N][M])
{

	// It will store the maximum
	// product till a given cell.
	vector<vector<int> > maxPath(N, vector<int>(M, INT_MIN));

	// It will store the minimum
	// product till a given cell
	// (for -ve elements)
	vector<vector<int> > minPath(N, vector<int>(M, INT_MAX));

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {

			int minVal = INT_MAX;
			int maxVal = INT_MIN;

			// If we are at topmost
			// or leftmost, just
			// copy the elements.
			if (i == 0 && j == 0) {
				maxVal = arr[i][j];
				minVal = arr[i][j];
			}

			// If we're not at the
			// above, we can consider
			// the above value.
			if (i > 0) {
				int tempMax = max(maxPath[i - 1][j] * arr[i][j],
								minPath[i - 1][j] * arr[i][j]);
				maxVal = max(maxVal, tempMax);

				int tempMin = min(maxPath[i - 1][j] * arr[i][j],
								minPath[i - 1][j] * arr[i][j]);
				minVal = min(minVal, tempMin);
			}

			// If we're not on the
			// leftmost, we can consider
			// the left value.
			if (j > 0) {
				int tempMax = max(maxPath[i][j - 1] * arr[i][j],
								minPath[i][j - 1] * arr[i][j]);
				maxVal = max(maxVal, tempMax);

				int tempMin = min(maxPath[i][j - 1] * arr[i][j],
								minPath[i][j - 1] * arr[i][j]);
				minVal = min(minVal, tempMin);
			}

			// Store max & min product
			// till i, j.
			maxPath[i][j] = maxVal;
			minPath[i][j] = minVal;
		}
	}

	// Return the max product path
	// from 0, 0 -> N-1, M-1.
	return maxPath[N - 1][M - 1];
}

// Driver Code
int main()
{
	int arr[N][M] = { { 1, -2, 3 },
					{ 4, -5, 6 },
					{ -7, -8, 9 } };

	// Print maximum product from
	// (0, 0) to (N-1, M-1)
	cout << maxProductPath(arr) << endl;
	return 0;
}
