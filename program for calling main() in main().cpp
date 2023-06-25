// C++ program to illustrate calling
// main() function in main() itself
#include "iostream"
using namespace std;

// Driver Code
int main()
{
	// Declare a static variable
	static int N = 10;

	// Condition for calling main()
	// recursively until N is 0
	if (N > 0) {
		cout << N << ' ';
		N--;
		main();
	}
}
