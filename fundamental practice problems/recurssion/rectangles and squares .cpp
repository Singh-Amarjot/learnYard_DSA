// //{ Driver Code Starts
// #include<bits/stdc++.h>
// using namespace std;


// // } Driver Code Ends
// class Solution {
//   public:
//   // definging  a global moves variable 
  
//   // defining the helper function 
//   int minMovesHelper(int a , int b ){
//       // base conditions 
//       if(a==1){
//           return b ;
//       }
//       if(b==1){
//           return a ;
//       }
//       if(a==b){
//           return 1 ;
//       }
//       // primary logic 
//       if(a<b){
//           return minMovesHelper(a , b-a)+1;
//       }else{
//           return minMovesHelper(a-b,  b)+1;
//       }
      
//   }
  
//     int minimumMoves(int A, int B) {
       
        
//         // passing the argument to the helper function 
        
//        return  minMovesHelper(A,B);
        
        
        
//     }
// };


// //{ Driver Code Starts.

// int main(){
//     int t;
//     scanf("%d ",&t);
//     while(t--){
        
//         int A;
//         scanf("%d",&A);
        
        
//         int B;
//         scanf("%d",&B);
        
//         Solution obj;
//         int res = obj.minimumMoves(A, B);
        
//         cout<<res<<endl;
        
//     }
// }

// // } Driver Code Ends
https://practice.geeksforgeeks.org/contest/job-a-thon-11-hiring-challenge/problems