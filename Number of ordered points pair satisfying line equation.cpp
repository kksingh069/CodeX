// CPP code to count the number of ordered
// pairs satisfying Line Equation
#include <bits/stdc++.h>

using namespace std;

/* Checks if (i, j) is valid, a point (i, j)
is valid if point (arr[i], arr[j])
satisfies the equation y = mx + c And 
i is not equal to j*/
bool isValid(int arr[], int i, int j, 
			int m, int c)
{

	// check if i equals to j
	if (i == j) 
		return false;
	
	
	// Equation LHS = y, and RHS = mx + c
	int lhs = arr[j]; 
	int rhs = m * arr[i] + c;

	return (lhs == rhs);
}

/* Returns the number of ordered pairs
(i, j) for which point (arr[i], arr[j])
satisfies the equation of the line 
y = mx + c */
int findOrderedPoints(int arr[], int n, 
					int m, int c)
{

	int counter = 0;

	// for every possible (i, j) check
	// if (a[i], a[j]) satisfies the 
	// equation y = mx + c
	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < n; j++) 
		{
			// (firstIndex, secondIndex) 
			// is same as (i, j)
			int firstIndex = i, secondIndex = j;

			// check if (firstIndex, 
			// secondIndex) is a valid point
			if (isValid(arr, firstIndex, secondIndex, m, c)) 
				counter++;
		}
	}
	return counter;
}

// Driver Code
int main()
{
	int arr[] = { 1, 2, 3, 4, 2 };
	int n = sizeof(arr) / sizeof(arr[0]);

	// equation of line is y = mx + c
	int m = 1, c = 1;
	cout << findOrderedPoints(arr, n, m, c);
	return 0;
}
