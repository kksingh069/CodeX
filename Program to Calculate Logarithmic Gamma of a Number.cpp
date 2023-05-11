
#include <iostream>
#include<cmath>
using namespace std;

float logarithm_gamma(float number)
{
	float result;
	result = lgamma(number);
	return result;
}

int main()
{

	float answer = logarithm_gamma(10);
	cout<<answer<<endl;
	
	answer = logarithm_gamma(-1.7);
	cout<<answer<<endl;
	
	// lgamma for positive valued number
	answer = logarithm_gamma(3.14);
	cout<<answer<<endl;
}
