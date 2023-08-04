#include <iostream>
using namespace std;
void Reverse_Array(int array[],int size) {
	int temp;
	size--;
	int loop_count=0;
	for (int i=0;size>=i;size--,i++) {
		loop_count++;
		// Counts the iterations
		temp=array[i];
		array[i]=array[size];
		array[size]=temp;
	}
	cout<<"Number of Iterations: "<<loop_count<<endl;
}
int main() {
	int array[5],i;
	cout<<"\nEnter 5 Integer Values in Array\n"<<endl;
	for (i=0;i<5;i++) {
		cout<<"Enter Value For Index Number array [ "<<i< ";
		cin>>array[i];
	}
	// Calling Reverse Array Values Function
	Reverse_Array(array,5);
	cout << "\n\n\t\t\tReversed Array Values" << endl;
	for (i=0;i<=4;i++) {
		cout<<"\t\t\tarray ["<<i<<"]"<<"= "<<array[i]<<endl;
	}
	return 0;
}
