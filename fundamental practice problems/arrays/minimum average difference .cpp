// class Solution {
// public:
//     int minimumAverageDifference(vector<int>& nums) {
//         long n = nums.size();
//         long current_average_dif ; 
//         vector <long> pre_collection;
//         int result ;
//         // changing the array into a prefix sum array 
//         long pre=0;
//         for(int i =0;i<n;i++){
//             pre+=nums[i];
//             pre_collection.push_back(pre);
//         }

//         // calculaitng the average sum for each index from n-1 to 0
//         long min_average_dif =LONG_MAX;
        
//          for(int i =0;i<n;i++){

//             if(i==n-1){
//                 current_average_dif =  pre_collection[i]/n;
//             }
//            else if(i<n-1){

// long current = pre_collection[i]/(i+1);
// long last = (pre_collection[n-1]- pre_collection[i])/(n-i-1);

// current_average_dif = abs(current-last);
// }
            
//             if(min_average_dif > current_average_dif){
//                 min_average_dif = current_average_dif;
//                 result = i;
//             }

//         }

//         return result ;
//     }
// };https://leetcode.com/problems/minimum-average-difference/description/