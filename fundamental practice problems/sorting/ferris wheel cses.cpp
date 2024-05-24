#include <bits/stdc++.h>
using namespace std;

int main() {
	// taking another approach for the ferris wheel problem 
	int n ;
int x ;

cin>>n;
cin>>x;

vector<int>p(n);

for(int i =0;i<n;i++){
	cin>>p[i];
}
// greedy approach 
 sort (p.begin(),p.end());


int l = 0;
int r = n-1;
int ans = 0;
while(l<=r){
	if(p[l]+p[r]<=x){
		l++;
		r--;
		ans++;
	}else if(p[r]<=x){
		r--;
		ans++;
	}
}
cout<<ans;
	return 0;
}
// https://cses.fi/problemset/result/9226920/#test4
