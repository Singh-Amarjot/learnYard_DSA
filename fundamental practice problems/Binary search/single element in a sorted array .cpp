// class Solution {
// public:
//     int singleNonDuplicate(vector<int>& nums) {
//         int n= nums.size();
//         int l = 0;
//         int r = n-1 ;

//         // applying bs 
//         while(l<=r){
//             int mid = l+(r-l)/2;
//             if((mid ==0 || nums[mid]!=nums[mid-1]) && (mid ==n-1 ||nums[mid]!=nums[mid+1])){
//                 return nums[mid];
//             }else if((mid%2==0 && nums[mid]==nums[mid+1])||(mid%2!=0 && nums[mid]==nums[mid-1])){
//                 // still on the left side so needs to shift to the rigth 
//                 l = mid+1;
//             }else if((mid%2==0 && nums[mid]==nums[mid-1])||(mid%2!=0 && nums[mid]==nums[mid+1])){
//                 // still on the right side so needs to shift to the left 
//                 r = mid -1;
//             }
//         }
//         return - 1;
//     }
// };https://leetcode.com/problems/single-element-in-a-sorted-array/