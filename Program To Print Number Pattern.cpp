
#include <iostream>
using namespace std;

int main()
{
	int rows, columns, number = 1, n = 5;

	// first for loop is used to identify number of rows
	for (rows = 0; rows <= n; rows++) {
		for (columns = 0; columns < rows; columns++) {
		
			cout << number << " ";
			number++;
		}
	
		// print the next line for each row
		cout << "\n";
	}
	return 0;
}
