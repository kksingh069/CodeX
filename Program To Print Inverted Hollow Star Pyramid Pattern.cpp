#include <bits/stdc++.h>
using namespace std;
 
void print_patt(int R)
{
  // To iterate through the rows
  for(int i = 1; i <= R; i++)
  {
    // To print the  beginning spaces
    for(int sp = 1;
            sp <= i - 1 ; sp++)
    {
      cout << " ";
    }
       
    // Iterating from ith column to
    // last column (R*2 - (2*i - 1))
    int last_col = (R * 2 - (2 * i - 1));
         
    // To iterate through column
    for(int j = 1; j <= last_col; j++)
    {
      
      if(i == 1)
        cout << "*";
      else if(j == 1)
        cout << "*";
      else if(j == last_col)
        cout << "*";
      else
        cout << " ";
    }
         
    // After printing a row proceed
    // to the next row
    cout << "\n";
  }
}
 
// Driver code
int main()
{
  // Number of rows
  int R = 5;
  print_patt(R);
  return 0;
}
