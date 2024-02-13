// class Solution {
// public:
//     vector<long long> findPrefixScore(vector<int>& nums) {
//         vector <long long> result;
//         int  current_max = INT_MIN;
//         long long   conversion;
//         long long  ans = 0;

//         for (auto num : nums ){
//             current_max= max(current_max,num);
//             conversion = current_max+num;
//             ans+=conversion;
//             result.push_back(ans);
//         }
//         return result;
//     }
// };https://leetcode.com/problems/find-the-score-of-all-prefixes-of-an-array/