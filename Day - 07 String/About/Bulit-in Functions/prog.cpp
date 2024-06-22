/*

 Built in functions :-

    1. reverse
    2. length
    3. substring
    4. to_string
    5. push_back & 
    6. pop_back
    7. sorting
    8. stringstream(ss)
    9. stoi (string to integer)
    10. stoll (string to long long)


*/

#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;



int main(){

    // 1. Size() or length()
    string str = "Avadhesh is learning c++ DSA ";
    cout<<str.size(); // 29 (null character did'nt counted (\n) )
    cout<<str.length(); // 29


    // 2.push_back & pop_back()
    string str = "abcd";
    str.push_back('e'); // character can be pushed (not string)
    str.push_back('f');
    str.push_back('g');
    str.push_back('h');
    cout<<str<<endl; // abcdefgh


    // 3. pop_back()
    string s = "avadhesh";
    cout<<s<<endl;
    s.pop_back();
    s.pop_back();
    s.pop_back();
    cout<<s<<endl;


    // 4. Reverse()
    string str = "avadhesh";
    reverse(str.begin(),str.end()); // (reversed - all)
    reverse(str.begin()+2,str.end()); // (revsersed - 2-8)
    reverse(str.begin()+2,str.end()-1); // (reversed - 2-7))
    reverse(str.begin()+2,str.begin()+5); // (revseres - (2-4)
    cout<<str<<endl;


    // 5. Substr()
    string s = "abcdef";
    cout<<s.substr(4); // at this index and later all - print all char (ef)
    cout<<s.substr(1,3); // from b to 3 length char (idx,len) -- bcd 
    cout<<s.substr(2,2); // from c to 2 length char (idx,len) -- cd 


    // 6.to_string() - convert int to string becuase typecasting not allowed in string
    int x = 12345;
    string s = to_string(x);
    cout<<s<<endl;


    // 7. Sorting 
    string s = "name";
    sort(s.begin(),s.end());
    cout<<s<<endl;


    // 8. String stream (ss) -- split string in words 
    string str = "avadhesh   kumar shah learning dsa in c++";
    stringstream ss(str);
    string temp;

    while(ss>>temp){  // pick the string from stream and store it into in temp
        cout<<temp<<endl;
    }
    
    // 9. stoi (string to integer (-2^31 to 2^31-1))



    // 10. stoll (string to long long (-2^63 to 2^63-1))

    




    
    return 0;
}