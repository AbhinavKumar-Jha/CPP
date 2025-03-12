#include<iostream>
using namespace std;
// sr means starting row, er for ending row and sc for starting column and ec for ending column
int maze(int sr, int sc, int er, int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rightWays = maze(sr,sc+1,er,ec);
    int downWays = maze(sr+1,sc,er,ec);
    int totalWays = rightWays+downWays;
    return totalWays;
}
int main(){
    cout<<maze(0,0,2,2);
    return 0;
}