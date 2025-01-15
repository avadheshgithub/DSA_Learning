#include <iostream>
using namespace std;
#include <vector> // note header file

/*

 int vec :- initial vec size is zero , then it create one size after statement of push_back , and then for the second element , its size is full, then its capacity is increased by double . this process continue

*/

int main()
{

    // 1. Declaration
    vector<int> vec; // not need to mention size (here size is Zero)
    // Insert / input , do notuse use []
    vec.push_back(6);
    vec.push_back(1);
    vec.push_back(8);
    vec.push_back(3);

    // 2. aceess the element
    // acess or update , can use []
    vec[0] = 88;
    cout << vec[0];

    return 0;
}