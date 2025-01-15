#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

// (Leetcode  205 )     --->given two string s and t , determine if they are isomarphic

bool isIsomorphic(string s, string t) {
    if (s.length() != t.length()) return false;

    int lastSeenS[256] = {0};
    int lastSeenT[256] = {0};

    for (int i = 0; i < s.length(); ++i) {
        if (lastSeenS[s[i]] != lastSeenT[t[i]]) {
            return false;
        }
        lastSeenS[s[i]] = i + 1;
        lastSeenT[t[i]] = i + 1;
    }

    return true;
}

int main() {
    string s1 = "egg";
    string s2 = "add";
    cout << (isIsomorphic(s1, s2) ? "True" : "False") << endl; // Output: True

    string s3 = "foo";
    string s4 = "bar";
    cout << (isIsomorphic(s3, s4) ? "True" : "False") << endl; // Output: False

    return 0;
}
