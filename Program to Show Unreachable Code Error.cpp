
#include <iostream>
using namespace std;

int c();
int main()
{
	cout << c() << endl;
	return 0;
}
int c()
{
	int a = 3;
	return a; // oops it is unreachable code
	int b = 6;
	cout << b; // program control never goes here
}
