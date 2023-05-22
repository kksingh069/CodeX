#include <iostream>
using namespace std;
 
// Driver code
int main()
{
    char s1[] = "14.25";
    char s2[] = "34.87";
    double n1 = stod(s1);
    double n2 = stod(s2);
    double res = n1 + n2;
    cout << res;
    return 0;
}
