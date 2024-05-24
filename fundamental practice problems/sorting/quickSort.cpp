// //{ Driver Code Starts
// #include <stdio.h>
// #include <bits/stdc++.h>
// using namespace std;

// /* Function to print an array */
// void printArray(int arr[], int size)
// {
//     int i;
//     for (i=0; i < size; i++)
//         printf("%d ", arr[i]);
//     printf("\n");
// }

// // } Driver Code Ends
// class Solution
// {
//     public:
//     //Function to sort an array using quick sort algorithm.
//     void quickSort(int arr[], int l, int r)
//     {
        
//         // base condition 
//         if(l>=r){
//             return ;
//         }
//         int id = partition(arr,l,r);
        
//         // recurrsive calls 
//         quickSort(arr,l,id-1); // sortes the left half 
//         quickSort(arr,id+1,r); // solves the right half 
//     }
    
//     public:
//     int partition (int arr[], int l, int r)
//     {
//        // selecting the pivot index 
//        int pivot = arr[r]; // last index chosen as the pivot 
       
//        // getting the two tep vectors 
//        vector<int> left ;
//        vector<int> right;
       
//        // pushing the elements in left and right 
//        for(int i =l;i<r;i++){
//            if(arr[i]<arr[r]){
//                left.push_back(arr[i]);
//            }else{
//                right.push_back(arr[i]);
//            }
//        }
       
//        // putting the elements back to arr in the correct order and returning the id 
//        int id = l;
//        for(int i=0;i<left.size();i++){
//            arr[id++]=left[i];
//            id++;
//        }
       
//     //   / pushing the pivot elemnt
//     arr[id]=pivot;
//     id++;
    
//     for(int i=0;i<right.size();i++){
//         arr[id++]=right[i];
//     }
    
//     return id-1;
//     }
    
// };
// https://www.geeksforgeeks.org/problems/quick-sort/1

// //{ Driver Code Starts.
// int main()
// {
//     int arr[1000],n,T,i;
//     scanf("%d",&T);
//     while(T--){
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//       scanf("%d",&arr[i]);
//       Solution ob;
//     ob.quickSort(arr, 0, n-1);
//     printArray(arr, n);
//     }
//     return 0;
// }
// // } Driver Code Ends