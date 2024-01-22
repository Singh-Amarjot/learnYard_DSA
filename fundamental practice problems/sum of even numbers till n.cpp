#include <bits/stdc++.h>
using namespace std;

int main() {
	cout<<"please ente the number "<<endl;
	int num;
	int sum =0;
	cin>>num;

	for(int i=1;i<=num;i++){
		if(i%2==0){
			sum+=i;
		}
	}

	cout<<"the sum of all even numbers till "<<num<<" is "<<sum<<endl;
	return 0;
}
