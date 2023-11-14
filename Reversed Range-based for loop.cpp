// C++ program for reverse 
// range-based for loop 
#include <bits/stdc++.h> 

// For reversing range based loop 
#include <boost/range/adaptor/reversed.hpp> 
using namespace std; 

// Driver Code 
int main() 
{ 
	string s = "geeksforgeeks"; 

	int y[] = { 1, 2, 3, 4, 5, 6, 7, 8 }; 

	vector<int> v1{ 1, 2, 3, 4, 5, 6, 7, 8 }; 

	// Reverse range-based for loop 
	// to reverse string 
	for (auto x : boost::adaptors::reverse(s)) 
		cout << x << " "; 
	cout << endl; 

	// Reverse range-based for loop 
	// to reverse array 
	for (auto x : boost::adaptors::reverse(y)) 
		cout << x << " "; 
	cout << endl; 

	// Reverse range-based for loop 
	// to reverse vector 
	for (auto x : boost::adaptors::reverse(v1)) 
		cout << x << " "; 
	cout << endl; 

	return 0; 
} 
