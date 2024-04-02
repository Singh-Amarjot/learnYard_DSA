// class Solution {
// public:
//     int isPowerOfThreeHelper(int n ){
// // base condition 
// if(n==1 ){
//     return 1 ;
// }

//         // primary logic 
//         if(n%3!=0 || n==0){
//             return 0;
//         }else{
//             return isPowerOfThreeHelper(n/3);
//         }
//     }
//     bool isPowerOfThree(int n) {
//         // passing the args to the helper function 
//         if(isPowerOfThreeHelper(n)==1){
//             return true;
//         }else{
//             return false;
//         }
//     }
// };https://leetcode.com/problems/power-of-three/