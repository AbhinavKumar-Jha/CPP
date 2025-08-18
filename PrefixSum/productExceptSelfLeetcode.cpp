// // Leetcode 238 (Product of Array Except Self)

// // First method
// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         int n = nums.size();
//         int product=1;
//         vector<int> pre(n);
//         vector<int> suf(n);
//         vector<int> ans(n);
//         // Prefix product array
//         int p = nums[0];
//         pre[0] = 1;
//         for(int i=1;i<n;i++){
//             pre[i]=p;
//             p *= nums[i];
//         }
//         // Suffix product array
//         p = nums[n-1];
//         suf[n-1] = 1;
//         for(int i=n-2;i>=0;i--){
//             suf[i]=p;
//             p *= nums[i];
//         }
//         // ans array
//         for(int i=0;i<n;i++){
//             ans[i]=pre[i]*suf[i];
//         }
//         return ans;
//     }
// };


// // Second (more effiecient) method  - Better

// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> pre(n);
//         vector<int> suf(n);
//         // Prefix product array
//         int p = nums[0];
//         pre[0] = 1;
//         for(int i=1;i<n;i++){
//             pre[i]=p;
//             p *= nums[i];
//         }
//         // Suffix product array
//         p = nums[n-1];
//         suf[n-1] = 1;
//         for(int i=n-2;i>=0;i--){
//             suf[i]=p;
//             p *= nums[i];
//         }
//         // pre[i] = pre[i]*suf[i]
//         for(int i=0;i<n;i++){
//             pre[i]=pre[i]*suf[i];
//         }
//         return pre;
//     }
// };

