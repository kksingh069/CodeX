#include<iostream>
#include<cstdlib>

using namespace std;
int main(){
    unsigned int seed;
    int z1, z2, z3;
    cout<<" Random Numbers"<<endl;
    cin>>seed;
    srand(seed);
    z1 = rand();
    z2 = rand();
    z3 = rand();
    cout<<"Three random numbers :"<<z1<<" "<<z2<<" "<<z3<<endl;
    return 0;
}
