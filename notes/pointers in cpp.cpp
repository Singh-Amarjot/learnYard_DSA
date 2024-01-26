#include <iostream>
using namespace std;
int main() {
   // pointers are nothing but a type of special variables that store the memory address of a entity 
   //  for example the base address of an array int arr[4]={1,2,3,4,5,6} will be stored iin a pointer called arr

   //  similarly you can store the address of different data type variables in a pointer 

   //  how ? lets figure out ...>

       int a = 5;  // let say we have a variable called a 

    // a holds v as a value but 

        cout<<"the address of a is "<<&a<<endl;  // &a will give you its memory address & is caled the Address Of operator 


    // now to store the address of a you can use a poiner variable like this 
    int *ptr=&a;  // note that the data type of ptr is int exacty same as the variable whose address its going to hold;

    cout<<ptr<<endl; // gives me the address of the variable a 
    // now to get the actual vaue you can use the dereferencing operator like this
    cout<<*ptr<<endl;

    // the data type of ptr is int exacty same as the variable whose address its going to hold but why ?
    // this is because ......... do some research ..

    // pointer t pointer 

    // now , as pointer also would need some memory itself so we can store the memory adress of a pointer in another ponter called a pointer 2 pointer 

    // like this 
    int var = 10;
    int *ptr = &var; // pointer hoding the memory address of variable var 
    int **ptr_ptr = &ptr ;// pointer holding the memory addresss of the pointer variable which further holds the memory address of a variable called var  



    // so , in this way

   cout<<ptr<<endl; // prints the adress of variable var 
   cout<<*ptr<<endl; // dereferences the address and prints the actual value in var 
   cout<<ptr_ptr<<endl; // prints the memor addrsess of the pointer ptr 
   cout<<*ptr_ptr<<endl; // prits the value being held by the pointer ptr that is the address of var 
   cout<<**ptr_ptr<<endl; // prnts the value of var 





    return 0;
}