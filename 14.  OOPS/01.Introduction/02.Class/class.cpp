/*

    ## Class - it is user defined data type in which ,ultiple type of data can be there.
             - it is blueprint/logical/Structure

*/

#include<iostream>
using namespace std;

class player{
public:                  // class --> Player
    int score;                 // Data Member or Variables
    int health = 100;
    string name;
    void showhealth(){          // Member Function (Within the class)
        cout<<"Health is :" <<health;
    }
};


int main(){
    player amit;
    amit.score = 199;
    amit.showhealth();
}