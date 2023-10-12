// C++ program to demonstrate Run Time 
// Polymorphism in Single Inheritance 

#include <iostream> 
using namespace std; 

// Base Class 
class Base { 

public: 
	// Virtual function 
	virtual void funct1() 
	{ 
		cout << "Base::funct1() is called\n"; 
	} 

	// Virtual function 
	virtual void funct2(int x) 
	{ 
		cout << "Base's Val of x:"
			<< x << endl; 
	} 

	// Non-Virtual Function 
	void funct3() 
	{ 
		cout << "Base is the Parent class!"
			<< endl; 
	} 
}; 

// Derived Class or Sub Class 
class Derived : public Base { 
private: 
	// Virtual Functions 
	// can also be Private! 
	void funct1() 
	{ 
		cout << "Derived::funct1() is called\n"; 
	} 
	void funct2(int x) 
	{ 
		cout << "Derived Class's Val of x:"
			<< x << endl; 
	} 
	void funct3() 
	{ 
		cout << "It's the Derived class's"
			<< " funct3() called!" << endl; 
	} 
}; 

int main() 
{ 

	// Run-Time Polymorphism 
	// in Single Inheritance 
	Base* bptr = new Derived(); 

	// virtual function 
	bptr->funct1(); 

	// virtual function 
	bptr->funct2(12); 

	// Non-virtual function 
	bptr->funct3(); 

	return 0; 
} 
