#include <iostream>
using namespace std;
int main(){
    //even or odd
    cout<<"Enter number to check ";
    int checkNumber;
    cin>>checkNumber;
    if(checkNumber % 2 == 0){
        cout<<"You have entered Even";
    }
    else{
         cout<<"You have entered Odd";
    }
}