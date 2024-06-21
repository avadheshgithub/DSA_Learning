#include<iostream>
#include<vector>
using namespace std;

int main() {
    // rotate matrix 90 degree
    /*
       to solve this - step (01) transpose the matrix
                     - step (02) reverse each row 
    */
    int m;
    cout << "Enter the row number: ";
    cin >> m;

    // input from the user
    vector<vector<int>> arr(m, vector<int>(m));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    cout << endl;

    // print the matrix 
    cout << "Original matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // transpose the matrix
    for (int i = 0; i < m; i++) {
        for (int j = i + 1; j < m; j++) {
            // swap i,j & j,i
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    // reverse each row
    for (int k = 0; k < m; k++) {
        int i = 0;
        int j = m - 1;
        while (i < j) {
            int temp = arr[k][i];
            arr[k][i] = arr[k][j];
            arr[k][j] = temp;
            i++;
            j--;
        }
    }

    cout << "The matrix after rotation: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
