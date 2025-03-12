#include<iostream>
using namespace std;
int maze2(int row, int col){
    if(row<1 || col<1) return 0;
    if(row==1 && col==1) return 1;
    int rightWays = maze2(row,col-1); // Right
    int downWays = maze2(row-1,col); // Down
    int totalWays = rightWays+downWays;
    return totalWays;
}
void printPath(int row, int col, string s){
    if(row<1 || col<1) return; // Destination not reached
    if(row==1 && col==1){ // Destination reached
        cout<<s<<endl;
        return;
    }
    printPath(row,col-1,s+'R'); // Right
    printPath(row-1,col,s+'D'); // Down
    
}
int main(){
    cout<<maze2(3,3)<<endl;
    printPath(3,3,"");
    return 0;
}