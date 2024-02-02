#include <iostream>
using namespace std;
int main() {
  int matrix[5][5];
    bool upper_triangular ;
    for(int i=0;i<5;i++){
        for (int j =0;j<5 ;j++ ) {
            cin>>matrix[i][j];
            
        }
    }
     for(int i=0;i<5;i++){
        for (int j =0;j<5 ;j++ ) {
            if(matrix[i][j]!=0 && i>j){
               upper_triangular= false;
}else{ 
               upper_triangular = true;
} 
            
            
        }
         cout<<endl;
    }
    cout<<upper_triangular;
    return 0;
}