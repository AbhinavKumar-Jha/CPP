// // Leetcode 442 (Find All Duplicates in an Array)

// class Solution {
// public:
//     vector<int> findDuplicates(vector<int>& nums) {
//         vector<int> result;
//         for (int i = 0; i < nums.size();i++) {
//             int idx = abs(nums[i]) - 1;
//             if (nums[idx] < 0)
//                 result.push_back(abs(nums[i]));
//             else
//                 nums[idx] = -nums[idx];
//         }
//         return result;
//     }
// };
