/*

## This Operator - it is used while we have similar name of class member variable and othe function variable name are same.

*/

#include<iostream>
using namespace std;

class player{
private:
    int health;
    int age;
    int score;
    bool alive;
public:
    int getHealth(){
        return health;
    }
    int getAge(){
        return age;
    }
    int getScore(){
        return score;
    }
    bool isAlive(){
        return alive;
    }


    void setHealth(int health){
        player::health = health;     // Scope Resolution
    }
    void setAge(int age){
        this->age = age;             // this operator
    }
    void setScore(int score){
        this->score = score;
    }
    void setisAlive(bool alive){
        this->alive = alive;
    }
};

int main(){

    player amit;
    amit.setAge(17);
    amit.setHealth(100);
    amit.setisAlive(true);
    amit.setAge(70);

    
}