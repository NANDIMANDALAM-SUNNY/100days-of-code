#include <iostream>
using namespace std;
int main(){
    //binary operators beaciuse using two operands
    cout<< 4 + 5<<endl;
    cout<< 5 / 2.0<<endl;
    cout<< 5 / 2<<endl;//we shold put float to get correct
    cout<< 5 % 2<<endl;


    //unary operators
    cout<<"Binary operators\n";
    int counterplus = 9;
    counterplus++;
    cout<<counterplus<<endl;

     int counterminus = 9;
    counterminus--;
    cout<<counterminus<<endl;

    //pre increment
    int checkCounter = 10;
    cout<<++checkCounter<<endl;
    cout<<checkCounter++<<endl;
    cout<<checkCounter<<endl;

    //relational operators
    // <,>,<=,>=,==,!=


    //logical operators
    // && , || ,!
    cout<<!(100 == 100)<<endl;


    //priority of the operators
    // ari > rela > logi
    int a = 5, b = 8;
    cout<<(a == 5 && b == 5+3 )<<endl;
}