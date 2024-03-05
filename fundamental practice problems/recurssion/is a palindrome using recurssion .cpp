// //{ Driver Code Starts
 
// #include <bits/stdc++.h>
// using namespace std;


// // } Driver Code Ends
// //User function template for C++
// class Solution{
// public:	
// 	int isPalindromeHelper(string &s , int l , int limit, int n  ){
	    
// 	    if(l==limit){
// 	        return 1;
// 	    }
	    
// 	    if (s[l]!= s[n-(l+1)]){
// 	        return 0;
// 	    }else{
// 	        return 1*isPalindromeHelper(s,l+1,limit,n);
// 	    }
	    
// 	}
	
// 	int isPalindrome(string s)
// 	{
	    
//         int l =0;
//         int n = s.size();
//         int limit ;
//         if (n%2==0){
//              limit = n/2;
//         }else{
//             limit = (n-1)/2;
//         }

    
//       // calling the function 
//       return isPalindromeHelper(s,l,limit,n);
// 	}

// };https://www.geeksforgeeks.org/problems/palindrome-string0817/1

// //{ Driver Code Starts.

// int main() 
// {
//    	ios_base::sync_with_stdio(0);
//     cin.tie(NULL);
//     cout.tie(NULL);
   
//    	int t;
//    	cin >> t;
//    	while(t--)
//    	{
//    		string s;
//    		cin >> s;

//    	    Solution ob;

//    		cout << ob.isPalindrome(s) << "\n";
//    	}

//     return 0;
// }
// // } Driver Code Ends