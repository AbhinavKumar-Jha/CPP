// // Leetcode 1480 (Running sum of 1D array)

// // more efficient (Prefix Sum)
// class Solution {
// public:
//     vector<int> runningSum(vector<int>& nums) {
//         int n = nums.size();
//         for(int i=1;i<n;i++){
//             nums[i] = nums[i] + nums[i-1];
//         }
//         return nums;
//     }
// };


// // By Normal Method
// class Solution {
// public:
//     vector<int> runningSum(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> ans(n);
//         ans[0]=nums[0];
//         for(int i=1;i<n;i++){
//            ans[i] = nums[i]+ans[i-1];
//         }
//         return ans;
//     }
// };