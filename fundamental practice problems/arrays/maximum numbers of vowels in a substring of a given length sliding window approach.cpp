// class Solution {
// public:
//     int maxVowels(string s, int k) {
//         int left = 1;
//        int  right = k-1;
//         int counter =0;
//        int  max_count = 0;

//         // finding the number of vowels in 1st window 
//         for(int i =0; i<k;i++){
//             if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ){
//                 counter++;
//             }
//         }
//         // sliding the window and maintaing the respective count 
//         while(right<s.length()){
//             max_count = max(max_count, counter);
//             if(s[left-1]=='a' ||s[left-1]=='e' ||s[left-1]=='i' ||s[left-1]=='o' ||s[left-1]=='u'){
//                 counter--;
//             }
//             if(s[right+1]=='a'||s[right+1]=='e' ||s[right+1]=='i' ||s[right+1]=='o' ||s[right+1]=='u'){
//                 counter++;
//             }
//             left++;
//             right++;
//         }
//         return max_count;
//     }
// };https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/