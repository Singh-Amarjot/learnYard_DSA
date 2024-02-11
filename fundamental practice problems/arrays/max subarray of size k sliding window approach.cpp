// public:
//     long maximumSumSubarray(int K, vector<int> &Arr , int N){
//         // code here 
//         long  final_sum =0;
//        long current_sum =0;
//         int left =1;
//         int right = K-1;
        
//         for (int i=0;i<K;i++){
//             current_sum+=Arr[i];
//         }
        
//         while(right<N){
//              final_sum= max(final_sum,current_sum);
//                 current_sum = (current_sum)-Arr[left-1]+Arr[right+1];
//                 left++;
//                 right++;
//             }
//         return final_sum;
//     }
// };https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1?ref=read.learnyard.com