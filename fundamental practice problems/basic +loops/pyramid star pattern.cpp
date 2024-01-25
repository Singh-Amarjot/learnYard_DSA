#include <bits/stdc++.h>
using namespace std;

int main() {
	int rows = 5;
	int columns = 5;
	// int space = rows-3;?
	for(int j=1;j<=columns;j++){
		for(int s=rows-j;s>0;s--){
			cout<<" ";
			
		}
		
for(int i=1;i<=j;i++){
		cout<<"* ";
	}
	cout<<endl;
	}
	
	return 0;
}
