// Leetcode 21 (Next Permutation)

class Solution {
public:
//     // void reverse(vector<int>& nums, int i, int j){
//     //     while(i<j){
//     //         int temp = nums[i];
//     //         nums[i] = nums[j];
//     //         nums[j] = temp;
//     //         i++;
//     //         j--;
//     //     }
//     //     return;
//     // }
//     void nextPermutation(vector<int>& nums) {
//         int n=nums.size();
//         // finding pivot index
//         int idx = -1;
//         for(int i=n-2;i>=0;i--){
//             if(nums[i]<nums[i+1]){
//                 idx=i;
//                 break;
//             }
//         }
//         if(idx==-1){
//             reverse(nums.begin(), nums.end());
//         }
//         // sorting/reverse after pivot
//         reverse(nums.begin()+idx+1, nums.end());
//         // finding the just greater element then idx
//         int j=-1;
//         for(int i=idx+1;i<n;i++){
//             if(nums[i]>nums[idx]){
//                 j=i;
//                 break;
//             }
//         }
//         // swapping idx and idx+1
//         int temp = nums[idx];
//         nums[idx] = nums[j];
//         nums[j] = temp;
//         return;
//     }
// };
  void nextPermutation(vector<int>& nums) {
    const int n = nums.size();

    // From back to front, find the first number < nums[i + 1].
    int i;
    for (i = n - 2; i >= 0; --i)
      if (nums[i] < nums[i + 1])
        break;

    // From back to front, find the first number > nums[i], swap it with
    // nums[i].
    if (i >= 0)
      for (int j = n - 1; j > i; --j)
        if (nums[j] > nums[i]) {
          swap(nums[i], nums[j]);
          break;
        }

    // Reverse nums[i + 1..n - 1].
    reverse(nums, i + 1, n - 1);
  }

 private:
  void reverse(vector<int>& nums, int l, int r) {
    while (l < r)
      swap(nums[l++], nums[r--]);
  }
};