#include <iostream>
using namespace std;
int main(){
    int counter;
    char letter;
    cout<<"Enter any letter : ";
    cin>>letter;
    counter = letter;
    if (counter >= 65 && counter <=90){
        counter = counter + 32;
        letter = counter;
        cout<<letter;
    }
    else if (counter >= 96 && counter <= 122){
        counter = counter - 32;
        letter = counter;
        cout<<letter;
    }
    return 0;
}
