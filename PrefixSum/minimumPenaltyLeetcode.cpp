// // Leetcode 2483 (Minimum Penalty for a Shop)

// class Solution {
// public:
//     int bestClosingTime(string customers) {
//         int n = customers.length();
//         vector<int> pre(n+1, 0); // no of N before kth hour
//         vector<int> suf(n+1, 0); // no of Y after and including kth hour
//         // Build prefix
//         for (int i = 0; i < n; i++) {
//             pre[i+1] = pre[i] + (customers[i] == 'N');
//         }
//         // Build suffix
//         for (int i = n-1; i >= 0; i--) {
//             suf[i] = suf[i+1] + (customers[i] == 'Y');
//         }
//         int minPen = INT_MAX;
//         int ans = 0;
//         // Calculate penalty
//         for (int i = 0; i <= n; i++) {
//             int pen = pre[i] + suf[i];
//             if (pen < minPen) {
//                 minPen = pen;
//                 ans = i;
//             }
//         }
//         return ans;
//     }
// };
