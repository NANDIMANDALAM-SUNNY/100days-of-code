#include <iostream>
#include <string>
using namespace std;
int main(){
    int first, guess;
    cout<<"Enter Host : ";
    cin>>first;
    system("cls");
    cout<<"Enter Guest : ";
    cin>>guess;
    string result =  (first == guess)?"Correct ":"Incorrect ";
    cout<<"You guessed "<<result<<"Value ";

}