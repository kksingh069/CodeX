#include<iostream>
using namespace std;
int main() {
	int var1, var2, swap;
	cout<<"Enter value for first integer:  ";
	cin>>var1;
	cout<<"Enter value for second integer:  ";
	cin>>var2;
	cout<<" Values Before swapping:  "<<endl;
	cout<<"First Integer ="<<var1<<endl;
	cout<<"Second Interger ="<<var2<<endl;
	swap=var1;
	var1=var2;
	var2=swap;
	cout<<" Values After swapping:  "<<endl;
	cout<<"First Integer ="<<var1<<endl;
	cout<<"Second Interger ="<<var2<<endl;
	return 0;
}
