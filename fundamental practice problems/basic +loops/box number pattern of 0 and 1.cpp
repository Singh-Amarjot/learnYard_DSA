#include <bits/stdc++.h>
using namespace std;

int main() {

	int columns = 6;
	int rows = 5;

	for(int j=1;j<=columns;j++){
for(int i=1;i<=rows;i++){
		if(i==1||j==1||i==rows||j==columns){
			cout<<"1";

		}
		else{
			cout<<"0";
		}
	}
	cout<<endl;
	}

	
	return 0;
}
