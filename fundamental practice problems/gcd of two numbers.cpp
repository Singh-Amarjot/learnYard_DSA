/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout<<"please enter the two numbers to find thier gcd or hcf"<<endl;
    int number1,number2;
    cin>>number1>>number2;
    
    int  counter=0;
    int gcd ;
    
    int limit = min(number1,number2);
    
    
    
    for (int i = 1; i <= limit; i++) {
        /* code */
        if(number1%i==0 && number2%i==0){
            
           gcd = i ;
            
        }
    }
std::cout << gcd << std::endl;
    return 0;
}
