// C++ program to find product
// of ASCII value of characters
// in string

#include <bits/stdc++.h>
using namespace std;

// Function to find product
// of ASCII value of characters
// in string
long long productAscii(string str)
{
	long long prod = 1;

	// Traverse string to find the product
	for (int i = 0; i < str.length(); i++) {
		prod *= (int)str[i];
	}

	// Return the product
	return prod;
}

// Driver code
int main()
{
	string str = "GfG";

	cout << productAscii(str);

	return 0;
}
