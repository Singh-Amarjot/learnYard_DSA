// class Solution {
// public:
//     int minimumDifference(vector<int>& nums, int k) {
//         int n = nums.size();

//         sort(nums.begin(),nums.end());

//         int current_dif = 0;
//         int ans = INT_MAX;

//         for(int i =0; i+k-1<n;i++){
//             current_dif = nums[i+k-1]-nums[i];
//             ans = min(current_dif,ans);
//         }
//         ans = min(current_dif,ans);
//         return ans ;
//     }
// };https://leetcode.com/problems/minimum-difference-between-highest-and-lowest-of-k-scores/