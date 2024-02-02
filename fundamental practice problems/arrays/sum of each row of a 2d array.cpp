#include <iostream>
using namespace std;

int main() {
   int students =6;
    int subjects = 5;
    int students_marks[students][subjects];
    int marks;
    int sum_of_row[6]={0};

    // initializing the array 
    for (int i =0;i<students ;i++ ) {
        for (int j =0;j<subjects ;j++ ) {
            cin>>marks;
            students_marks[i][j]=marks;
        }
        
    }

    // traversing the array row wise 
     for (int i =0;i<students ;i++ ) {
        for (int j =0;j<subjects ;j++ ) {
            
            sum_of_row[i]+=students_marks[i][j];
            
        }
        
    }
    for (int i =0;i<students ;i++ ) {
       cout<< sum_of_row[i]<<" ";
        
    }

  
    return 0;
}