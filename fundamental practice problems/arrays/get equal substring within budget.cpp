// class Solution {
// public:
//     int equalSubstring(string s, string t, int maxCost) {
//         int l =0, r=0, ans =0, cost =0;

//         // using the sliding window approach 

//         for (r ; r<s.length();r++){

//             cost += abs(int(s[r])-int(t[r]));

//             // making the window valid again 

//             while(cost>maxCost){
//                 cost-=abs(int(s[l])-int(t[l]));
//                 l++;
//             }

//             ans = max(ans, r-l+1);

//         }
//         return ans;
//     }
// };https://leetcode.com/problems/get-equal-substrings-within-budget/description/