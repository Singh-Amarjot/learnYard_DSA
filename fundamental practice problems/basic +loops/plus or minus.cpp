/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int num1,num2,num3;
    std::cout << "please enter all the 3 numbers" << std::endl;
    std::cin >> num1>>num2>>num3;
    
    if(num1+num2==num3){
        std::cout << "+" << std::endl;
    }
    else if(num1-num2==num3){
        std::cout << "-" << std::endl;
    }
    else{
        std::cout << "invalid case " << std::endl;
    }

    return 0;
}
