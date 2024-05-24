
// //{ Driver Code Starts
// #include<bits/stdc++.h>

// using namespace std;


// // } Driver Code Ends
// //User function template for C++
// class Solution{
// public:	
// 	int lbHelper(int l , int r , int arr[],int x){
// 	    int result = -1;
	    
// 	    while(l<=r){
// 	        int mid = (l+r)/2;
// 	        if(arr[mid]==x){
// 	            result =mid;
// 	            // keep searching on the left side 
// 	            r=mid-1;
// 	        }else if(arr[mid]<x){
// 	            // need to look in the right part
// 	            l=mid+1;
// 	        }else{
// 	            r=mid-1;
// 	        }
	    
// 	}
// 	    return result ;
// 	}
// 		int ubHelper(int l , int r , int arr[],int x){
// 	    int result = -1;
	    
// 	    while(l<=r){
// 	        int mid = (l+r)/2;
// 	        if(arr[mid]>x){
// 	            result =mid-1;
// 	            // keep searching on the left side 
// 	            r=mid-1;
// 	        }else {
// 	            if(arr[mid]==x){
// 	                result = mid;
// 	            }
// 	            // keep searching in the right part
// 	            l=mid+1;
// 	        }
	        
	    
// 	}
// 	    return result ;
// 	}
// 	int count(int arr[], int n, int x) {
	   
// 	   int l = 0;
// 	   int r = n-1;
	    
// 	  int ans = 0;
	   
// 	   // calling the lb helper function 
// 	   if(lbHelper(l,r,arr,x)==-1){
// 	       // elemenet is not in the array 
// 	       return ans;
// 	   }
	   
// 	   int first_index =lbHelper(l,r,arr,x);
// 	   int last_index = ubHelper(l,r,arr,x);
// 	   ans = (last_index-first_index)+1;
// 	   return ans ;
	   
// 	}
// };

// //{ Driver Code Starts.

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, x;
//         cin >> n >> x;
//         int arr[n];
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//         }
//         Solution ob;
//         auto ans = ob.count(arr, n, x);
//         cout << ans << "\n";
//     }
//     return 0;
// }
// https://www.geeksforgeeks.org/problems/number-of-occurrence2259/1
// // } Driver Code Ends