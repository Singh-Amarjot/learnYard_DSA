// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int n ;
// 	int l ;
// 	cin>>n;
// 	cin>>l;
    
// 	vector<int>lamps(n);
     
// 	for(int i =0;i<n;i++){
// 		 cin>>lamps[i];
// 	}
//  sort(lamps.begin(),lamps.end());
// 	// finding the max_gap 
// 	int max_gap = 0;
// 	for(int i =0;i<n-1;i++){
// 		int current_gap = lamps[i+1]-lamps[i];
// 		max_gap = max(current_gap,max_gap);
// 	}

// 	int max_edge_gap = max(lamps[0],l-lamps[n-1]);
// 	// max out of the initial and final gap 

// double ans ;
// 	if(max_edge_gap>max_gap/2){
//         ans = max_edge_gap;
// 	}else{
// 		ans = max_gap/2.0;
// 	}
// 	cout << setprecision(20) << ans << endl;
// 	return 0;
// }https://codeforces.com/contest/492/problem/B
