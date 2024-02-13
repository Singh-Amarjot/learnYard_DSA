// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int running_sum =0;
//         int max_sum = INT_MIN;
//         for(int num:nums){
//                running_sum+=num;
//                 max_sum=max(running_sum,max_sum);
                

//                 if(running_sum<0){
//                     running_sum=0;
//                 }

            
            
//         }
//         return max_sum;
//     }
// };https://leetcode.com/problems/maximum-subarray/