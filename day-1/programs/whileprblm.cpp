#include <iostream>
using namespace std;
int main(){
    //reversing a number
    int count,reverseNumber = 0 ;
    cout<<"Enter a Number : ";
    cin>>count;
    while (count !=0)
    {
        reverseNumber *= 10;
        int lastDigit = count%10;
        reverseNumber += lastDigit; 
        count /= 10;

    }
    cout<<reverseNumber<<endl;
    


}