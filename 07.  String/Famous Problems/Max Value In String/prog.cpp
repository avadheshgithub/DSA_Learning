#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // given n strings consisting of digits from 0 to 9. return the index of string which has maximum value;

    string arr[] = {"0123", "0023", "456", "00182", "942"};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = stoi(arr[0]); // string to int
    string maxS = arr[0];

    for (int i = 1; i < n; i++) { // Fixing the loop range
        int x = stoi(arr[i]);
        if (x > max) {
            max = x;
            maxS = arr[i]; // Updating maxS inside the if block
        }
    }

    cout << maxS;

    return 0;
}
