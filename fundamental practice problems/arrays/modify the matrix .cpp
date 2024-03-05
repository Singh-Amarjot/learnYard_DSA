// my approach 
// kind of a brute force approach 



// class Solution {
// public:
//     vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
//         int n = matrix.size(); // row length
//         int m = matrix[0].size(); // column length 
//         int max_element = INT_MIN;
//         vector <int> max_element_collection;

//         // column wise traversal to find the max in each column 
//         for(int i =0;i<m;i++){
//             max_element = INT_MIN;
//             for(int j=0;j<n;j++){
//                 max_element = max(max_element,matrix[j][i]);
//             }
//             max_element_collection.push_back(max_element);
//         }

//         // replacing -1 in each column with the max 
//          for(int i =0;i<m;i++){
//             for(int j=0;j<n;j++){
//                if(matrix[j][i]==-1){
//                    matrix[j][i]=max_element_collection[i];
//                }
//             }
           
//         }
//         return matrix;
//     }
// };https://leetcode.com/problems/modify-the-matrix/