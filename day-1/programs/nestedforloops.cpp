#include <iostream>
using namespace std;
int main(){
    int count = 0;
    for (int i = 1; i <= 10; i++){
       for (int j = 1; j <= 10; j++){
           cout<<i<<" * "<< j<< " = " <<i*j<<endl;
       }
       cout<<"\n"; 
    }
    
}