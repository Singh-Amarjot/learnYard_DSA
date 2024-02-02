#include <iostream>
using namespace std;
int main() {
  int matrix[5][5];
   int temp;
    for(int i=0;i<5;i++){
        for (int j =0;j<5 ;j++ ) {
            cin>>matrix[i][j];
            
        }
    }
    for(int i=0;i<5;i++){
        for (int j =0;j<5 ;j++ ) {
            cout<<matrix[i][j]<<' ';
            
        }
        cout<<endl;
    }
    
     for(int i=0;i<5;i++){
        for (int j =0;j<5 ;j++ ) {
            if(i==j){
               temp = matrix[i][j];
                matrix[i][j]=matrix[i][5-1-i];
                matrix[i][5-1-i]=temp;
}
                     
        }
         
    }
    cout<<"\n";
     for(int i=0;i<5;i++){
        for (int j =0;j<5 ;j++ ) {
            cout<<matrix[i][j]<<" ";
            
        }
        cout<<endl;
    }
    
    
    return 0;
}