// CPP program to add two numbers using 
// - operator. 
#include <bits/stdc++.h> 
using namespace std; 

// function to add two numbers. 
int add(int a, int b) 
{ 
	return a - (-b); 
} 

// Driver code 
int main() 
{ 
	int a = 2, b = 3; 
	cout << add(a, b) << endl; 
	return 0; 
} 
