#include <bits/stdc++.h>
using namespace std;
 
// A function to count all prime factors of
// a given number x
int countPrimeFactors(int x)
{
    int res = 0;
    if (x % 2 == 0) {
        res++;
 
        // Print the number of 2s that divide x
        while (x % 2 == 0)
            x = x / 2;
    }
 
    // x must be odd at this point.  So we 
    // can skip one element (Note i = i +2)
    for (int i = 3; i <= sqrt(x); i = i + 2) {
        if (x % i == 0) {
 
            // While i divides x, print i and 
            // divide x
            res++;
            while (x % i == 0)
                x = x / i;
        }
    }
 
    // This condition is to handle the case 
    // when x is a prime number greater than 2
    if (x > 2)
        res++;
    return res;
}
 
// Count of common prime factors
int countCommonPrimeFactors(int a, int b)
{
    // Get the GCD of the given numbers
    int gcd = __gcd(a, b);
 
    // Count prime factors in GCD
    return countPrimeFactors(gcd);
}
 
// Driver code
int main()
{
    int a = 6, b = 12;
    cout << countCommonPrimeFactors(a, b);
    return 0;
