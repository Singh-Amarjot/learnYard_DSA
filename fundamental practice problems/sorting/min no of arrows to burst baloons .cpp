// class Solution {
// public:

// static int cmp(vector<int>&a,vector<int>&b){
//     if(a[1]<b[1]){
//         return 1;
//     }else{
//         return 0;
//     }
// }
//     int findMinArrowShots(vector<vector<int>>& points) {
        
// int counter = 1;
//         // sorting points 
//         sort(points.begin(),points.end(),cmp);
//             int prev =0 ;
//                  // [[1,2],[3,4]]-->  00 01 10 11
//            for(int i = 0;i<points.size();i++){
//             if(points[i][0]>points[prev][1]){
//                 counter++;
//                 prev=i;
           
//            }
//         }
//         return counter;
//     }
// };https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/description/