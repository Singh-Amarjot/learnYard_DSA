// #include <bits/stdc++.h>
// using namespace std;

// int func(int x){
// 	int ans =0;
// 	while(x>0){
//       ans+=x;
// 	  x=x/10;
// 	}
// 	return ans ;
// }
// int main() {
// 	// inverse of a function bloomberg 
// 	int n = 1370;
// 	int ans = -1;
// 	// bs 
// 	int l =0;
// 	int r = n;

// 	while(l<=r){
// 		int mid = (l+r)/2;
// 		if(func(mid)==n){
// 			ans = mid;
// 			break;
// 		}else if(func(mid)<n){
// 			// shift to the right side 
// 			l = mid+1;
// 		}else{
// 			// shift to the left side 
// 			r =mid -1;
// 		}
// 	}
//      cout<<ans<<endl;
// 	return 0;
// }
