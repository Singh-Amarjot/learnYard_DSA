/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    cout<<"enter the two numbers";
    int num1 , num2 ;
    cin >> num1>> num2;
    int min ;
     // counter 
    int counter =0;
    
    if(num1>num2){
        min=num2;
    }else{
        min = num1;
    }
    // std::cout << "outside loop"<<min << std::endl;
    
    for (int i = 1; i<=min; i++) {
        /* code */
        // cout<<"inside loop";
        if(num1%i==0 && num2%i==0){
            counter++;
              
    }}
   std::cout <<"count " <<counter << std::endl;
        
 
    

    return 0;
}
