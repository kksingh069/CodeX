// CPP program to calculate 
// range of signed data type 
#include <bits/stdc++.h> 
#define SIZE(x) sizeof(x) * 8 
using namespace std; 

// function to calculate range of 
//unsigned data type 
void printSignedRange(int count) 
{ 
	int min = pow(2, count - 1); 
	int max = pow(2, count - 1) - 1; 
	printf("%d to %d", min * (-1), max); 
} 

// DRIVER program 
int main() 
{ 
	cout << "signed char: "; 
	printSignedRange(SIZE(char)); 
	cout << "\nsigned int: "; 
	printSignedRange(SIZE(int)); 
	cout << "\nsigned short int: "; 
	printSignedRange(SIZE(short int)); 

	return 0; 
} 
