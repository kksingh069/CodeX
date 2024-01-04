// C++ program to illustrate the use
// of ropes using Rope header file
#include <ext/rope>
#include <iostream>

// SGI extension
using namespace __gnu_cxx;

using namespace std;

// Driver Code
int main()
{
	// rope<char> r = "abcdef"
	crope r = "abcdef";

	cout << r << "\n";

	return 0;
}
