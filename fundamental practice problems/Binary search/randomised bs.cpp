// #include <bits/stdc++.h>
// using namespace std;

// // defining the bs func 
// int bs_helper(vector<int>&arr,int target){
// 	int n = arr.size();
// 	int l = 0;
// 	int r = n-1 ;

// 	while(l<=r){
// 		int pivot = l+(rand()%(r-l+1));

// 		if(arr[pivot]==target){
// 			return pivot;
// 		}else if (arr[pivot]<target){
// 			// shift to the right part 
// 			l = pivot+1;
// 		}else{
// 			// shift to the left part 
// 			r = pivot-1;
// 		}
// 	}
// 	return -1 ; // if elemeent is not found 
// }
// int main() {
// 	// randomised binary search 
// 	vector<int>arr={1,2,4,5,7,9,12,15};
// 	int target = 7 ;

// 	// calling the bs function 
// 	cout<< bs_helper(arr,target);

// 	return 0;
// }
