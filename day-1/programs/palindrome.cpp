#include <iostream>
using namespace std;
int main(){
    int n= 5;
    for(int i=1;i<=n;i++){
        for(int s=1;s<=n-i;s++){
            cout<<" ";
        }
        int k = i;
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int r=2;r<i-1;r++){
            
        }
        cout<<'\n';
    }
}