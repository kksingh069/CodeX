#include<iostream>
    using namespace std;
int main() {
	cout<<"Enter The Size Of Array:   ";
	int size;
	cin>>size;
	int array[size], key,i;
	// Taking Input In Array
	for (int j=0;j<size;j++) {
		cout<<"Enter "<<j<<" Element : ";
		cin>>array[j];
	}
	//Your Entered Array Is
	for (int a=0;a<size;a++) {
		cout<<"array[ "<<a<<" ]  =  ";
		cout<<array[a]<<endl;
	}
	int  maximum=array[0];
	for (int i=0;i<size;i++) {
		if(array[i]>maximum) {
			maximum=array[i];
		}
	}
	cout<<"\n\nMaximum Number is in array is :"<<maximum;
	return 0;
}
