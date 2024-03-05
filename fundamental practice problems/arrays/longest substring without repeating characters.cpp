// //{ Driver Code Starts
// #include<bits/stdc++.h>
// using namespace std;


// // } Driver Code Ends
// class Solution{
//     public:
//     int longestUniqueSubsttr(string S){
//         int l =0, r =0, ans =0;
//         map<char, int> freq;
        
//         // using the sliding window 
//         for(int r=0;r<S.length();r++){
//             freq[S[r]]++;
            
//             // making window valid again in case it becomes invalid 
//             while(freq[S[r]]>1){
//                 freq[S[l]]--;
//                 l++;
//             }
            
//             // calculating ans
//             ans = max(ans,r-l+1);
//         }
//         return ans ;
        
//     }
// };https://www.geeksforgeeks.org/problems/length-of-the-longest-substring3036/1

// //{ Driver Code Starts.
// int main()
// {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 		string str;
// 		cin>>str;
// 		Solution ob;
// 		cout<<ob.longestUniqueSubsttr(str)<<endl;
// 	}
// 	return 0;
// }
// // } Driver Code Ends