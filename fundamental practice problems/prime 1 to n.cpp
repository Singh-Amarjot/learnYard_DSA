#include <bits/stdc++.h>
using namespace std;

int main() {
	int number; 
	cout<<"please enter the number "<<endl;
	cin>>number;
	int counter=0;

	for(int i=1; i<=number;i++){  
		for(int j = 1;j<=i;j++){
          if(i%j==0){ 
			counter++;
		}
		}
		if(counter==2){
			cout<<i<<endl;
		}
		counter=0;
	}
	
	return 0;
}
