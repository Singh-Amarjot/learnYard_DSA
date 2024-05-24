// class Solution {
// public:
//     bool bsHelper(vector<vector<int>>& matrix, int target, int l , int r){
//      // number of rows 
//         int n = matrix.size();
//         // number of rows 
//         int m = matrix[0].size();


//      while(l<=r){
//         int mid = (l+r)/2;

//         // getting the coordinates of the middle element
//         int row_index = mid/m;
//         int column_index = mid%m;

//         // bs algo 
//         if(matrix[row_index][column_index]==target){
//             return true;
//         }else if(matrix[row_index][column_index]<target){
//             // NEED TO go to teh right 
//             l=mid+1;
//         }else{
//             // need to go the left 
//             r = mid-1;
//         }
//      }
//      return false ;
//     }
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         // number of rows 
//         int n = matrix.size();
//         // number of rows 
//         int m = matrix[0].size();

//         int l =0;
//         int r = (n*m)-1;

//         // calling the helper function 
//         return bsHelper(matrix,target,l,r);
//     }
// };https://leetcode.com/problems/search-a-2d-matrix/