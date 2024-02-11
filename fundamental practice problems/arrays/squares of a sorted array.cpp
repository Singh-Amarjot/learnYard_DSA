// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& nums) {
//         int n=nums.size();
//         vector <int> result(n);
//         int right = n-1;
//         int left = 0;
//         int pos=n-1;

//         while(left<=right){
            
//             if(max(pow(nums[left],2),pow(nums[right],2))==pow(nums[left],2)){

//             result[pos]=pow(nums[left],2);
//             left++;
//             pos--;

//             }else{
//                  result[pos]=pow(nums[right],2);
//             right--;
//             pos--;

//             }

//         }
//         return result;
//     }
// };https://leetcode.com/problems/squares-of-a-sorted-array/