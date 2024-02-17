// class Solution {
// public:


// int atmost(vector<int>& nums,int g){
//      long l =0; long r =0;
//         long ans=0;
//         long sum =0;

//       for(r;r<nums.size();r++){
//           sum +=nums[r];
//           while(l<=r && sum>g){
//               sum-=nums[l];
//               l++;
//           }
//            ans+=r-l+1;
//       }
//       return ans ;
// }
//     int numSubarraysWithSum(vector<int>& nums, int goal) {
//        return atmost(nums,goal)-atmost(nums,goal-1);
//     }
// };https://leetcode.com/problems/binary-subarrays-with-sum/