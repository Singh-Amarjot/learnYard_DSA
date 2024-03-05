// //{ Driver Code Starts
// // Initial Template for C++

// #include <bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// // User function Template for C++

// class Solution {
//   public:
  
//   // global veriable 
//   int reverseSum ;
//   // helper function to calculate the digit sum of the number 
//   int digitSumHelper(int number){
      
//     //   base condition 
//     if(number==0){
//         return 0;
//     }
      
//       // primary logic 
//      return number%10 + digitSumHelper(number/10); // recurrsive call
//   }
  
//   // reverse function definition 
//   void reverse( int digitSum ){
      
//       //base condition 
//       if(digitSum==0){
//           return;
//       }
      
//       // primary logic 
//      reverseSum = reverseSum*10 + digitSum%10;
//       // recurssive call 
//       reverse (digitSum/10);
      
//   }
  

//     int isDigitSumPalindrome(int n) {
        
//          reverseSum = 0;
//         // calling the digitSum function 
//         int digitSum = digitSumHelper(n);
        
//         // calling the reverse function   
        
//         reverse(digitSum);
        
//         // returning result 
//         if(digitSum==reverseSum){
//              return 1;
//         }else{
//             return 0 ;
//         }
       
      
     
//     }
// };

// //{ Driver Code Starts.
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int N;
//         cin >> N;
//         Solution ob;
//         cout << ob.isDigitSumPalindrome(N) << "\n";
//     }
// }

// // } Driver Code Ends

https://www.geeksforgeeks.org/problems/sum-of-digit-is-pallindrome-or-not2751/1