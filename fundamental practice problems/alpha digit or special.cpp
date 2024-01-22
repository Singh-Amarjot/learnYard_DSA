#include <bits/stdc++.h>
using namespace std;

int main() {
	char input;
	cout<<"please enter the character"<<endl;
	cin>>input;

	if((int(input)>=65 && int(input)<=90) ||(int(input)>=97 && int(input)<=122) ){
		cout<<"alphabet"<<endl;
	} else if((int(input)>=48 && int(input)<=57)){
		cout<<"digit"<<endl;
	}else{
		cout<<"special character"<<endl;
	}
	return 0;
}
