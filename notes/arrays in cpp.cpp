#include <iostream>
using namespace std;
int main() {
    // declaring an array
int arr[4]={1,2,3,5};
    
    // accessing the elements of an arry 
    for (int i =0;i<4 ;i++ ){
        cout<<"the "<<i+1<<" element of the array arr is "<<arr[i]<<endl;
    } 
    

    // this is also possible 
    int brr[]={1,45,4,7,8}; // the size of array will 
    // automatically be determined as per the numbe of 
    // elements in the initializer list  

    // however , this is not possible 
    // int crr[5];
    // crr={1,2,4,5,6}  // this thorows an error as here your are basically changing the base address of crr 
    //     that is the memory adress of the first element of the array to something like {1,2,4,5,6} which is not possible 
    // you can not change the memory address of any entity like this 

        // the thing is that arr , brr or crr all these are pointers , pointing to the base address of their respective array 
        cout<<arr<<" base address of arr "<<endl; // prits the base address of arr

    // Now, as arr is basically a pointer so you can even get the value that the memory addressholds using the dereferencing operator 
    // like this 
    cout<<"the value held by memory address "<<arr<<" is "<<*arr<<endl;

    // actualy *arr is nothing but arr[0]

    // let me explain , [] is actually an operato that evalutes expressions like 
    // *(arr+0) to arr[0]
    // *(arr+1) to arr[1]  and so on so actually writing 1[arr] will also be the same as arr[1] as *(arr+1) and *(1+arr) are acually alike 

    // lets try this 
    cout<<*arr+2<<endl; // it wll print the value of element at the 2nd index in the arry arr         
    cout<<arr[2]<<endl;
    cout<<2[arr]<<endl;
    

    return 0;
}