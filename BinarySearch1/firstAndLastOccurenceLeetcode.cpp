// // Leetcode 34 (Find First and Last Position of Element in Sorted Array)
// class Solution {
//     public:
//         void firstoccurence(vector<int>& nums, int target, int &first) {
//             int lo = 0, hi = nums.size() - 1;
//             first = -1;
//             while (lo <= hi) {
//                 int mid = lo + (hi - lo) / 2;
//                 if (nums[mid] == target) {
//                     first = mid;
//                     hi = mid - 1;  // Search in the left half
//                 }
//                 else if (nums[mid] < target) lo = mid + 1;
//                 else hi = mid - 1;
//             }
//         }
//         void lastoccurence(vector<int>& nums, int target, int &last) {
//             int lo = 0, hi = nums.size() - 1;
//             last = -1;
//             while (lo <= hi) {
//                 int mid = lo + (hi - lo) / 2;
//                 if (nums[mid] == target) {
//                     last = mid;
//                     lo = mid + 1;  // Search in the right half
//                 }
//                 else if (nums[mid] < target) lo = mid + 1;
//                 else hi = mid - 1;
//             }
//         }
//         vector<int> searchRange(vector<int>& nums, int target) {
//             int first, last;
//             firstoccurence(nums, target, first);
//             lastoccurence(nums, target, last);
//             if (first == -1) return {-1, -1}; // Target not found
//             return {first, last};
//         }
//     };
    