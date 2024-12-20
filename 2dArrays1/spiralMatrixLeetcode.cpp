// // Leetcode 54 (Spiral Matrix)

// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//     int m=matrix.size();
//     int n=matrix[0].size();
//     int minr=0, minc=0;
//     int maxr=m-1, maxc=n-1;
//     vector<int> v;
//     while(minr<=maxr && minc<=maxc){
//         // right
//         for(int j=minc;j<=maxc;j++){
//             v.push_back(matrix[minr][j]);
//         }
//         minr++;
//         if(minr>maxr || minc>maxc) break;
//         // Down
//         for(int i=minr;i<=maxr;i++){
//             v.push_back(matrix[i][maxc]);
//         }
//         maxc--;
//         if(minr>maxr || minc>maxc) break;
//         // Left
//         for(int j=maxc;j>=minc;j--){
//             v.push_back(matrix[maxr][j]);
//         }
//         maxr--;
//         if(minr>maxr || minc>maxc) break;
//         // Up
//         for(int i=maxr;i>=minr;i--){
//             v.push_back(matrix[i][minc]);
//         }
//         minc++;
//         if(minr>maxr || minc>maxc) break;
//     }
//     return v;
//     }
// };