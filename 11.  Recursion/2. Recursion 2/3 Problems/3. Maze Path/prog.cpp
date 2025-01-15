/*
    ##  Maze Path  

        1. R ---> right ways
        2.  D --> Down Ways

        To Reach Destination

            sr - start row
            sc - staring columns
            er - ending row
            ec - ending columns
*/

#include<iostream>
using namespace std;

int maze(int sr,int sc, int er, int ec){
    if(sr>er || sc>ec ) return 0;
    if(sr==er || sc==ec) return 1; // destination reached
    int rightWays = maze(sr,sc+1,er,ec);
    int downWays = maze(sr+1,sc,er,ec);
    return rightWays + downWays;
}

int maze2(int row, int col){
    if(row<1 || col<1 ) return 0;
    if(row==1 && col==1) return 1; // destination reached
    int rightWays = maze2(row, col-1);
    int downWays = maze2(row-1,col);
    return rightWays + downWays;
}

void PrintMazePath(int sr,int sc, int er, int ec, string s){
    if(sr>er || sc>ec ) return ;
    if(sr==er || sc==ec) {
        cout<<s<<endl;
        return;
    }
    PrintMazePath(sr,sc+1,er,ec,s+'R');
    PrintMazePath(sr+1,sc,er,ec,s+'D');
}
int main(){
    PrintMazePath(0,0,2,2," ");
    cout<<maze2(3,3);
}