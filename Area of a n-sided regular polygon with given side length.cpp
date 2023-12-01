// C++ Program to find the area of a regular
// polygon with given side length

#include <bits/stdc++.h>
using namespace std;

// Function to find the area
// of a regular polygon
float polyarea(float n, float a)
{
	// Side and side length cannot be negative
	if (a < 0 && n < 0)
		return -1;

	// Area
	// degree converted to radians
	float A = (a * a * n) / (4 * tan((180 / n) * 3.14159 / 180));

	return A;
}

// Driver code
int main()
{
	float a = 9, n = 6;

	cout << polyarea(n, a) << endl;

	return 0;
}
