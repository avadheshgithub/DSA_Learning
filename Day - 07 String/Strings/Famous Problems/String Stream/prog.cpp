#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;

int main(){

    //Q(01) gievn a sentence, split every single word of the sentence and print in a new line

    string str = "avadhesh   kumar shah learning DSA in c++";
    stringstream ss(str);
    string temp;

    while(ss>>temp){  // pick the string from sting stream and store it into in temp
        cout<<temp<<endl;
    }

}