#include <iostream>
using namespace std;
int main(){
    float weight, height,bmi;
    cout<<"Weight in kg and heught in meters : ";
    cin>>weight>>height;
    bmi = weight / (height * height);
    if(bmi<18.5){
        cout<<"UnderWeight"<<endl;
    }
    else if(bmi > 25 ){
        cout<<"Over Weight"<<endl;
    }
    else{
        cout<<"Normal Weight"<<endl;
    }
}
