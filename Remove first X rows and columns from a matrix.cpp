// C++ implementation of the approach
#include <iostream>
using namespace std;

const int MAX = 50;

// Function to print the matrix after
// ignoring first x rows and columns
void remove_row_col(int arr[][MAX], int n, int x)
{

	// Ignore first x rows and columns
	for (int i = x; i < n; i++) {
		for (int j = x; j < n; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

// Driver Code
int main()
{

	// Order of the square matrix
	int n = 3;
	int arr[][MAX] = { { 1, 2, 3 },
					{ 4, 5, 6 },
					{ 7, 8, 9 } };

	int x = 1;
	remove_row_col(arr, n, x);
}
