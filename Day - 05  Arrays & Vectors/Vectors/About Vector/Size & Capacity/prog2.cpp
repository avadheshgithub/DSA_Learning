#include <iostream>
using namespace std;
#include <vector>

int main()
{

    // 2nd  way of initiliaztion

    vector<int> vec(5);
    cout << "Size of the vector: " << vec.size() << endl;
    // why its coming 5 -- because you given 5 and array declared there
    cout << "capacity of the vector: " << vec.capacity() << endl;


    vector<int>v(5,7); // initial size is 5 and each element value have 7
    return 0;
}