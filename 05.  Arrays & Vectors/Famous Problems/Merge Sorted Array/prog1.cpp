#include <iostream>
#include <vector>
using namespace std;

// methode 1st to sort array

void display(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;

}
vector<int> merge(vector<int>& arr1, vector<int>& arr2) {
    int n = arr1.size();
    int m = arr2.size();
    vector<int> res(m + n);

    int i = 0; // arr1
    int j = 0; // arr2
    int k = 0; // res

    while (i < n && j < m) {
        if (arr1[i] <= arr2[j]) {
            res[k] = arr1[i];
            i++;
        } else {
            res[k] = arr2[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of arr1, if any
    while (i < n) {
        res[k] = arr1[i];
        k++;
        i++;
    }

    // Copy the remaining elements of arr2, if any
    while (j < m) {
        res[k] = arr2[j];
        k++;
        j++;
    }

    return res;
}
int main() {
    /*
    
                       Q(1) merge two sorted array
    
    */

    vector<int> arr1;
    arr1.push_back(2);
    arr1.push_back(8);
    arr1.push_back(16);
    arr1.push_back(17);
    display(arr1);

    vector<int> arr2;
    arr2.push_back(3);
    arr2.push_back(7);
    arr2.push_back(11);
    arr2.push_back(16);
    arr2.push_back(19);
    arr2.push_back(22);
    display(arr2);

    vector<int> v = merge(arr1, arr2);
    display(v);

    return 0;
}