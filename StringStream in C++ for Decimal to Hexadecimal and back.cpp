// CPP program to convert integer to
// hexadecimal using stringstream and
// hex I/O manipulator.
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i = 942;
	stringstream ss;
	ss << hex << i;
	string res = ss.str();
	cout << "0x" << res << endl; // this will print 0x3ae
	return 0;
}
