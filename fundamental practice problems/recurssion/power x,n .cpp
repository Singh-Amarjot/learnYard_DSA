// class Solution {
// public:
//     double powerHelper(double x, int n) {
//         // base condition
//         if (n == 0) {
//             return 1;
//         }
//         // primary logic
//         return x * powerHelper(x, n - 1); //.. recurrsive call
//     }
//     double myPow(double x, int n) {
//         // calling the helper function

//         if(n<0){
// return 1/powerHelper(x,abs(n));
//         }else{
//             return powerHelper(x,n);
//         }
        
//     }
// // }; tc --> O n  sc --> O n 

// optimised approach 
// class Solution {
// public:
//     double powerHelper(double x, int n) {
//         // base condition
//         if (n == 0) {
//             return 1;
//         }
//         // primary logic
//         double partial_ans = powerHelper( x , n/2);

//         if(n%2==0){
//             return partial_ans * partial_ans ;
//         }else{
//             return partial_ans * partial_ans * x ;
//         }
//     }
//     double myPow(double x, int n) {
//         // calling the helper function

//         if(n<0){
// return 1/powerHelper(x,abs(n));
//         }else{
//             return powerHelper(x,n);
//         }
        
//     }
// };https://leetcode.com/problems/powx-n/