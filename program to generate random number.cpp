// C++ program to generate random number 
#include <bits/stdc++.h> 
using namespace std; 

// Function with return random number from 1 to 
// given limit 
int randomNoGenerator(int limit) 
{ 
	// uniformly-distributed integer random number 
	// generator that produces non-deterministic 
	// random numbers. 
	random_device rd; 

	// A Mersenne Twister pseudo-random generator 
	// of 32-bit numbers with a state size of 
	// 19937 bits. 
	mt19937 gen(rd()); 

	// Uniform distribution 
	uniform_int_distribution<> dis(1, limit); 
	return dis(gen); 
} 

// Driver Code 
int main() 
{ 
	int limit = 100; 
	cout << randomNoGenerator(limit) << endl; 
	return 0; 
} 
