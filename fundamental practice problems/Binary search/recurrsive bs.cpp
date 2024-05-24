// class Solution {
// public:
// int searchHelper(vector<int>& nums,int l, int r ,int target){
     
//   // base case if element is not there 
//   if(l>r){
//     return -1;
//   }
//      // finding the mid 
//      int middle = (l+r)/2;

//      if(nums[middle]==target){
//         return middle;
//      }else if(nums[middle]<target){
//         return searchHelper(nums,middle+1,r,target);
//      }else{
//         return searchHelper(nums,l,middle-1,target);
//      }

// }
//     int search(vector<int>& nums, int target) {
//         // passing the args to the helper function 
//         return searchHelper(nums,0,nums.size()-1,target);
//     }
// };https://leetcode.com/problems/binary-search/