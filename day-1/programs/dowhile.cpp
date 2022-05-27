#include <iostream>
using namespace std;
int main(){
    int userPin = 1234, pin, errorCount = 0;
    do
    {
       cout<<"Enter pin : "<<endl;
       cin>>pin;
       if(pin != userPin){
           errorCount++;
       }
    } while (errorCount <3 && pin != userPin);
    if(errorCount<3){
        cout<<"Loading...";
    }
    else{
        cout<<"Blocked";
    }
}