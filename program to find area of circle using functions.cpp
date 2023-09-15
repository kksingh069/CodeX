#include <iostream>
#define PI 3.14159
using namespace std;
float AreaOfCircle(float radius);
float AreaWithDiameter(float diameter);
int main() {
	float radius,diameter,circleArea;
	char choice='0';
	cout<<"\n\t\t\tFind Area Of Circle:"<<endl;
	for (;choice!='1'&&choice!='2';) {
		cout<>choice;
		if(choice!='1'&&choice!='2')
		         cout<<"\n\t\tEnter a VALID Option ";
	}
	if(choice=='1') {
		cout <>radius;
		circleArea=AreaOfCircle(radius);
	} else if(choice=='2') {
		cout <>diameter;
		circleArea=AreaWithDiameter(diameter);
	}
	cout<> "<<circleArea<<endl;
	return 0;
}
