#include <iostream>
using namespace std;

int main() {
    int n = 8;
    int arr[n]={1,2,3,4,5,6,7,8};
    float median;


        if(n%2==0){
            float  expression = (arr[(n/2)-1]+arr[n/2]);
            median = expression/2;
            
}else{
            median =arr[((n-1)/2)];
}
        
    

    cout<<median<<" ";
    return 0;
}