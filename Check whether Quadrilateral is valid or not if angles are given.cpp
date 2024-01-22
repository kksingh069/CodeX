// C++ program to check if a given 
// quadrilateral is valid or not
#include <bits/stdc++.h>
using namespace std;

// Function to check if a given 
// quadrilateral is valid or not
bool Valid(int a, int b, int c, int d)
{
	// Check condition
	if (a + b + c + d == 360)
		return true;
	
	return false;
}

// Driver code
int main()
{
	int a = 80, b = 70, c = 100, d = 110;

	if (Valid(a, b, c, d))
		cout << "Valid quadrilateral";
	else
		cout << "Invalid quadrilateral";
		
	return 0;
}
