#include <iostream>
using namespace std;

void useOfBreak()
{
	for (int i = 0; i < 40; i++) {

		cout << "Value of i: "
			<< i << endl;
		if (i == 2) {
			break;
		}
	}
}

// Driver Code
int main()
{

	// Function Call
	useOfBreak();

	return 0;
}
