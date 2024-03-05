// class Solution {
// public:
//     int numSubarrayProductLessThanK(vector<int>& nums, int k) {
//         int l =0, r=0,ans=0,product=1;

//         // using sliding window approach 
//         for (r;r<size(nums);r++){
//             product*=nums[r];
            

//             // making the window valid again 
//             while (l<=r && product>=k){
//                 product=product/nums[l];
//                 l++;
//             }

//            ans+= r-l+1;
//         }
//         return ans ;
//     }
// };https://leetcode.com/problems/subarray-product-less-than-k/description/