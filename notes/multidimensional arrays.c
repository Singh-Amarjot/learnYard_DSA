#include <iostream>
using namespace std;
int main() {
    int students =6;
    int subjects = 5;
    int students_marks[students][subjects];
    int marks;

    // initializing the array 
    for (int i =0;i<students ;i++ ) {
        for (int j =0;j<subjects ;j++ ) {
            cin>>marks;
            students_marks[i][j]=marks;
        }
        
    }

    // // traversing the array row wise 
    //  for (int i =0;i<students ;i++ ) {
    //     for (int j =0;j<subjects ;j++ ) {
            
    //         cout<<students_marks[i][j]<<' ';
    //     }
    //     cout<<endl;
    // }

    // column wise traversal of the array 
        for (int j =0;j<subjects ;j++ ) {
     for (int i =0;i<students ;i++ ) {
            
            cout<<students_marks[i][j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}