#include <iostream>
using namespace std;
const int capacity =5;
int arr[capacity];
int i =0;
int siz = 0;

void insert_at_the_end(int element){
    
    arr[i]=element;
    i++;
    siz++;
    if(siz==capacity){
cout<<"sorry the size of the arry is equal to its capacity ";
        return;
    }
}
void delete_at_the_end(){
    if(siz==0){
cout<<"no element to be deleted";
    return;
    }
    siz--;
    i--;
}
void insert_at_the_start(int element){
    if(siz==capacity){
cout<<"array overflow";
    return; 
        }
    for(int j=siz-1;j>=0;j--){
        arr[j+1]=arr[j];
    }
    arr[0]=element;
        i++;
    siz++;
}

void delete_from_the_start(){
    if(siz==0){
        cout<<"array underflow ";
        
    }

for(int j=1;j<siz;j++){
    arr[j-1]=arr[j];
}
    i--;
    siz--;

    
}

void insert_using_index(int index,int element ){
    if(index>capacity){
cout<<"index is not available";
    }
    for (int j =siz-1;j>=index ;j-- ) {
        arr[j+1]=arr[j]; 
    }
    arr[index]=element;
    i++;
    siz++;
}

void delete_using_index(int index){
    for (int j =index;j<siz ;j++ ) {
        arr[j]=arr[j+1];
    }
    i--;
    siz--;
}

void print_array(){
    for (int j=0; j<siz ;j++ ) {
        cout<<arr[j]<<" ";
    }
}
int main() {
    insert_at_the_end(10);
    insert_at_the_end(10);
    insert_at_the_start(20);
    insert_using_index(1,30);
    
    print_array();
cout<<endl;
    delete_using_index(1);
   
    print_array();
    
    return 0;
}