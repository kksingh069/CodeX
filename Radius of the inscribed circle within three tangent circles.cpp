// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// Radius of the 3 given circles
// declared as double.
double r1, r2, r3;

// Calculation of area of a triangle by Heron's formula
double area(double a, double b, double c)
{
	double p = (a + b + c) / 2;
	return sqrt(p) * sqrt(p - a) * sqrt(p - b) * sqrt(p - c);
}

// Applying binary search to find the
// radius r4 of the required circle
double binary_search()
{
	// Area of main triangle
	double s = area(r1 + r2, r2 + r3, r3 + r1);
	double l = 0, h = s / (r1 + r2 + r3);
	// Loop runs until l and h becomes approximately equal
	while (h - l >= 1.e-7) {
		double mid = (l + h) / 2;

		// Area of smaller triangles
		double s1 = area(mid + r1, mid + r2, r1 + r2);
		double s2 = area(mid + r1, mid + r3, r1 + r3);
		double s3 = area(mid + r2, mid + r3, r2 + r3);

		// If sum of smaller triangles
		// is less than main triangle
		if (s1 + s2 + s3 < s) {
			l = mid;
		}
		// If sum of smaller triangles is
		// greater than or equal to main triangle
		else {
			h = mid;
		}
	}
	return (l + h) / 2;
}
// Driver code
int main()
{
	// Taking r1, r2, r3 as input
	r1 = 1.0;
	r2 = 2.0;
	r3 = 3.0;
	// Call to function binary search
	cout << fixed << setprecision(6) << binary_search() << endl;
	return 0;
}
