// //{ Driver Code Starts
// // Program to find minimum number of platforms
// // required on a railway station
// #include <bits/stdc++.h>
// using namespace std;


// // } Driver Code Ends
// class Solution{
//     public:
//     //Function to find the minimum number of platforms required at the
//     //railway station such that no train waits.
//     int findPlatform(int arr[], int dep[], int n)
//     {
//     	// sorting the arrays
//     	sort(arr,arr+n);
//     	sort(dep,dep+n);
    	
//     	// using the two pointer technique to get the ans 
//     	int a =0;
//     	int d =0;
    	
//     	int curr = 0;
//     	int ans = 0;
    	
//     	while(a<n && d<n){
//     	    if(arr[a]<=dep[d]){
//     	        curr++;
//     	        a++;
//     	    }else{
//     	        curr--;
//     	        d++;
//     	    }
    	    
//     	    ans = max(ans,curr);
//     	}
//     	return ans ;
//     }
// };


// //{ Driver Code Starts.
// // Driver code
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--) 
//     {
//         int n;
//         cin>>n;
//         int arr[n];
//         int dep[n];
//         for(int i=0;i<n;i++)
//             cin>>arr[i];
//         for(int j=0;j<n;j++){
//             cin>>dep[j];
//         }
//         Solution ob;
//         cout <<ob.findPlatform(arr, dep, n)<<endl;
//     } 
//    return 0;
// // }https://www.geeksforgeeks.org/problems/minimum-platforms-1587115620/1
// // } Driver Code Ends