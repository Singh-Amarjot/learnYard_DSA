// // setting up the helper function 
// void sumKHelper(int index,long long sum, long long k, vector<int>&a, vector<int> &temp, vector<vector<int>>&ans){
    

//     // base condition 
//    if(sum==k){
//         ans.push_back(temp);
       
//         return;
//     }
//     if(index==a.size() || sum>k){
//         return ;
//     }

//     if(sum>0){
//         temp.push_back(a[index]);
//         sum+=a[index];
//         sumKHelper( index+1, sum, k, a, temp, ans);
//         sum-=a[index];
//         temp.pop_back();
//     }else{
//   // including the element in temp vector 
//     temp.push_back(a[index]);
//     // incrementing sum 
//     sum+=a[index];

//     // recurssive call 
//     sumKHelper( index+1, sum, k, a, temp, ans);

//     // not including the current element 
//     // backtrack fallout 
//     temp.pop_back();
//     // decrementing the sum 
//     sum-= a[index];
//     // recurssive call 
//     sumKHelper( index+1, sum, k, a, temp, ans);
//     }
  

// }



// vector<vector<int>> subarraysWithSumK(vector<int> a, long long k) {
//     int n = a.size();
    
//     vector<vector<int>> ans;
//     vector<int>temp;
//     long long sum=0;
//     sumKHelper(0,sum,k,a,temp,ans);
//     return ans;
// }https://www.naukri.com/code360/problems/subarrays-with-sum-%E2%80%98k'_6922076?leftPanelTabValue=SUBMISSION