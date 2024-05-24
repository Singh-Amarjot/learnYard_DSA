#include <bits/stdc++.h>
using namespace std;

int main() {
	
	// stick lengths 
	int n ;
	cin>>n;

	vector<int> sticks(n);

	for(int i=0;i<n;i++){
		cin>>sticks[i];
	}

	// sorting the sticks collection and finding the average length 
	sort(sticks.begin(),sticks.end());
	int avg_len ;
	     
		avg_len = sticks[n/2];
	
// cout<<avg_len;
	long long  prev_sum =0;
	int l =0;
	int r = n-1;
     long long  curr_sum;
	 long long ans =0;
	while(l<=r){
        curr_sum = (sticks[r]-avg_len) + (avg_len - sticks[l]);
		
		r--;
		l++;
		ans = prev_sum + curr_sum;
		// cout<<ans<<endl;
		prev_sum += curr_sum;
	}
    // for(int i =0;i<n;i++){
    //     ans += abs(avg_len - sticks[i]);
    // }

	cout<<ans;
	return 0;
}
// https://codeforces.com/problemset/gymProblem/102961/I