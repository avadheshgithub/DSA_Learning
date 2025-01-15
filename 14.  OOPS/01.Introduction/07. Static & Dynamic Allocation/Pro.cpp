/*

## Static VS Dynamic memory ALlocation:    

    1. Static Allocation - Before Start/Execution of program, allocated Memory (Stack MEmory).
                        - Exc - Int a = 10;
                        - compile Time memory Allocation.

    2. Dynamic Allocation - During the program , Memery Allocation (HEap Memory).
                        - Exc - A = new int(5).
                        - Run time Memory Allocation.
                        - Help Pointer here.
                        - Start with New keyword.
*/

class player{
private:
    string name;
    int score;
    int rollno;
public:
    void setScore(int score){ // Setter
        this.score = score;
    }

    int getScore(){
        return score;
    }
};

int main(){
    player *Avadhesh = new player; // Run time , Dynamic allocation
    Avadhesh->setScore(100);


    player Amit;                    // Compile Tume, STatic Allocation
    amit.setScore(283);
}