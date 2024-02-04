// class Solution {
// public:
//     int diagonalSum(vector<vector<int>>& mat) {
       
//         int primary_sum=0;
//         int secondary_sum=0;

//         // getting sum of primary diagonal elements 
//         for(int i=0;i<mat.size();i++){
//             for(int j=0;j<mat[0].size();j++){
//                 if(i==j){
//                     primary_sum+=mat[i][j];
                   
//             }else if(i+j==mat[0].size()-1){
//                 secondary_sum+=mat[i][j];
//             }
//             }
//         }
//         return primary_sum+secondary_sum;
//     }
// };https://leetcode.com/problems/matrix-diagonal-sum/description/