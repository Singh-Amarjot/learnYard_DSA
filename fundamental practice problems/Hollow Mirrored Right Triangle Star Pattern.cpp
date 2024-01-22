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
   int space = columns-1;
   for (int i = 1; i <=rows; i++) {
   for(int s =1;s<=space;s++){
	cout<<" ";
   }
   space--;
       for (int j = 1; j <=i; j++) {
           
           if(j==1 || i==j|| i==rows){
			std::cout << "*";
		   }else{
			cout<<" ";
		   }
		   
            
           
           /* code */
       }
       cout<<endl;
   }

    return 0;
}
