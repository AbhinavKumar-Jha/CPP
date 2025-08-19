// // Leetcode 2389 (Longest Subsequence With Limited Sum)
//  // TC -> O(m*n)
// class Solution {
// public:
//     vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
//         int n = nums.size();
//         int m = queries.size();
//         vector<int> ans(m);
//         // sort nums
//         sort(nums.begin(), nums.end());
//         // make nums prefix sum
//         for(int i=1;i<n;i++){
//             nums[i] += nums[i-1];
//         }
//         for(int i=0;i<m;i++){
//             int len=0;
//             for(int j=0;j<n;j++){
//                 if(nums[j]>queries[i]) break;
//                 len++;
//             }
//             ans[i]=len;
//         }
//         return ans;
//     }
// };




// // Better method more efficient using Binary Search
// // TC -> O()
// class Solution {
// public:
//     vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
//         int n = nums.size();
//         int m = queries.size();
//         vector<int> ans(m);
//         // sort nums
//         sort(nums.begin(), nums.end());
//         // make nums prefix sum
//         for(int i=1;i<n;i++){
//             nums[i] += nums[i-1];
//         }
//         for(int i=0;i<m;i++){
//             int maxlen=0;
//             // Binary Search
//             int lo=0;
//             int hi = n-1;
//             while(lo<=hi){
//                 int mid = lo+(hi-lo)/2;
//                 if(nums[mid]>queries[i]) hi = mid-1;
//                 else{ // nums[mid] <= queries[i]
//                 maxlen = mid+1;
//                 lo = mid+1;
//                 }
//             }
//             ans[i]=maxlen;
//         }
//         return ans;
//     }
// };