#include <bits/stdc++.h>
using namespace std;

int main() {
	int number;
	cout<<"please enter the number "<<endl;
	cin>>number;
	int counter=0;

	for(int i=1; i<=number;i++){
		if(number%i==0){
			counter++;
		}
	}
	if(counter>2){
		cout<<"the number is not prime"<<endl;
	}else{
		cout<<"the number is prime"<<endl;
	}
	return 0;
}
