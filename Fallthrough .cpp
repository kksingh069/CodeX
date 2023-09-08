// C++ program to illustrate
// Fallthrough in C++
#include <iostream>
using namespace std;

// Driver Code
int main()
{
	int n = 2;

	// Switch Cases
	switch (n) {
	case 1: {
		cout << "this is one \n";
	}
	case 2: {
		cout << "this is two \n";
	}
	case 3: {
		cout << "this is three \n";
	}
	default: {
		cout << "this is default \n";
	}
	}

	return 0;
}
