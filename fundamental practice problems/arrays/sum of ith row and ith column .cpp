
// class Solution {
//   public:
//     int sumOfRowCol(int N, int M, vector<vector<int>> A) {
//         // code here
//         int limit = min(N,M);
//        vector <int> row_sum_collection;
//          vector <int> column_sum_collection;
     
//        int result;
//         int row_sum =0;
//         int column_sum = 0;
      
//               for(int i=0;i<limit;i++){
//                   row_sum=0;
//             for(int j=0;j<M;j++){
//                 row_sum+=A[i][j];
                
//             }
//             row_sum_collection.push_back(row_sum);
            
//         }
//             for(int j=0;j<limit;j++){
//                 column_sum=0;
//         for(int i=0;i<N;i++){
//                 column_sum+=A[i][j];
                
//             }
//             column_sum_collection.push_back(column_sum);
//         }
        
//        for(int i=0;i<limit;i++){
//                 if(row_sum_collection[i]!=column_sum_collection[i]){
//                     result=0;
//                 }else{
//                     result = 1;
//                 }
                
//             }
        
        
//      return result;
//     }
// };

// //{ Driver Code Starts.

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int N, M;
//         cin >> N >> M;
//         vector<vector<int>> A(N, vector<int>(M));
//         for (int i = 0; i < N; i++)
//             for (int j = 0; j < M; j++) cin >> A[i][j];
//         Solution ob;
//         cout << ob.sumOfRowCol(N, M, A) << "\n";
//     }
// }
// // } Driver Code Ends
// https://www.geeksforgeeks.org/problems/sums-of-i-th-row-and-i-th-column3054/1