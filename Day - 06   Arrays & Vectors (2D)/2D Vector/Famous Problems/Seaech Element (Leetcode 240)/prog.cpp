#include<iostream>
#include<vector>
using namespace std;

// Q() Write an efficient algorithm that seach for a value target in an m*n matrix which
//     has the following property (Leetcode 240)

//     1. integer in each row are sorted in accending order from left to right
//     2. integers in each column are sorted in accesind order from top to bottom




bool searchMatrix(vector<vector<int>>& matrix, int target){
    int rows = matrix.size();
    int cols = matrix[0].size();
    int j= cols-1;
    int i=0;
    while(i<=rows-1 && j>=0){
        if(matrix[i][j]==target) return true;
        else if(matrix[i][j]>target) j--;
        else i++;
    }
    return false;
}

int main(){
    vector<vector<int>> matrix = {
        {1,4,7,11,15},
        {2,5,8,12,19},
        {3,6,9,16,22},
        {10,13,14,17,24},
        {18,21,23,26,30}
    };

    // Display original grid
    cout << "Original grid:\n";
    //print
    int m = matrix.size();
    int n = matrix[0].size();
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"See the result whether element is found or not (1-Yes & 0 - No) : ";
    cout<<searchMatrix(matrix,5);



}