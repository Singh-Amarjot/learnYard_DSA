#include <bits/stdc++.h>
using namespace std;

int main() {
	int rows = 5;
	int columns = 5;
for(int j =1;j<=columns;j++){
	for(int i=1;i<=rows;i++){
		if(j==1||j==columns|| i ==1|| i==rows){
cout<<"*";
		}else{
			cout<<" ";
		}
		
	}
	cout<<endl;
}
	
	return 0;
}
