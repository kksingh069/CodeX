// CPP program for queries to find k-th person where 
// people are considered in lexicographic order of 
// first name, then last name, then age 
#include <bits/stdc++.h> 
using namespace std; 

struct person { 
	string firstName, lastName; 
	int age; 
}; 

// operator overloading to use multiset for user 
// define data type. 
bool operator<(person a, person b) 
{ 
	if (a.firstName < b.firstName) 
		return true; 
	else if (a.firstName == b.firstName) { 
		if (a.lastName < b.lastName) 
			return true; 
		else if (a.lastName == b.lastName) { 
			if (a.age < b.age) 
				return true; 
			else
				return false; 
		} 
		else
			return false; 
	} 
	else
		return false; 
} 

// define function for printing our output 
void print(multiset<person>::iterator it) 
{ 
	cout << "First name:" << it->firstName << endl; 
	cout << "Last name:" << it->lastName << endl; 
	cout << "Age: " << it->age << endl; 
} 

int main() 
{ 
	int q = 2; 

	// define set for structure 
	multiset<person> s; 

	// declaration of person structure 
	person p; 

	// 1st Query k=1, first-name=aa, last-name=bb, age=10; 
	int k = 1; 
	p.firstName = "aa"; 
	p.lastName = "bb"; 
	p.age = 10; 

	// now insert this structure in our set. 
	s.insert(p); 

	// now find Kth smallest element in set. 
	multiset<person>::iterator it; 
	it = s.begin(); 

	// find kth element by increment iterator by k 
	std::advance(it, k - 1); 
	print(it); 

	// 2nd Query k=2, first-name=bb, last-name=cc, age=10; 
	k = 2; 
	p.firstName = "bb"; 
	p.lastName = "cc"; 
	p.age = 10; 

	// now insert this structure in our set. 
	s.insert(p); 

	// now find Kth smallest element in set. 
	it = s.begin(); 

	// find kth element by increment iterator by k 
	std::advance(it, k - 1); 
	print(it); 
	return 0; 
} 
