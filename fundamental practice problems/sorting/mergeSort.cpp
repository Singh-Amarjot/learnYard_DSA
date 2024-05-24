// class Solution {
// public:
//     vector<int> sortArray(vector<int>& nums) {
//         int n = nums.size();

//         // base case checking if there is only one element in the array or not 
//         if(n==1){
//             return nums;
//         }

//         // splitting the array in two halves 
//         vector<int> left(nums.begin(),nums.begin()+n/2);
//         vector<int> right(nums.begin()+n/2,nums.end());

//         // making the recurrsive calls 
//         left = sortArray(left);
//         right = sortArray(right);

//         // calling the mergeHelper function 
//         return mergeHelper(left,right);
//     }

//     // defining the mergeHelper function 
//     vector<int> mergeHelper(vector<int> left, vector<int> right){
//         int n1 = left.size();
//         int n2 = right.size();
//         vector<int> ans;

//         // using the two pointer approach two compare the elements in both the arrays and to push them in the ans 
//         int l =0;
//         int r =0;
//         while(l<n1 && r<n2){
//             if(left[l]<right[r]){
//                 ans.push_back(left[l]);
//                 l++;
//             }else{
//                 ans.push_back(right[r]);
//                 r++;
//             }
//         }

//         // inclusing the remaining elements
//         while(l<n1){
//             ans.push_back(left[l]);
//             l++;
//         }
//          while(r<n2){
//             ans.push_back(right[r]);
//             r++;
//         }

//         return ans ;
//     }
// };https://leetcode.com/problems/sort-an-array/