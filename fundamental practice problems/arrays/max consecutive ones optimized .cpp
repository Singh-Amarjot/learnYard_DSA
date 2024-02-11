// class Solution {
// public:
//     int findMaxConsecutiveOnes(vector<int>& nums) {
//         int current_sum = 0;
//         int final_sum = 0;

//         for(int num : nums ){
//             if(num ==1){
//                 current_sum++;  //2
//             }
//             else{
//                 current_sum=0;
//             }
//              final_sum=max(final_sum,current_sum);
//         }
       
//         return final_sum;
//     }
// };https://leetcode.com/problems/max-consecutive-ones/description/?ref=read.learnyard.com