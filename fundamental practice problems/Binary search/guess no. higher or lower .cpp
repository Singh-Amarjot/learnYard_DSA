// /** 
//  * Forward declaration of guess API.
//  * @param  num   your guess
//  * @return 	     -1 if num is higher than the picked number
//  *			      1 if num is lower than the picked number
//  *               otherwise return 0
//  * int guess(int num);
//  */

// class Solution {
// public:
//     int guessNumber(int n) {
        
//         int l = 0;
//         int r = n;
//            int ans ;
//         // applying binary search 
//         while(l<=r){
//             int  mid=l+(r-l)/2;
//             if(guess(mid)==0){
//                ans = mid ;
//                break;
//             }if(guess(mid)==-1){
//                 // shift to the left
//                 r= mid -1; ;
//             }if(guess(mid)==1){
//                 // shift to the left side 
//                 l = mid +1;
//             }
//         }
//         return ans ;
//     }
// };https://leetcode.com/problems/guess-number-higher-or-lower/