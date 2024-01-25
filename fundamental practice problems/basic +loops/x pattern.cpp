/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int rows = 10;
    int columns = 10;
    
    for (int i = 1; i <=columns; i++) {
         for (int j = 1; j <= rows; j++){ 
         if(i==j || i+j==rows+1){
            cout<<"*"; 
         }else{
             cout<<" ";
         }
        
        
    }
    cout<<endl;
    
    }
    
   
    return 0;
}
