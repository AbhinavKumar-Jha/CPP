// Leetcode 240
// Search 2D Matrix 
// class Solution {
//     public:
//         bool searchMatrix(vector<vector<int>>& matrix, int target) {
//             int rows=matrix.size();
//             int cols=matrix[0].size();
//             int i=0;
//             int j=cols-1;
//             while(i<=rows-1 && j>=0){
//                 if(matrix[i][j]==target) return true;
//                 else if(matrix[i][j]>target) j--;
//                 else i++;
//             }
//             return false;
//         }
//     };

// We can do this by simple method also but that method is not time effiecient and needs a lot of time and space complexity so we prefer above method to solve this problem

