/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    cout<<"please enter the limit ";
    int limit;
    cin>>limit;
    
    for (int number = 1; number <=limit; number++) {
        int sumOfDivisors=0;
        for (int i = 1; i < number; i++) {
            
            if(number%i==0){
                sumOfDivisors+=i;
            }
            /* code */
        }
        if(sumOfDivisors==number){
            cout<<number<<" "<<endl;
        }
        
        
        /* code */
    }

    return 0;
}
