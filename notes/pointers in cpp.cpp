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
    return 0;
}