// //{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;



// // } Driver Code Ends
// class Solution{
//   public:
//     vector<int> maxPrefixes(int a[], int L[], int R[], int N, int Q) {
//         vector <int> result ;
//         int sum =0;
//         int max_sum =INT_MIN;
        
//         // calculating result as per queries 
//       for (int j=0;j<Q;j++){
//          int sum =0;
//         int max_sum =INT_MIN;
//           for(int i =L[j];i<=R[j];i++){
//               sum+=a[i];
//               max_sum = max(sum,max_sum);
//           }
//           result.push_back(max_sum);
          
//       }
       
//         return result;
//     }
// };https://www.geeksforgeeks.org/problems/maximum-prefix-sum-for-a-given-range0227/1

// //{ Driver Code Starts.
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, q;
//         cin >> n >> q;
//         int a[n], L[q], R[q];
        
//         for (int i = 0; i < n; i++) cin >> a[i];

//         for (int i = 0; i < q; i++) cin >> L[i] >> R[i];
//         Solution obj;
//         vector<int> ans = obj.maxPrefixes(a, L, R, n, q);
//         for (auto it : ans) 
//             cout << it << " ";
//         cout << endl;
//     }
// }

// // } Driver Code Ends