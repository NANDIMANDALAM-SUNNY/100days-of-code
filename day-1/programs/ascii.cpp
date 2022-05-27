#include<iostream>
using namespace std;
int main(){
    cout<<(int)'a'<<endl;
    cout<<int('A')<<endl;
    cout<<int(1)<<endl;
    cout<<int('1')<<endl;
    char c1, c2, c3, c4, c5;
    cout<<"Enter five letters ";
    cin>>c1>>c2>>c3>>c4>>c5;
    cout<<int(c1)<<int(c2)<<int(c3)<<int(c4)<<int(c5)<<endl;

}