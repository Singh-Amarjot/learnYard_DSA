// class Solution {
// public:
// void reverseStringHelper(int n , int l, int limit ,vector<char>& s){
     
//       if(l==limit){ // base condition 
//           return;
//       }

//       swap(s[l],s[n-(l+1)]);
//       reverseStringHelper(n , l+1, limit ,s);
      
// }
//     void reverseString(vector<char>& s) {
//         int n = size(s);
//         int l =0;
//         int limit ;
//          if (n%2==0){
//              limit = n/2;
//         }else{
//             limit = (n-1)/2;
//         }
        
//         reverseStringHelper(n,l, limit,s );
       
//     }
// };https://leetcode.com/problems/reverse-string/