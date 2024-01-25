/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// step1==> get the min limit and max limit 
// step 2=> get the sum of digits of the number 
// step 3 ==> increment the number and repeat the process till the last number 

#include <iostream>

using namespace std;

int main()
{
    std::cout << "please enter the lower and upper limit numbers " << std::endl;
    
    int minNumber,maxNumber;
    cin>>minNumber>>maxNumber;
    int sum =0;
    
    for (int i = minNumber; i <=maxNumber; i++){ //120
       
        for(int j=i;j>0;j=j/10){
            sum += j%10;
        }
        cout<<sum<<endl;
		sum=0;
        
    
    }
    

    return 0;
}
