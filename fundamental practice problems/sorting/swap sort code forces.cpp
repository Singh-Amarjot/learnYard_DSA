#include <bits/stdc++.h>
using namespace std;

// definig the comparataor function 
static bool cmp(vector<int>&a,vector<int>&b){
	if(a[0]<b[0]){
		return true ;
	}else{
		return false;
	}
}
int main() {
	//SwapSort
	int n ;
	cin>>n ;

	vector<int>collection(n);
	for(int i =0;i<n;i++){
		cin>>collection[i];
	}

	// setting up a new 2d vector 
	vector<vector<int>> new_collection;

	// pushing elements with their respective index in the new collection 
	for(int i =0;i<n;i++){
		new_collection.push_back({collection[i],i});
	}

	// sorting the new collection 
	sort(new_collection.begin(),new_collection.end(),cmp);

	// getting the min number of swaps 
	int swaps =0;
    // vector for mapping swapped indices 
	vector<vector<int>>indices;
	for(int i =0;i<new_collection.size();i++){
		if(i==new_collection[i][1]){
			continue;
		}
		indices.push_back({new_collection[i][1],new_collection[new_collection[i][1]][1]});
		swap(new_collection[i],new_collection[new_collection[i][1]]);
		swaps++;
		
		i--;
	}

cout<<swaps<<endl;
for(auto index :indices){
	cout<<index[0]<<' '<<index[1]<<endl;
}
	return 0;
}
// https://codeforces.com/problemset/problem/489/A
