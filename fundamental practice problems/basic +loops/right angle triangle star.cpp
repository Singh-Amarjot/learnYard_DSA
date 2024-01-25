#include <bits/stdc++.h>
using namespace std;

int main() {
	int number;  
	cout<<"please enter the number "<<endl;
	cin>>number;
	
	
	for(int i=1;i<=number;i++){
		
		
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
