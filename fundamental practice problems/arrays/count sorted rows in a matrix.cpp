
class Solution {
  public:
    int sortedCount(int N, int M, vector<vector<int>> Mat) {
        
        int asc_case =0;
        int desc_case =0;
        int counter=0;
        
        
        // traversing the array
        for(int i=0;i<N;i++){
            asc_case=0;
            desc_case=0;
            for(int j=0;j<M-1;j++){
                if(Mat[i][j]<Mat[i][j+1]){
                    asc_case++;
                }
                if(Mat[i][j]>Mat[i][j+1]){
                    desc_case++;
                }
            }
            if(asc_case==M-1 || desc_case==M-1){
                counter++;
            }
        }
        return counter;
    }
};