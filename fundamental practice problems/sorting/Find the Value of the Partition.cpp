// class Solution {
// public:
//     int findValueOfPartition(vector<int>& nums) {
//         int n = nums.size();
//         // setting up two vectors for being partitioned 
        
//        sort (nums.begin(),nums.end());
//         int ans =INT_MAX;
//         int current_dif ;
//         for(int i =0;i<n-1;i++){
//             current_dif = nums[i+1]-nums[i];
//             ans =min(ans,current_dif);
//         }
//            ans = min(ans, current_dif);
//            return ans ;
             
//     }
// };https://leetcode.com/problems/find-the-value-of-the-partition/