
#include <iostream>
using namespace std;

int main() {
	cout<<"please enter the number";
    int number ;
    cin>>number;

    int sum = 0;
    for(number; number>0; number=number/10){
        sum+=number%10;

    }
	return 0;
}
