// // Leetcode 78 (Subsets)

// class Solution {
//     public:
//         void helper(vector<int>& nums, vector<int> ans, vector<vector<int>>& finalAns, int idx){
//             if(idx==nums.size()){
//                 finalAns.push_back(ans);
//                 return;
//             }
//             helper(nums,ans,finalAns,idx+1);
//             ans.push_back(nums[idx]);
//             helper(nums,ans,finalAns,idx+1);
//         }
//         vector<vector<int>> subsets(vector<int>& nums) {
//             vector<int> ans;
//             vector<vector<int>> finalAns;
//             helper(nums,ans,finalAns,0);
//             return finalAns;
//         }
//     };