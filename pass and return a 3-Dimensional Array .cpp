// C++ code to demonstrate the above method

#include <bits/stdc++.h>
using namespace std;

// Function to show how to pass
// a 3D character array to a function
void display(char (*ch)[2][2])
{
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 2; k++) {
				cout << "ch[" << i << "][" << j << "]["
					<< k << "] = " << ch[i][j][k] << endl;
			}
		}
	}
}

// Driver code
int main()
{
	char ch[2][2][2] = { { { 'a', 'b' }, { 'c', 'd' } },
						{ { 'e', 'f' }, { 'g', 'h' } } };

	// Function call with 3D array as parameter
	display(ch);
	return 0;
}
