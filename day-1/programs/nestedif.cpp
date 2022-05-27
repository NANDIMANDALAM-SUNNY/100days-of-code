#include <iostream>
using namespace std;
int main(){
    //nested if else
    //program should write out whether the traingle is equilateral,isosceles or scalene
    int side1, side2, side3;
    cout<<"Enter sides of the traingle : "<<endl;
    cin>> side1 >> side2 >> side3;
    if(side1 == side2 && side1 == side3){
        cout<<"Equilateral Trianle";

    }
    else if(side1 != side2 && side1 != side3 && side2 != side3 ){
        cout<<"Scalar Triangle";
    }
    else{
        cout<<"Isocles traingle ";
    }

}