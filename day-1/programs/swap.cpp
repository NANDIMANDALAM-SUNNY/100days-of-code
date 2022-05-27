#include <iostream>
using namespace std;
int main(){
    int a = 20;
    int b = 10;
    //usng third variable
    // int temp;  //
    // temp = a;
    // a = b;
    // b = temp;
    // cout<<a<<" "<<b<<endl;


    //without using third variable
    a = a + b;//30
    b = a - b;//30 - 10 = 20
    a = a - b;// 30 - 20 = 10 
     cout<<a<<" "<<b<<endl;



}