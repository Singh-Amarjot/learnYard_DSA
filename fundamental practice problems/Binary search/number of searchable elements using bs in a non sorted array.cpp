// #include <bits/stdc++.h>
// using namespace std;


// // binary searchable 

// // binary search function that returns either true or false 
// bool binary_search(vector<int>&arr, int target ){
//  int n = arr.size();
//  int l = 0;
//   int r = n-1;

//   while(l<=r){
// 	int mid = l+(r-l)/2;
// 	if(arr[mid]==target){
// 		return true ;
// 	}else if(arr[mid]<target){
// 		// needs to shift to the right 
// 		l = mid+1;
// 	}else{
// 		// needs to shift to the left 
// 		r = mid-1;
// 	}
//   }
//   return false ; // if element cann ot be searched 
// }

// // counter function to count the number of searchable elements in the array using bs 
// int bs_counter(vector<int>&arr){
// 	int cnt =0;
// //calling the bs function for each element in the array 
// 	for(auto ele : arr){
//        if(binary_search(arr, ele )==true){
// 		cnt++;
// 	   }
// 	}

// 	return cnt;
// }
// int main() {
// 	// your code goes here
// 	// calling the counter function 
// 	vector<int>arr ={1,6,4,10,3,5,7};

// 	cout<<bs_counter(arr);
// 	return 0;
// }
