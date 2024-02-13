// class Solution {
// public:
//     vector<int> findDisappearedNumbers(vector<int>& nums) {
//         int n = nums.size();
        
//         vector <int> result;
//        for (auto num:nums){
//            nums[abs(num)-1]=-abs(nums[abs(num)-1]);
//        }
//        for(int i = 0;i<size(nums);i++){
//            if(nums[i]>0){
//                result.push_back(i+1);
//            }
//        }
//         return result;

//     }
// };https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/