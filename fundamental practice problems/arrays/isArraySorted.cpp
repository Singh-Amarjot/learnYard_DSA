/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int n = 10;
   int arr[5]={7,2,10,5,32};
   
   int max = arr[0];
   int min = arr[0];
   int range ;
   
   for (int i = 0; i < 5; i++) {
      if(arr[i]>max){
          max=arr[i];
      }
      if(arr[i]<min){
          min=arr[i];
      }
       /* code */
   }
   range = max-min;
   
std::cout << "the range of the array is "<<range << std::endl;
    return 0;
}
