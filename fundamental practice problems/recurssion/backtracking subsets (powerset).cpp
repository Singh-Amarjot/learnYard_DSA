// class Solution {
// public:

// // creating the helper function 
// void backTrackHelper(int index , vector<int> & nums, vector<int> &temp,vector<vector<int>> &ans ){

// // base condition 
// if(index == nums.size()){
//     // saving temp in ans 
//     ans.push_back(temp);
//     return;
// }
// // including the element in the temp vector 
// temp.push_back(nums[index]);
// // recurrsive call to the next element after inclusion 
// backTrackHelper(index+1,nums,temp,ans);
// // not including the element to the temp vector 
// //backtrack fallback 
// temp.pop_back();
// backTrackHelper(index+1, nums, temp,ans);
// }
//     vector<vector<int>> subsets(vector<int>& nums) {
        
//         //setting up ans and temp vectors
//         vector <int> temp;
//         vector<vector<int>> ans;

//         // calling the helper function 
//         backTrackHelper(0,nums,temp,ans);
//         return ans;
//     }
// };https://leetcode.com/problems/subsets/