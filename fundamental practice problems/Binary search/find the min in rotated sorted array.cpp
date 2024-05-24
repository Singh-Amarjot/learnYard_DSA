// class Solution {
// public:
//   int bsHelper(vector<int>& nums,int l , int r ){
//          int last_ele = nums[r];
//            int ans =-1;
//          while(l<=r){
            
//             int mid = (l+r)/2;
//             if(nums[mid]>last_ele){
//                 // needs to shift to the right region 
//                 l=mid+1;
//             }else{
//                 ans = nums[mid];
//                 // keep searching on the left 
//                 r = mid-1;
//             }
//          }
//          return ans ;
//   }
//     int findMin(vector<int>& nums) {
//         int n = nums.size();
//         int l = 0;
//         int r = n-1;

//         // calling the helper function 
//         return bsHelper(nums,l,r);
//     }
// };https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/