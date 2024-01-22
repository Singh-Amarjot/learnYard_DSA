#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	cout<<"please enter the number "<<endl;
	int number ; //19
	cin>>number;

	int pw = 0;
	bool isPowerOfTwo = false;
if(number==1){
	isPowerOfTwo=true;
} 
	for (number; number>1;){
		if(number%2==0 ){
			number=number/2;
			pw++; //1 2 3 4 5 6
			isPowerOfTwo = true;
		}
		else{
            isPowerOfTwo = false;
			break;
		}
	}
	number = number*pow(2,pw);

	if(isPowerOfTwo){
		cout<<"yes "<<number<<" is a power of 2";
	}
	else{
		cout<<"no "<<number<<" is not a power of 2";
	}
	return 0;
}
