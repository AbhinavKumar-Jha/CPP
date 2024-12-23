//  // Leetcode 118 (Pascal's Triangle)

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int m=5;
//     vector<vector<int> > v(m);
//     for(int i=0;i<=m;i++){
//         vector<int> a(i+1);
//         v.push_back(a);
//     }
//     // Generate
//     for(int i=0;i<m;i++){
//         for(int j=0;j<=i;j++){
//             if(j==0 || j==i){
//                 v[i][j]=1;
//             }
//             else{ 
//                 v[i][j]=v[i-1][j]+v[i-1][j-1];
//             }
//         }
//     }
//     // Print
//     for(int i=0;i<m;i++){
//         for(int j=0;j<=i;j++){
//             cout<<v[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m = 5;
    vector<vector<int>> v(m); // Initialize a vector of size m

    // Resize each row to the appropriate size
    for (int i = 0; i < m; i++) {
        v[i].resize(i + 1); // Resize row `i` to hold `i + 1` elements
    }

    // Generate Pascal's Triangle
    for (int i = 0; i < m; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                v[i][j] = 1; // First and last elements of each row are 1
            } else {
                v[i][j] = v[i - 1][j - 1] + v[i - 1][j]; // Sum of the two elements above
            }
        }
    }

    // Print Pascal's Triangle
    for (int i = 0; i < m; i++) {
        for (int j = 0; j <= i; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
