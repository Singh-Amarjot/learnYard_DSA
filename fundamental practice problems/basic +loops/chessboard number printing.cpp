#include <bits/stdc++.h>
using namespace std;

int main() {

	int columns = 6;
	int rows = 5;

	for(int j=1;j<=columns;j++){
		
	

	for(int i=1;i<=rows;i++){
		if(j%2!=0){
			if(i%2==0){
			cout<<"0";

		}
		else{
			cout<<"1";
		}

		}else{
			if(i%2==0){
			cout<<"1";

		}
		else{
			cout<<"0";
		}
		}
		
	}
	cout<<endl;
	}
	return 0;
}
