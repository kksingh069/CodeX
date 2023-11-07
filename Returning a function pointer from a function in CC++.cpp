// C++ program for the above approach
#include <iostream>
using namespace std;

void demo(int& a)
{
	a += 10;
}

// Driver Code
int main()
{
	int num = 20;

	// Now ptr contains address of demo
	// function or void
	void (*ptr)(int*) = &demo;

	// or (*ptr)(num);
	ptr(num);

	cout << num << endl;

	return 0;
}
