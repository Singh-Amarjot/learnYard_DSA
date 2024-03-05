// class Solution {
// public:
//     int maximumPopulation(vector<vector<int>>& logs) {
//         int years[2051]={0};
//         int ans=INT_MIN;
//         int result;

//         // seting up flags 
//         for (auto log : logs ){
//             int left = log[0];
//             int right = log[1];
//             years[left]++;
//             years[right]--;
//         }

//         // calculating prefix sum and ans 
//         for (int j =1950;j<2050;j++){
//             years[j]+=years[j-1];
//             ans = max(ans, years[j]);
//         }

//         // calculating max population 
//    for(int j =1950;j<2050;j++ ){
//        if(years[j]==ans ){
//            result = j;
//            break;
//        }
//    }

//        return result ; 
//     }
// };https://leetcode.com/problems/maximum-population-year/description/