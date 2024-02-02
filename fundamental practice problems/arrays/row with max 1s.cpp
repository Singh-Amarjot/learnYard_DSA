// class Solution{
// public:
// 	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
// 	    // code here
// 	    vector <int> counter_collection;
// 	    int counter =0;
// 	    int result =-1;
// 	    // traversing the matrix row wise 
// 	    for(int i=0;i<n;i++){
// 	        counter=0;
// 	        for(int j=0;j<m;j++){
// 	            if(arr[i][j]==1){
// 	                counter++;
// 	            }
// 	        }
// 	        counter_collection.push_back(counter);
// 	    }
	    
// 	    // finding maximum count 
// 	    int max= 0;
	    
// 	    for(int j=0;j<counter_collection.size();j++){
// 	            if(max<counter_collection[j]){
// 	              max=counter_collection[j];
// 	              result= j;
// 	            }
// 	        }
// 	        return result;
	        
// 	}

// };
// https://www.geeksforgeeks.org/problems/row-with-max-1s0023/1