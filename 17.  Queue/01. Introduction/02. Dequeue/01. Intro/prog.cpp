/*

    ## dEQUEUE -  Double ended queue ---> push and pop can be done from both the end;

        Advantage -

            1. push and delete operations O(1) TC

*/

#include <deque>
#include <iostream>
using namespace std;

void display(const deque<int>& dq) {
    for (int val : dq) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    deque<int> dq;

    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);
    dq.push_back(50);
    display(dq); // Prints: 10 20 30 40 50
    dq.push_front(100);
    display(dq); // Prints: 100 10 20 30 40 50

    dq.pop_back();
    display(dq); // Prints: 100 10 20 30 40
    dq.pop_front();
    display(dq); // Prints: 10 20 30 40 

    dq.size(); // 4
    dq.max_size();

    dq.front(); // 10
    dq.back();  // 40
}
