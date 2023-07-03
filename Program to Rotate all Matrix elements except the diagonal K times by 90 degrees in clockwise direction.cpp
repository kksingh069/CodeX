
#include <bits/stdc++.h>
using namespace std;

// Function to print the matrix
void print(vector<vector<int> >& mat)
{
	// Iterate over the rows
	for (int i = 0; i < mat.size(); i++) {

		// Iterate over the columns
		for (int j = 0; j < mat[0].size(); j++)

			// Print the value
			cout << setw(3) << mat[i][j];
		cout << "
";
	}
}

void performSwap(vector<vector<int> >& mat,
				int i, int j)
{
	int N = mat.size();

	// Stores the last row
	int ei = N - 1 - i;

	// Stores the last column
	int ej = N - 1 - j;

	// Perform the swaps
	int temp = mat[i][j];
	mat[i][j] = mat[ej][i];
	mat[ej][i] = mat[ei][ej];
	mat[ei][ej] = mat[j][ei];
	mat[j][ei] = temp;
}

void rotate(vector<vector<int> >& mat,
			int N, int K)
{
	// Update K to K % 4
	K = K % 4;

	// Iterate until K is positive
	while (K--) {

		// Iterate each up to N/2-th row
		for (int i = 0; i < N / 2; i++) {

			// Iterate each column
			// from i to N - i - 1
			for (int j = i;
				j < N - i - 1; j++) {

				if (i != j
					&& (i + j) != N - 1) {

					// Perform the swapping
					performSwap(mat, i, j);
				}
			}
		}
	}

	// Print the matrix
	print(mat);
}

// Driver Code
int main()
{
	int K = 5;
	vector<vector<int> > mat = {
		{ 1, 2, 3, 4 },
		{ 6, 7, 8, 9 },
		{ 11, 12, 13, 14 },
		{ 16, 17, 18, 19 },
	};
	int N = mat.size();
	rotate(mat, N, K);

	return 0;
}
