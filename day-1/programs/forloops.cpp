#include <iostream>
using namespace std;
int main(){
    //factorial 4*3*2*1*
    cout<<"Enter a number : ";
    int fact;
    cin>>fact;
    int factorial = 1;
    for (int i = 1; i <= fact; i++){
        factorial = factorial * i; 
    }
    cout<<factorial;
}