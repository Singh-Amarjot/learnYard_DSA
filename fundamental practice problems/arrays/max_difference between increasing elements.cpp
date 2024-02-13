// class Solution {
// public:
//     int maximumDifference(vector<int>& nums) {
//         int ans =-1;
//         int current_min = INT_MAX;

//         for(int num :nums){
//             current_min = min(current_min,num);

//             if(num>current_min){
//                 ans = max(ans,num-current_min);
//             }
//             current_min = min(current_min,num);
//         }
//         return ans;
//     }
// };https://leetcode.com/problems/maximum-difference-between-increasing-elements/description/