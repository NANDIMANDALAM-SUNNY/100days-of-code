#include <iostream>
using namespace std;
int main(){
    //print all the numbers 100 - 500 which are divisible by 3 and 5
    int count = 0;
    while (count <= 50){
        if(count % 3 == 0 && count % 5 == 0){
            cout<<count<<endl;
        }
       count++;
    }
    
}