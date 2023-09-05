#include<iostream>
#include<stdio.h>
using namespace std;
int main() {
	int i,j=0;
	char str[30];
	cout<<"Enter a String:n";
	gets(str);
	for (i=0;str[i]!='';++i) {
		if(str[i]!=' ')
		   str[j++]=str[i];
	}
	str[j]='';
	cout<<"nString After Removing Spaces:n"<<str;
	return 0;
}
