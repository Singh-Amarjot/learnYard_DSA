#include <iostream>
using namespace std;

int main() {
    int n = 7;
    int arr[n]={12,56,78,90,14,74,45};

    int temp;

    for(int i = 0;i<n;i++){
        if(n%2!=0 &&i==((n-1)/2)+1){
break;
        }else if (n%2==0 && i==(n/2)){
            break;
        }

        temp=arr[i]; //12 56 78 90
        arr[i]=arr[n-(i+1)];   //87 90 78  56
        arr[n-(i+1)]=temp;   //12   56  78

        
    }

     for(int i = 0;i<n;i++){

        cout<<arr[i]<<endl;
        
    }
    return 0;
}