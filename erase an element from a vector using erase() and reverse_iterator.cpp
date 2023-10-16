// C++ program to delete an element of a vector 
// using erase() and reverse iterator. 

#include <iostream> 
#include <vector> 

using namespace std; 

// Function to delete element 
// 'num' from vector 'vec' 
vector<int> delete_ele(vector<int> vec, int num) 
{ 
	// initializing a reverse iterator 
	vector<int>::reverse_iterator itr1; 

	for (itr1 = vec.rbegin(); itr1 < vec.rend(); itr1++) { 

		if (*itr1 == num) { 

			// erasing element = 16 
			vec.erase((itr1 + 1).base()); 
		} 
	} 

	return vec; 
} 

// Driver code 
int main() 
{ 
	vector<int> vec = { 1, 4, 7, 10, 13, 16, 19 }; 

	// we want to delete element = 16 
	int num = 16; 

	vector<int>::iterator itr1; 

	cout << "Vector originally: \n"; 
	for (itr1 = vec.begin(); itr1 < vec.end(); itr1++) { 

		// printing the original elements of vector 
		cout << *itr1 << " "; 
	} 

	cout << "\n\nElement to be deleted: "
		<< num << "\n\n"; 

	// reinitializing vector 'vec' 
	// after deleting 'num' 
	// from the vector 
	// and keeping other remaining 
	// elements as they are 
	vec = delete_ele(vec, num); 

	vector<int>::iterator itr2; 

	cout << "Vector after deletion: \n"; 
	for (itr2 = vec.begin(); itr2 < vec.end(); itr2++) { 

		// printing the remaining elements of vector 
		cout << *itr2 << " "; 
	} 

	return 0; 
} 
// This code is contributed by supratik_mitra 
