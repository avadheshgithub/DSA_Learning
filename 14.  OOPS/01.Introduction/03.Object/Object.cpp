/*

## Object : object is a instance of the class.
            - it is actual/

*/

#include<iostream>
using namespace std;

class player{                  // class --> Player
public:
    int score;
    int health;
    string name;
};


int main(){
    player Amit;           // object --> Avadhesh
    Amit.score = 10;
    Amit.health = 100;     // Value Assign
    cout<<Amit.score;     // Value Print

    player Avadhesh;           // object --> Avadhesh
    Avadhesh.score = 10;
    Avadhesh.health = 100;     // Value Assign
    cout<<Avadhesh.score;     // Value Print
}