#include <iostream>
using namespace std;
int main(){
    float a,b;
    char operation;
    cout<<"Enter A"<<endl;
    cin>>a;
    cout<<"Enter B"<<endl;
    cin>>b;
    cout<<"Enter operation"<<endl;
    cin>>operation;
    switch (operation)
    {
    case '+':cout<<"Result of "<<a<<" "<<operation<<" "<<b<<" = "<<a+b<<endl;break;
    case '-':cout<<"Result of "<<a<<" "<<operation<<" "<<b<<" = "<<a-b<<endl;break;
    case '*':cout<<"Result of "<<a<<" "<<operation<<" "<<b<<" = "<<a*b<<endl;break;
    case '/':cout<<"Result of "<<a<<" "<<operation<<" "<<b<<" = "<<a/b<<endl;break;
    case '%':cout<<"Result of "<<a<<" "<<operation<<" "<<b<<" = "<<int(a)%int(b)<<endl;break;
    default:
        cout<<"Not a valid operation";
        break;
    }
}