#include <iostream>
using namespace std;
int main(){
    int a ; //4 bytes  //unsigned 4 bytes but only positive //short 2 bytes
    a = 12;
    cout<<"sizeof int"<<sizeof(a) <<endl;
    float c=1.3;
    cout<<"sizeof float "<<sizeof(c) <<endl;
    double doub = 21231231212;
    cout<<"Size of Double is "<<sizeof(doub)<<endl;
    bool d = true;
    cout<<"Size of Boolean"<<sizeof(d)<<endl;
    char characte = 'a';
    cout<<"Size of character is "<<sizeof(characte)<<endl;
    

}
