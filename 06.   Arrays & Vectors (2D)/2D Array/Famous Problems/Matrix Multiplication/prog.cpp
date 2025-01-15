#include<iostream>
using namespace std;

int main() {
    cout << "For the 1st Matrix :- " << endl;
    int m;
    cout << "Enter m value: ";
    cin >> m;

    int n;
    cout << "Enter n value: ";
    cin >> n;

    cout << "For the 2nd Matrix :- " << endl;

    int p;
    cout << "Enter p value: ";
    cin >> p;

    int q;
    cout << "Enter q value: ";
    cin >> q;

    if (n == p) {
        int a[m][n];
        cout << "Enter the elements for 1st matrix: ";
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }

        int b[p][q];
        cout << "Enter the elements for 2nd matrix: ";
        for (int i = 0; i < p; i++) {
            for (int j = 0; j < q; j++) {
                cin >> b[i][j];
            }
        }

        // Resultant matrix
        int res[m][q];
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < q; j++) {
                /* multiply 
                         Summation a[i][r] + b[r][i]  where 0<r<n-1

                 in case of a - row is constant 
                     a[i][0]* __  +  a[i][1] * ___  +  a[i][2] * ___

                 in case of b - column is contant
                     ___ *b[0][j]  +  ___*b[1][j]  +  ____*b[2][j]

                 Final Resultant matrix
                 res[i][j] = a[i][0]*b[0][j] + a[i][1]*b[1][j] + a[i][2]*b[2][j] + ------------

                */

                res[i][j] = 0;
                for (int k = 0; k < n; k++) {
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        // Print the result
        cout << "Resultant matrix: " << endl;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < q; j++) {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "The matrices can't be multiplied." << endl;
    }

    return 0;
}
