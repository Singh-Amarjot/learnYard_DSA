// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//         int n = arr.size();
//         if(n<3){
//             return -1;  // edge case 
            
//         }

//         int l =0;
//         int r = n-1;

//         while(l<=r){
//             int mid = l+(r-l)/2;
//             if((mid ==0 ||arr[mid]>arr[mid-1]) && (mid ==n-1 ||arr[mid]>arr[mid+1])){
//                 return mid;
//             }else if(arr[mid]<arr[mid+1]){
//                 // shift to the right 
//                 l = mid+1;
//             }else if(arr[mid]>arr[mid+1]){
//                 // shift to the left 
//                 r = mid -1;
//             }
//         }
//         return -1;

//     }
// };https://leetcode.com/problems/peak-index-in-a-mountain-array/