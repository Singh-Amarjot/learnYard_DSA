// class Solution {
// public:
//     vector<int> rearrangeArray(vector<int>& nums) {
//         vector <int> positives ;
//         vector <int> negatives;
//         int n = nums.size();
//         vector <int> result;

//         for(int i=0;i<n;i++ ){
//             if(nums[i]>0){
//                 positives.push_back(nums[i]);

//             }else{
//                 negatives.push_back(nums[i]);
//             }
//         }

//         for(int i=0;i<n/2;i++)
// {
//         result.push_back(positives[i]);
//         result.push_back(negatives[i]);
// }    

// return result;
// }
// };https://leetcode.com/problems/rearrange-array-elements-by-sign/