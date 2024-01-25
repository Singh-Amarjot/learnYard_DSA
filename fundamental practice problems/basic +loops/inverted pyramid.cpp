#include <bits/stdc++.h>
using namespace std;

int main() {
	int rows = 5;
	int columns = 5;
	
	
	for(int j=1;j<=columns;j++){
		for(int s=0;s<j;s++){
			cout<<" ";
			
		}
		
		
for(int i=1;i<=rows;i++){
		cout<<"* ";
	}
	rows--;
	cout<<endl;
	}
	
	return 0;
}
