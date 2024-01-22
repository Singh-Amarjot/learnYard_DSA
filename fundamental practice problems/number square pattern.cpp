/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int rows = 5;
    int columns = 5;
    
    for (int i = 1; i <=columns; i++) {
         for (int j = i; j <= rows+(i-1); j++) {
        
        cout<<j;
        
    }
    cout<<endl;
    
    }
    
   
    return 0;
}
