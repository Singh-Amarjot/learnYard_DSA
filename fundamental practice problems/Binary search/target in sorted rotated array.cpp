// https://leetcode.com/problems/search-in-rotated-sorted-array/

// class Solution {
// public:
//     int bsHelper(vector<int>& nums, int target,int l ,int r){
//        int last_Ele = nums[r];
//        while(l<=r){
//         int mid = (l+r)/2;
//         // selecting the right region for bs 
//         if(target>last_Ele && nums[mid]<=last_Ele){
//             // shift to the left region 
//             r = mid -1;
//         }else if(target<=last_Ele && nums[mid]>last_Ele){
//             // shift to the right region 
//             l = mid +1 ;
//         }else{
//             if(nums[mid]==target){
//                 return mid;
//             }else if(nums[mid]<target){
//                 l=mid+1;
//             }else{
//                 r=mid-1;
//             }
//         }
//        }
//        // if loop ends and no index is eturned , return -1
//        return -1;
//     }
//     int search(vector<int>& nums, int target) {
//         int n = nums.size();
//         int l = 0;
//         int r = n-1;

//         // calling the helper  function 
//         return bsHelper(nums,target,l,r);
//     }
// };