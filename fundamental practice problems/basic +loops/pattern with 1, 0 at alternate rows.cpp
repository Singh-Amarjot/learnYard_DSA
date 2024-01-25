#include <bits/stdc++.h>
using namespace std;

int main() {
	int rows,columns;  
	cout<<"please enter the rows and columns "<<endl;
	cin>>rows>>columns;
	
	
	for(int i=1;i<=columns;i++){

		for(int j=1;j<=rows;j++){
			if(i%2==0){
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
