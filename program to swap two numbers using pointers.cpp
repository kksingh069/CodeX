#include<iostream.h>
#include<conio.h>
void main() {
	clrscr();
	int *a,*b,*temp;
	cout<<“Enter value of a and b:”;
	cin>>*a>>*b;
	temp=a;
	a=b;
	b=temp;
	cout<<“nAfter swapingna=”<<*a<<“nb=”<<*b;
	getch();
}
