#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	// https://codeforces.com/problemset/problem/682/B
	// alyona and mec
	
	// kind of similar to kadane algo

	int n ;
	cin>>n;

	vector<int>nums(n);
	for(int i =0;i<n;i++){
		cin>>nums[i];
	}
sort(nums.begin(),nums.end());
	int ans = 1;
for(int i =0;i<n;i++){
		if(ans<=nums[i]){
			ans++;
		}
	}
	

	cout<<ans;
	
		return 0;
}
