// class Solution {
// public:
//     int maximumUniqueSubarray(vector<int>& nums) {
//         int l =0,r=0,ans=INT_MIN;
//         int sum =0;
//         unordered_map<int,int>freq;



// // employing the sliding window 
// for (r ; r<nums.size();r++){

//     // updating the frequency of the element 
//     freq[nums[r]]++;

//     sum+=nums[r];

//     // making the window valid again 
//     while(l<=r && freq[nums[r]]>1){
//         freq[nums[l]]--;
//         sum-=nums[l];
//         l++;
//     }
   

//     // calculating the ans 
//     ans = max(ans, sum);
// }
//         return ans;
//     }
// };https://leetcode.com/problems/maximum-erasure-value/