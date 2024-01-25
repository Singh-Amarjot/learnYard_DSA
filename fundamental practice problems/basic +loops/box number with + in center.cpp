#include <bits/stdc++.h>
using namespace std;

int main() {

	int columns = 5;
	int rows = 5;

	for(int j=1;j<=columns;j++){
		
	

	for(int i=1;i<=rows;i++){
		if(i==rows-2 ||j==rows-2){
			cout<<"0";

		}
		else{
			cout<<"1";
		}
	}
	cout<<endl;
	}
	return 0;
}
