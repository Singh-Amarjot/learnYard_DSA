// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int n = nums.size();
//         // checking if k is greater than nums.size()
//         if(k>n){
//             k%=n;
//         }
//         // reversing the array 
//         int limit;
//         if(n%2==0){
//             limit = n/2;
//         }else{
//             limit = (n+1)/2;
//         }
//         int temp;
//         int last=n-1;
//         for(int i =0;i<limit;i++){
//             temp=nums[i];
//             nums[i]=nums[last];
//             nums[last]=temp;
//             last--;
//         }

//         // reversing the array again as per the k 
//         int k_limit;
//         int second_limit ;
//         int k_temp;
//         int second_temp;
        
//         if(k%2==0){
//             k_limit=k/2;
//         }else{
//             k_limit = (k+1)/2;
//         }
//         if(n-k%2==0){
//             second_limit =(k-1)+((n-k)/2);
//         }else{
//             second_limit =(k-1)+((( n-k)+1)/2);
//         }
// int l = n-1;
//         for(int i =0,j=k;i<k_limit,j<=second_limit;i++,j++){
//             k_temp=nums[i]; 
//         nums[i]=nums[k-(i+1)];  
//         nums[k-(i+1)]=k_temp; 
//           second_temp=nums[j]; 
//         nums[j]=nums[l];  
//         nums[l]=second_temp; 
//         l--;
//         }
        
       

//     }
// };https://leetcode.com/problems/rotate-array/description/