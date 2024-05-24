// class Solution {
// public:
//     int matrixSum(vector<vector<int>>& nums) {
//         // sorting each row 
//        for(int i =0;i<nums.size();i++){
//         sort(nums[i].begin(),nums[i].end());
//        }

//         // now each row has the max at the end 
//         int ans =0;
        
//          int rows =nums.size();
//          int cols = nums[0].size();

//          for(int i =0;i<cols;i++){
//             int max_ele =0;
//             for(int j =0;j<rows;j++){
               
//                 max_ele=max(max_ele,nums[j][i]);
//             }
//              ans+=max_ele;
             
//          }
//          return ans ;
//     }
// };https://leetcode.com/problems/sum-in-a-matrix/description/