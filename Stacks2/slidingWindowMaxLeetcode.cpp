// // Leetcode 239 (Sliding Window Maximum)

// // This is brute force approach so it may be correct for partial test cases

// class Solution {
// public:
//     vector<int> maxSlidingWindow(vector<int>& arr, int k) {
//         vector<int> ans;
//         int n=arr.size();
//         for(int i=0;i<n-k+1;i++){
//             int mx = INT_MIN;
//             for(int j=i;j<i+k;j++){
//                 mx = max(mx,arr[j]);
//             }
//             ans.push_back(mx);
//         }
//         return ans;
//     }
// };