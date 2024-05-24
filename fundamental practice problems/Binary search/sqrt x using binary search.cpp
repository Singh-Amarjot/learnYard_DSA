// class Solution {
// public:
//    int bsHelper(int x , int l , int r ){
//     int ans = 0;
//     // edge case 
//     if(x ==1) return 1;
//     while(l<=r){
//         long mid = (l+r)/2;
//         if(mid*mid<=x){
//           ans =mid;
//           //  keep searching on the right 
//           l=mid+1;
//         }else{
//             // start searching on the left
//             r=mid-1;
//         }
//     }
//     return ans;
//    }
//     int mySqrt(int x) {
//         int l =0;
//         int r = x/2;
//         // calling the helper function 
//         return bsHelper(x,l,r);
//     }
// };https://leetcode.com/problems/sqrtx/