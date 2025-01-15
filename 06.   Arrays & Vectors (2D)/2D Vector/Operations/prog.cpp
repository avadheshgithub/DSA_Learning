#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to display the 2D vector
void display(const vector<vector<int>>& vec) {
    for (size_t i = 0; i < vec.size(); i++) {
        for (size_t j = 0; j < vec[i].size(); j++) {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {

    // Basic STL function

    /*
    1. vec.push_back(v) // only vectors you can push   v = {2,2,2,2}

    2. pop_back()  //  vec = { {2, 2 ,2, 2},{2, 2, 2, 2})
    
    3. begin()
                        // both are used for sort the 2d vector
    4.  end()

    5. rbegin()

    6. rend()
    
    */

    vector<vector<int>> vec = {{2, 2, 2, 2}, {2, 2, 2, 2}, {2, 2, 2, 2}};

    // Push_back
    vector<int> v = {1, 1, 1, 1};
    vec.push_back(v);

    // Print the elements
    cout << "After push_back:\n";
    display(vec);

    // Pop_back
    vec.pop_back();

    // Print the elements
    cout << "After pop_back:\n";
    display(vec);

    // Sort the elements
    // Sorting each row using begin() and end()
    for (auto& row : vec) {
        sort(row.begin(), row.end());
    }

    // Print the elements after sorting each row
    cout << "After sorting each row:\n";
    display(vec);

    // Sorting the entire 2D vector by the first element of each row
    sort(vec.begin(), vec.end());

    // Print the elements after sorting the 2D vector
    cout << "After sorting the 2D vector by the first element of each row:\n";
    display(vec);

    // Sorting each row in reverse order using rbegin() and rend()
    for (auto& row : vec) {
        sort(row.rbegin(), row.rend());
    }

    // Print the elements after sorting each row in reverse order
    cout << "After sorting each row in reverse order:\n";
    display(vec);

    return 0;
}
