/*

## Getter & Setter - used to access the private variables 

            - By Defualt - it is suggested (Private - Data member) (Public - Member Function)

*/


#include<iostream>
using namespace std;

class player{
private:               
    int score;                 
    int health = 100;
    string name;
public:
    void setScore(int s){   // Setter
        score = s;
    }
    void sethealth(int h){ // Setter
        health = h;
    }

    int Getscore(){        //Getter
        return score;
    }
    int getHealth(){       // Gettter
        return health;
    }
};


int main(){
    player amit;

    amit.sethealth(10);
    amit.setScore(36);

    cout<<amit.getHealth()<<endl;
    cout<<amit.Getscore()<<endl;
}