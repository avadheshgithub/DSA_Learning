#include<iostream>
using namespace std;
#include<vector>

/*
 vec size  & vec capacity  -- both are not same
*/

/*
 it works something like this ->

 int vec :- initial vec size is zero , then it create one size after statement of push_back , and then for the second element , its size is full, then its capacity is increased by double . this process continue

*/

int main(){

    vector<int>vec;
    vec.push_back(6);
    cout<<"Vector size :- "<<vec.size()<<" but ";
    cout<<"Vector Capacity :- "<<vec.capacity()<<endl;

    vec.push_back(1);
    cout<<"Vector size :- "<<vec.size()<<" but ";
    cout<<"Vector Capacity :- "<<vec.capacity()<<endl;

    vec.push_back(8);
    cout<<"Vector size :- "<<vec.size()<<" but ";
    cout<<"Vector Capacity :- "<<vec.capacity()<<endl;

    vec.push_back(5);
    cout<<"Vector size :- "<<vec.size()<<" but ";
    cout<<"Vector Capacity :- "<<vec.capacity()<<endl;

    vec.push_back(9);
    cout<<"Vector size :- "<<vec.size()<<" but ";
    cout<<"Vector Capacity :- "<<vec.capacity()<<endl;


    return 0;
}