#include <iostream>
// #include "Hero.cpp"
using namespace std;

// creating class
 class Hero{
    // public:
    private:
    char name[100];
    int health;
    char level;

    void print(){
        cout<<level;
    }
    int getHealth(){
        return health;
    }
     char getLevel(){
        return level;
    }
};
int main(){
    // creating a object for class Hero
    Hero john;
    // cout<<sizeof(john);
    cout<<john.getHealth();

    // john.health=20;

    // using . we can access propertires
    // cout<<john.health;
}