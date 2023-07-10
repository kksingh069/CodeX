// C++ program to print hollow diamond pattern
#include <iostream>
using namespace std;

int main()
{

	int n = 5, rows, columns;
	for (rows = 1; rows <= n; rows++) {
		// used for printing the spaces
		for (columns = n; columns > rows; columns--) {
			cout << " ";
		}
		// print star
		cout << "*";
		// again print the spaces
		for (columns = 1; columns < (rows - 1) * 2;
			columns++) {
			cout << " ";
		}
		if (rows == 1) {
			cout << "\n";
		}
		else {
			cout << "*\n";
		}
	}
	for (rows = n - 1; rows >= 1; rows--) {
		// used for printing the spaces
		for (columns = n; columns > rows; columns--) {
			cout << " ";
		}
		// print star
		cout << "*";
		for (columns = 1; columns < (rows - 1) * 2;
			columns++) {
			cout << " ";
		}
		if (rows == 1) {
			cout << "\n";
		}
		else {
			cout << "*\n";
		}
	}
	return 0;
}
