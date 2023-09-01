#include<iostream>
using namespace std;
int main() {
	int width,height,area,perimeter;
	cout<<"Enter  Width of Rectangle = ";
	cin>>width;
	cout<<"Enter  Height of Rectangle = ";
	cin>>height;
	area=height*width;
	cout<<"Area of Rectangle ="<<area<<endl;
	perimeter=2*(height+width);
	cout<<" Perimeter of rectangle are = "<<perimeter<<endl;
	return 0;
}
