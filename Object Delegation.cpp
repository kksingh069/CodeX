#include <iostream>
using namespace std;
class First {
public:
    void print() { cout << "The Delegate"; }
};
class Second {
    // Creating instance of the class
    First ob;
 
public:
    void print() { ob.print(); }
};
 
// Driver Code
int main()
{
    Second ob1;
    ob1.print();
    return 0;
}
