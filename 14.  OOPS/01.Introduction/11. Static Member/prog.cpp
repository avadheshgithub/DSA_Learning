/*
## Static Member:
   The `static` keyword is used with a variable to make its memory allocation static. 
   Once a static variable is declared, its memory persists across multiple function calls 
   or objects (depending on its usage in classes or functions).
*/

#include <iostream>
using namespace std;

class Bikes {
    // Static member variable declaration
    static int numOfBikes; // Belongs to the class, shared by all objects of the class.
    
    int tyreSize;
    int engineSize;

public:
    // Static member function
    static void setNumOfBikes(int no) {
        numOfBikes = no;
        numOfBikes++;
    }

    // Function to print the number of bikes
    static void printNumOfBikes() {
        cout << "Number of bikes: " << numOfBikes << endl;
    }
};

// Define the static member variable outside the class
int Bikes::numOfBikes = 0;

void print() {
    static int b = 10; // Static variable retains its value between function calls.
    cout << b << endl;
    b++;
}

int main() {
    // Using the static member function
    Bikes::setNumOfBikes(5);
    Bikes::printNumOfBikes();

    // Demonstrating static variable behavior
    cout << "Without Static Variable:" << endl;
    print(); // 10
    print(); // 10
    print(); // 10

    cout << "With Static Variable:" << endl;
    print(); // 10
    print(); // 11
    print(); // 12

    return 0;
}
