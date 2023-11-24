#include <bits/stdc++.h>
using namespace std;
 
// Function to return the count of occurrence
// of pat in binary representation of n
int countPattern(int n, string pat)
{
    // To store decimal value of the pattern
    int pattern_int = 0;
 
    int power_two = 1;
 
    // To store a number that has all ones in
    // its binary representation and length
    // of ones equal to length of the pattern
    int all_ones = 0;
 
    // Find values of pattern_int and all_ones
    for (int i = pat.length() - 1; i >= 0; i--) {
        int current_bit = pat[i] - '0';
        pattern_int += (power_two * current_bit);
        all_ones = all_ones + power_two;
        power_two = power_two * 2;
    }
 
    int count = 0;
    while (n && n >= pattern_int) {
 
        // If the pattern occurs in the last
        // digits of n
        if ((n & all_ones) == pattern_int) {
            count++;
        }
 
        // Right shift n by 1 bit
        n = n >> 1;
    }
    return count;
}
 
// Driver code
int main()
{
    int n = 500;
    string pat = "10";
    cout << countPattern(n, pat);
