/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int number;
    cout<<"please enter the number ";
    cin>>number;  // 14
    bool ugly=true;
    
    // checking if the number is ugly or not 
    
    while(number!=1){
        if(number%2==0){
            number=number/2;  // number = 7
        }
          else if(number%3==0){
            number=number/3;
        }
          else  if(number%5==0){
            number=number/5;
        }
        else{
            ugly = false;
            break;
        }
    }
    
    if(ugly){
        cout<<"number is ugly";
        } else{
    std::cout << "not ugly " << std::endl;
}

    return 0;
}
