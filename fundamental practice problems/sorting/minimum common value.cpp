class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        // setting up 2 pointers 
        int p1=0;
        int p2=0;
        int ans =-1;

        int n1=nums1.size();
        int n2 = nums2.size();

        while(p1<n1 &&p2 < n2){
            if(nums1[p1]==nums2[p2]){
                ans=nums1[p1];
                break;
            }
            if(nums1[p1]<nums2[p2]){
                p1++;
            }else{
                p2++;
            }
        }
        return ans;
    }
};https://leetcode.com/problems/minimum-common-value/description/