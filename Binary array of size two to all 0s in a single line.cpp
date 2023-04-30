#include <iostream>
using namespace std;
 
void MakeBothZeros(int arr[])
{
    arr[arr[1]] = arr[arr[0]];
 
    // Two other approaches to solve
    // the problem
    // arr[arr[1]] = 0;
    // arr[1 - arr[0]] = arr[1 - arr[1]];
}
 
// Driver code
int main()
{
    int First_Arr[] = {0, 1};
    MakeBothZeros(First_Arr);
    cout << First_Arr[0] << " " <<
            First_Arr[1] << endl;
 
    int Second_Arr[] = {1, 0};
    MakeBothZeros(Second_Arr);
    cout << Second_Arr[0] << " " <<
            Second_Arr[1] << endl;
 
    int Thrd_Arr[] = {0, 0};
    MakeBothZeros(Thrd_Arr);
    cout << Thrd_Arr[0] << " " <<
            Thrd_Arr[1] << endl;
 
    return 0;
}
