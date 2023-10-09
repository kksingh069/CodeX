// C++ program for the above approach
#include <iostream>
using namespace std;

// Function to convert string to
// integer without using functions
void convert(string s)
{
	// Initialize a variable
	int num = 0;
	int n = s.length();

	// Iterate till length of the string
	for (int i = 0; i < n; i++)

		// Subtract 48 from the current digit
		num = num * 10 + (int(s[i]) - 48);

	// Print the answer
	cout << num;
}

// Driver Code
int main()
{
	// Given string of number
	char s[] = "123";

	// Function Call
	convert(s);
	return 0;
}
