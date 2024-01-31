// class Solution {
// public:
//     bool uniqueOccurrences(vector<int>& arr) {
//         bool unique=true;
//          vector <int> repeated;
//         vector <int> count_collection;
//         int counter = 0;

//         for(int i =0;i<arr.size();i++){
//              bool found = false;
//    for(auto it:repeated){
//      if(it==arr[i]){
      
//        found = true;
//        break;
//      }
//    }
//             counter=0;
//         for(int j=0;j<arr.size();j++){
//             if(arr[i]==arr[j]&& found!=true ){
//                  repeated.push_back(arr[i]);
//                 counter++;
//             }
//         }
//          if(counter!=0){
//                   count_collection.push_back(counter);
// }
//         }
//         for(int i =0;i<count_collection.size();i++){
            
//         for(int j=i+1;j<count_collection.size();j++){
//             if(count_collection[i]==count_collection[j]){
//                 unique=false;
//             }
//         }
//         }
//         return unique;
       
//     }
// };