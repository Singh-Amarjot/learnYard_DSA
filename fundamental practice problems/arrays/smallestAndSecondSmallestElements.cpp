
vector<int> minAnd2ndMin(int a[], int n) {
   
 vector <int> result;
 int min = INT_MAX;
 int second_min= INT_MAX;
 int counter =0;
 int base = a[0];



 for(int i =0;i<n;i++){
      if(base==a[i]){
       counter++;
    }
     if(min>a[i]){
         min=a[i];
 }
 }
 for(int i = 0;i<n;i++){
     if(second_min>a[i] && a[i]!=min){
         second_min = a[i];
     }
 }
 
 if(n<2||counter==n){
     return {-1,1};
 }
 
 result.push_back(min);
 result.push_back(second_min);
 
 return result;
   
}