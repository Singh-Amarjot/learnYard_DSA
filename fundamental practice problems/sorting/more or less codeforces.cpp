#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int k ;
	cin>>n;
	cin>>k;

	vector<int>collection(n);

	for(int i =0;i<n;i++){
		cin>>collection[i];
	}

int ans =-1;
	// sorting the collection 
	sort(collection.begin(),collection.end());

	// handling edge cases 
	if(k==n){
       ans = collection[n-1];
	}

	if(k == 0) {
        cout << (collection[0] == 1 ? -1 : 1); return 0;
    }

if(collection[k-1]!=collection[k]){
	ans = collection[k-1];
}

cout<<ans;
	return 0;
}
