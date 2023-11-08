#include <iostream> 
using namespace std; 
  
// Comma class 
class comma { 
    int x, y; 
  
public: 
    // Default Constructor 
    comma() {} 
  
    // Parameterized Constructor 
    comma(int X, int Y) 
    { 
        x = X; 
        y = Y; 
    } 
  
    // Function to display the value 
    void display() 
    { 
        cout << "x=" << x << " "; 
        cout << "y=" << y << " "; 
    } 
  
    comma operator+(comma ob2); 
    comma operator, (comma ob2); 
}; 
  
// Function to overload the + operator 
comma comma::operator+(comma ob2) 
{ 
    comma temp; 
  
    // Update the value temp 
    temp.x = ob2.x + x; 
    temp.y = ob2.y + y; 
  
    // Return the value temp 
    return temp; 
} 
  
// Function to overload the, operator 
comma comma::operator, (comma ob2) 
{ 
    comma temp; 
  
    // Update the value temp 
    temp.x = ob2.x; 
    temp.y = ob2.y; 
  
    // Print the value 
    cout << "x=" << ob2.x << " "
         << "y=" << ob2.y << endl; 
  
    // Return the value temp 
    return temp; 
} 
  
// Driver code 
int main() 
{ 
    // Initialize objects 
    comma ob1(10, 20), ob2(5, 30), ob3(1, 1); 
  
    ob1.display(); 
    ob2.display(); 
    ob3.display(); 
  
    cout << endl; 
  
    ob1 = (ob2 + ob2, ob1, ob3); 
  
    // Displays the value of 
    // ob3 (Rightmost expression) 
    ob1.display(); 
  
    return 0; 
