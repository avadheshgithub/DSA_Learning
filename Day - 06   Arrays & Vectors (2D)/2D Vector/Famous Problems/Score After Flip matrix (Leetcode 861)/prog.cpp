#include<iostream>
#include<vector>
using namespace std;

int matrixScore(vector<vector<int>>& grid){
    int rows = grid.size();
    int cols = grid[0].size();

    for(int i=0;i<rows;i++){
        // check if first element 0--> flip (rows)
        if(grid[i][0]==0){
            for(int j=0;j<cols;j++){
                if(grid[i][j]==0) grid[i][j]=1;
                else grid[i][j]=0;
            }
        }
    }
    // fliping with the columns where noz>noO;
    for(int j=0;j<cols;j++){
        int noz=0;
        int noo=0;
        for(int i=0;i<rows;i++){
            if(grid[i][j]==0) noz++;
            else noo++;
        }

        if(noz>noo){
            for(int i=0;i<rows;i++){
                if(grid[i][j]==0) grid[i][j]=1;
                else grid[i][j]=0;
            }
        }
    }
    int sum=0;
    for(int i=0;i<rows;i++){
        for(int j=cols-1;j>=0;j--){
            int x=1;
            sum +=grid[i][j];
            x*=2;
        }
    }

}
int main(){
    vector<vector<int>> grid = {
        {0, 0, 1, 1},
        {1, 0, 1, 0},
        {1, 1, 0, 0}
    };

    // Display original grid
    cout << "Original grid:\n";
    //print
    int m = grid.size();
    int n = grid[0].size();
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }
    

    // Apply matrixScore function
    matrixScore(grid);

    // Display the grid after transformation
    cout << "Transformed grid:\n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}