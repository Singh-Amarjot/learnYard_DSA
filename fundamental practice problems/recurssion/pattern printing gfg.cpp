// //{ Driver Code Starts
// // Initial Template for C++

// #include <bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// // User function Template for C++

// class Solution{
// public:

// // creating the helper fiunction 
// void patternHelper(int N , vector<int> & ans , bool flag , int init){
    
    
//     // base condition 
    
//      if(N<=0){
//         ans.push_back(N);
//         // recurrsive call 
//         patternHelper(N+5,ans,false,init);
//     }
//     if(!flag && N>0 && init>=N){
//         ans.push_back(N);
//         // recurrsive call 
//         patternHelper(N+5,ans,false,init);
//     }
//     if(flag && N>0){
//         ans.push_back(N);
//         // recurrsive call 
//         patternHelper(N-5,ans,true,init);
//     }
   
// }
//     vector<int> pattern(int N){
        
//         vector<int> ans ;
//        const  int init = N ;
       
//         if(N<=0){
//              ans.push_back(N);
//             return ans;
//         }
//         // calling the helper function
//         patternHelper(N,ans,true,init);
//         return ans;
//     }
// };https://www.geeksforgeeks.org/problems/print-pattern3549/1

// //{ Driver Code Starts.

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int N;
//         cin>>N;
        
//         Solution ob;
//         vector<int> ans = ob.pattern(N);
//         for(int u: ans)
//             cout<<u<<" ";
//         cout<<"\n";
//     }
//     return 0;
// }
// // } Driver Code Ends