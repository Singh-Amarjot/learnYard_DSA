/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int j;
    int k = 3;
    
    for (int i = 1; i <= 30; i++) {   
        sum=0;
        for( j = i;j>0;j=j/10){
            sum+=j%10;
        }
         if(sum==k){
                cout<<i<<endl;
            }
        
    }

    return 0;
}
