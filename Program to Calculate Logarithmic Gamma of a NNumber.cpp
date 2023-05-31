#include <iostream>
#include<cmath>
using namespace std;
 
// using lgamma() function
float logarithm_gamma(float number)
{
    float result;
    result = lgamma(number);
      return result;
}
 
int main()
{
      // lgamma for positive integer valued number
     float answer = logarithm_gamma(10);
    cout<<answer<<endl;
     
    // lgamma for negative valued number
    answer = logarithm_gamma(-1.7);
    cout<<answer<<endl;
     
    // lgamma for positive valued number
    answer = logarithm_gamma(3.14);
    cout}
