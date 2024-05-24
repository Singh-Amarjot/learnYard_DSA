// // Pascal Triangle
// // https://www.geeksforgeeks.org/problems/pascal-triangle0652/1


// class Solution{
// public:
    
//    const int mod = 1e9+7;
    
//     vector<long long> rec(int n){
// 		// base case
//         if(n == 1) return {1};
//         // it will give prev row
//         vector<long long> prevRow = rec(n-1);
        
//         vector<long long> currRow(n, 0);
//         currRow[0] = 1; currRow[n-1] = 1; //first and last element of any row would be always 1
        
//         for(int i=1;i<n-1;i++){
// 			//current element is the sum of the element present at the same i and element present at i-1 in prevRow
//             currRow[i] = (prevRow[i-1]+prevRow[i]) % mod;
//         }
        
//         return currRow;
//     }
    
//     vector<long long> nthRowOfPascalTriangle(int n) {
//         vector<long long> result = rec(n);
//         return result;
//     }
// };
