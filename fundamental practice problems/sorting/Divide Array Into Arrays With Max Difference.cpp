// class Solution {
// public:
//     vector<vector<int>> divideArray(vector<int>& nums, int k) {
//         vector<vector<int>>ans;

//         // sorting nums 
//         sort(nums.begin(),nums.end());
//         // checking if difference bw adjacent elements is <=k or not 
            
//             if(nums.size()%3!=0){
//             return ans;
//         }
        
        
//         for(int i =2;i<nums.size();i+=3){
//              if(nums[i] - nums[i - 2] > k) return {};
//             ans.push_back({nums[i-2],nums[i-1],nums[i]});
//         }
//       return ans ;
//     }
// };
// // https://leetcode.com/problems/divide-array-into-arrays-with-max-difference/